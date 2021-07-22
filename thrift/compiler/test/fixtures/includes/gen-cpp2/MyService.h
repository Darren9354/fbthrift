/**
 * Autogenerated by Thrift for src/service.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/MyServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/service_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.h"

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

class MyServiceSvAsyncIf {
 public:
  virtual ~MyServiceSvAsyncIf() {}
  virtual void async_tm_query(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) = 0;
  virtual folly::Future<folly::Unit> future_query(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_query(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) = 0;
  virtual void async_tm_has_arg_docs(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) = 0;
  virtual folly::Future<folly::Unit> future_has_arg_docs(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_has_arg_docs(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) = 0;
};

class MyServiceAsyncProcessor;

class MyServiceSvIf : public MyServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef MyServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;


  virtual void query(std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/);
  folly::Future<folly::Unit> future_query(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) override;
  folly::SemiFuture<folly::Unit> semifuture_query(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) override;
  void async_tm_query(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) override;
  virtual void has_arg_docs(std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/);
  folly::Future<folly::Unit> future_has_arg_docs(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) override;
  folly::SemiFuture<folly::Unit> semifuture_has_arg_docs(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) override;
  void async_tm_has_arg_docs(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) override;
 private:
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_query{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_has_arg_docs{apache::thrift::detail::si::InvocationType::AsyncTm};
};

class MyServiceSvNull : public MyServiceSvIf {
 public:
  void query(std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/) override;
  void has_arg_docs(std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/) override;
};

class MyServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  MyServiceSvIf* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<MyServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const MyServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const MyServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_query(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_query(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_query(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_query(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_has_arg_docs(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_has_arg_docs(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_has_arg_docs(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_has_arg_docs(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  MyServiceAsyncProcessor(MyServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~MyServiceAsyncProcessor() {}
};

} // cpp2
