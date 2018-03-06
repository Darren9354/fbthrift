/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/AsyncClient.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include "src/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyServiceFastAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "MyServiceFast";
  }

  virtual void ping(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void ping(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void pingImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_ping();
  virtual void sync_ping(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<folly::Unit> future_ping();
  virtual folly::Future<folly::Unit> future_ping(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_ping(apache::thrift::RpcOptions& rpcOptions);
  virtual void ping(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_ping(::apache::thrift::ClientReceiveState& state);
  static void recv_ping(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_ping(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_ping(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void pingT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void getRandomData(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void getRandomData(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void getRandomDataImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_getRandomData(std::string& _return);
  virtual void sync_getRandomData(apache::thrift::RpcOptions& rpcOptions, std::string& _return);
  virtual folly::Future<std::string> future_getRandomData();
  virtual folly::Future<std::string> future_getRandomData(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_getRandomData(apache::thrift::RpcOptions& rpcOptions);
  virtual void getRandomData(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_getRandomData(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_getRandomData(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_getRandomData(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_getRandomData(std::string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void getRandomDataT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void hasDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
  virtual void hasDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
 private:
  virtual void hasDataByIdImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
 public:
  virtual bool sync_hasDataById(int64_t id);
  virtual bool sync_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual folly::Future<bool> future_hasDataById(int64_t id);
  virtual folly::Future<bool> future_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual folly::Future<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual void hasDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id);
  static folly::exception_wrapper recv_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state);
  static bool recv_hasDataById(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual bool recv_instance_hasDataById(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void hasDataByIdT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
 public:
  virtual void getDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
  virtual void getDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
 private:
  virtual void getDataByIdImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
 public:
  virtual void sync_getDataById(std::string& _return, int64_t id);
  virtual void sync_getDataById(apache::thrift::RpcOptions& rpcOptions, std::string& _return, int64_t id);
  virtual folly::Future<std::string> future_getDataById(int64_t id);
  virtual folly::Future<std::string> future_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual folly::Future<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual void getDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id);
  static folly::exception_wrapper recv_wrapped_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void getDataByIdT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
 public:
  virtual void putDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
  virtual void putDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
 private:
  virtual void putDataByIdImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
 public:
  virtual void sync_putDataById(int64_t id, const std::string& data);
  virtual void sync_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data);
  virtual folly::Future<folly::Unit> future_putDataById(int64_t id, const std::string& data);
  virtual folly::Future<folly::Unit> future_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data);
  virtual void putDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id, const std::string& data);
  static folly::exception_wrapper recv_wrapped_putDataById(::apache::thrift::ClientReceiveState& state);
  static void recv_putDataById(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_putDataById(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_putDataById(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void putDataByIdT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
 public:
  virtual void lobDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
  virtual void lobDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
 private:
  virtual void lobDataByIdImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
 public:
  virtual void sync_lobDataById(int64_t id, const std::string& data);
  virtual void sync_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data);
  virtual folly::Future<folly::Unit> future_lobDataById(int64_t id, const std::string& data);
  virtual folly::Future<folly::Unit> future_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data);
  virtual void lobDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id, const std::string& data);
 private:
  template <typename Protocol_>
  void lobDataByIdT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
 public:
};

} // cpp2
