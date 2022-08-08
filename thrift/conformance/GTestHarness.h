/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <memory>
#include <stdexcept>
#include <string>
#include <string_view>
#include <vector>

#include <fmt/core.h>
#include <folly/FileUtil.h>
#include <folly/Range.h>
#include <folly/String.h>
#include <folly/Subprocess.h>
#include <folly/Synchronized.h>
#include <folly/io/async/AsyncSocket.h>
#include <folly/io/async/EventBase.h>
#include <folly/lang/Exception.h>
#include <folly/portability/GTest.h>
#include <folly/stop_watch.h>
#include <thrift/conformance/Utils.h>
#include <thrift/conformance/cpp2/AnyRegistry.h>
#include <thrift/conformance/cpp2/Object.h>
#include <thrift/conformance/if/gen-cpp2/ConformanceServiceAsyncClient.h>
#include <thrift/conformance/if/gen-cpp2/RPCConformanceServiceAsyncClient.h>
#include <thrift/conformance/if/gen-cpp2/test_suite_types.h>
#include <thrift/lib/cpp/util/EnumUtils.h>
#include <thrift/lib/cpp2/async/HeaderClientChannel.h>
#include <thrift/lib/cpp2/async/RocketClientChannel.h>
#include <thrift/lib/cpp2/op/Compare.h>

// Registers the given conformance test suites with gtest using the
// client providers in clientFns.
#define THRIFT_CONFORMANCE_TEST(suites, clientFns, nonconforming)           \
  static ::apache::thrift::conformance::detail::ConformanceTestRegistration \
      __suite_reg_##__LINE__(                                               \
          suites, clientFns, nonconforming, __FILE__, __LINE__)

namespace apache::thrift::conformance {

// A map from name to client provider.
template <typename Client>
using client_fn_map = std::map<std::string_view, std::function<Client&()>>;

enum class ChannelType {
  Header = 1,
  Rocket,
};

// Creates a client for the localhost.
template <typename Client>
std::unique_ptr<Client> createClient(
    folly::EventBase* eb, int port, ChannelType type = ChannelType::Header) {
  folly::AsyncTransport::UniquePtr socket(
      new folly::AsyncSocket(eb, folly::SocketAddress("::1", port)));
  switch (type) {
    case ChannelType::Header:
      return std::make_unique<Client>(
          HeaderClientChannel::newChannel(std::move(socket)));
    case ChannelType::Rocket:
      return std::make_unique<Client>(
          RocketClientChannel::newChannel(std::move(socket)));
    default:
      throw std::invalid_argument(
          "Unknown channel type: " + std::to_string(int(type)));
  }
}

// Bundles a server process and client.
template <typename Client>
class ClientAndServer {
 public:
  explicit ClientAndServer(std::string cmd)
      : server_(
            std::vector<std::string>{std::move(cmd)},
            folly::Subprocess::Options().pipeStdout()) {
    LOG(INFO) << "Starting binary: " << cmd;
    std::string port;
    server_.communicate(
        folly::Subprocess::readLinesCallback(
            [&port](int, folly::StringPiece s) {
              port = std::string(s);
              return true;
            }),
        [](int, int) { return true; });
    LOG(INFO) << "Using port: " << port;
    client_ = createClient<Client>(&eb_, folly::to<int>(port));
  }

  ~ClientAndServer() {
    server_.sendSignal(SIGINT);
    server_.waitOrTerminateOrKill(
        std::chrono::seconds(1), std::chrono::seconds(1));
  }

  Client& getClient() { return *client_; }

 private:
  folly::EventBase eb_;
  folly::Subprocess server_;
  std::unique_ptr<Client> client_;
};

// Creates a map from name to client provider, using lazily initalized
// ClientAndServers.
template <typename Client>
client_fn_map<Client> getServers() {
  auto cmds = parseCmds(getEnvOrThrow("THRIFT_CONFORMANCE_SERVER_BINARIES"));
  client_fn_map<Client> result;
  for (const auto& entry : cmds) {
    result.emplace(
        entry.first,
        [name = std::string(entry.first),
         cmd = std::string(entry.second)]() -> Client& {
          static folly::Synchronized<std::map<
              std::string_view,
              std::unique_ptr<ClientAndServer<Client>>>>
              clients;
          auto lockedClients = clients.wlock();

          // Get or create ClientAndServer in the static map.
          auto itr = lockedClients->find(name);
          if (itr == lockedClients->end()) {
            itr = lockedClients->emplace_hint(
                itr, name, std::make_unique<ClientAndServer<Client>>(cmd));
          }
          return itr->second->getClient();
        });
  }
  return result;
}

testing::AssertionResult RunRoundTripTest(
    Client<ConformanceService>& client, const RoundTripTestCase& roundTrip);

testing::AssertionResult RunRpcTest(
    Client<RPCConformanceService>& client, const RpcTestCase& rpc);

template <typename Client>
class ConformanceTest : public testing::Test {
 public:
  ConformanceTest(
      Client* client,
      const TestSuite* suite,
      const conformance::Test* test,
      const TestCase* testCase,
      bool conforming)
      : client_(client),
        suite_(*suite),
        test_(*test),
        testCase_(*testCase),
        conforming_(conforming) {}

 protected:
  void TestBody() override {
    testing::AssertionResult conforming = RunTestCase(*client_, testCase_);
    if (conforming_) {
      EXPECT_TRUE(conforming) << "For more detail see:"
                              << std::endl
                              // Most specific to least specific.
                              << genTagLinks(testCase_) << genTagLinks(test_)
                              << genTagLinks(suite_);
      ;
    } else {
      EXPECT_FALSE(conforming)
          << "If intentional, please remove the associated entry from:"
          << std::endl
          << "    thrift/conformance/data/nonconforming.txt" << std::endl;
    }
  }

 private:
  Client* const client_;

  const TestSuite& suite_;
  const conformance::Test& test_;
  const TestCase& testCase_;
  const bool conforming_;
};

// Runs a conformance test case against the given client.
template <typename Client>
testing::AssertionResult RunTestCase(Client& client, const TestCase& testCase) {
  switch (testCase.test()->getType()) {
    case TestCaseUnion::Type::roundTrip:
      if constexpr (std::is_same_v<
                        Client,
                        apache::thrift::Client<ConformanceService>>) {
        return RunRoundTripTest(client, *testCase.roundTrip_ref());
      }
      return testing::AssertionFailure() << "Invalid test client.";
    case TestCaseUnion::Type::rpc:
      if constexpr (std::is_same_v<
                        Client,
                        apache::thrift::Client<RPCConformanceService>>) {
        return RunRpcTest(client, *testCase.rpc_ref());
      }
      return testing::AssertionFailure() << "Invalid test client.";
    default:
      return testing::AssertionFailure()
          << "Unsupported test case type: " << testCase.test()->getType();
  }
}

// Registers a test suite with gtest.
template <typename Client>
void RegisterTests(
    std::string_view category,
    const TestSuite* suite,
    const std::set<std::string>& nonconforming,
    std::function<Client&()> clientFn,
    const char* file,
    int line) {
  for (const auto& test : *suite->tests()) {
    for (const auto& testCase : *test.testCases()) {
      std::string suiteName =
          fmt::format("{}/{}/{}", category, *suite->name(), *testCase.name());
      std::string fullName = fmt::format("{}.{}", suiteName, *test.name());
      bool conforming = nonconforming.find(fullName) == nonconforming.end();
      RegisterTest(
          suiteName.c_str(),
          test.name()->c_str(),
          nullptr,
          conforming ? nullptr : "nonconforming",
          file,
          line,
          [&test, &testCase, suite, clientFn, conforming]() {
            return new ConformanceTest<Client>(
                &clientFn(), suite, &test, &testCase, conforming);
          });
    }
  }
}

namespace detail {

template <typename Client>
class ConformanceTestRegistration {
 public:
  ConformanceTestRegistration(
      std::vector<TestSuite> suites,
      client_fn_map<Client> clientFns,
      const std::set<std::string>& nonconforming,
      const char* file = "",
      int line = 0)
      : suites_(std::move(suites)) {
    for (const auto& entry : clientFns) {
      for (const auto& suite : suites_) {
        RegisterTests<Client>(
            entry.first, &suite, nonconforming, entry.second, file, line);
      }
    }
  }

 private:
  const std::vector<TestSuite> suites_;
};

} // namespace detail
} // namespace apache::thrift::conformance
