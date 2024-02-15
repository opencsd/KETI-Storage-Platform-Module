// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: storage-manager.proto
#ifndef GRPC_storage_2dmanager_2eproto__INCLUDED
#define GRPC_storage_2dmanager_2eproto__INCLUDED

#include "storage-manager.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace StorageEngineInstance {

class StorageManager final {
 public:
  static constexpr char const* service_full_name() {
    return "StorageEngineInstance.StorageManager";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetDataFileInfo(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList& request, ::StorageEngineInstance::DataFileInfo* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::DataFileInfo>> AsyncGetDataFileInfo(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::DataFileInfo>>(AsyncGetDataFileInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::DataFileInfo>> PrepareAsyncGetDataFileInfo(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::DataFileInfo>>(PrepareAsyncGetDataFileInfoRaw(context, request, cq));
    }
    virtual ::grpc::Status RequestPBA(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest& request, ::StorageEngineInstance::LBA2PBAResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::LBA2PBAResponse>> AsyncRequestPBA(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::LBA2PBAResponse>>(AsyncRequestPBARaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::LBA2PBAResponse>> PrepareAsyncRequestPBA(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::LBA2PBAResponse>>(PrepareAsyncRequestPBARaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void GetDataFileInfo(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList* request, ::StorageEngineInstance::DataFileInfo* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetDataFileInfo(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList* request, ::StorageEngineInstance::DataFileInfo* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void RequestPBA(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest* request, ::StorageEngineInstance::LBA2PBAResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void RequestPBA(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest* request, ::StorageEngineInstance::LBA2PBAResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::DataFileInfo>* AsyncGetDataFileInfoRaw(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::DataFileInfo>* PrepareAsyncGetDataFileInfoRaw(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::LBA2PBAResponse>* AsyncRequestPBARaw(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::StorageEngineInstance::LBA2PBAResponse>* PrepareAsyncRequestPBARaw(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status GetDataFileInfo(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList& request, ::StorageEngineInstance::DataFileInfo* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::DataFileInfo>> AsyncGetDataFileInfo(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::DataFileInfo>>(AsyncGetDataFileInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::DataFileInfo>> PrepareAsyncGetDataFileInfo(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::DataFileInfo>>(PrepareAsyncGetDataFileInfoRaw(context, request, cq));
    }
    ::grpc::Status RequestPBA(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest& request, ::StorageEngineInstance::LBA2PBAResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::LBA2PBAResponse>> AsyncRequestPBA(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::LBA2PBAResponse>>(AsyncRequestPBARaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::LBA2PBAResponse>> PrepareAsyncRequestPBA(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::LBA2PBAResponse>>(PrepareAsyncRequestPBARaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void GetDataFileInfo(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList* request, ::StorageEngineInstance::DataFileInfo* response, std::function<void(::grpc::Status)>) override;
      void GetDataFileInfo(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList* request, ::StorageEngineInstance::DataFileInfo* response, ::grpc::ClientUnaryReactor* reactor) override;
      void RequestPBA(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest* request, ::StorageEngineInstance::LBA2PBAResponse* response, std::function<void(::grpc::Status)>) override;
      void RequestPBA(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest* request, ::StorageEngineInstance::LBA2PBAResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::DataFileInfo>* AsyncGetDataFileInfoRaw(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::DataFileInfo>* PrepareAsyncGetDataFileInfoRaw(::grpc::ClientContext* context, const ::StorageEngineInstance::SSTList& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::LBA2PBAResponse>* AsyncRequestPBARaw(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::StorageEngineInstance::LBA2PBAResponse>* PrepareAsyncRequestPBARaw(::grpc::ClientContext* context, const ::StorageEngineInstance::LBA2PBARequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetDataFileInfo_;
    const ::grpc::internal::RpcMethod rpcmethod_RequestPBA_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetDataFileInfo(::grpc::ServerContext* context, const ::StorageEngineInstance::SSTList* request, ::StorageEngineInstance::DataFileInfo* response);
    virtual ::grpc::Status RequestPBA(::grpc::ServerContext* context, const ::StorageEngineInstance::LBA2PBARequest* request, ::StorageEngineInstance::LBA2PBAResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetDataFileInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetDataFileInfo() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetDataFileInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDataFileInfo(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::SSTList* /*request*/, ::StorageEngineInstance::DataFileInfo* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetDataFileInfo(::grpc::ServerContext* context, ::StorageEngineInstance::SSTList* request, ::grpc::ServerAsyncResponseWriter< ::StorageEngineInstance::DataFileInfo>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_RequestPBA : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_RequestPBA() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_RequestPBA() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RequestPBA(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::LBA2PBARequest* /*request*/, ::StorageEngineInstance::LBA2PBAResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRequestPBA(::grpc::ServerContext* context, ::StorageEngineInstance::LBA2PBARequest* request, ::grpc::ServerAsyncResponseWriter< ::StorageEngineInstance::LBA2PBAResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetDataFileInfo<WithAsyncMethod_RequestPBA<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_GetDataFileInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetDataFileInfo() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::StorageEngineInstance::SSTList, ::StorageEngineInstance::DataFileInfo>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::StorageEngineInstance::SSTList* request, ::StorageEngineInstance::DataFileInfo* response) { return this->GetDataFileInfo(context, request, response); }));}
    void SetMessageAllocatorFor_GetDataFileInfo(
        ::grpc::MessageAllocator< ::StorageEngineInstance::SSTList, ::StorageEngineInstance::DataFileInfo>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::StorageEngineInstance::SSTList, ::StorageEngineInstance::DataFileInfo>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GetDataFileInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDataFileInfo(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::SSTList* /*request*/, ::StorageEngineInstance::DataFileInfo* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetDataFileInfo(
      ::grpc::CallbackServerContext* /*context*/, const ::StorageEngineInstance::SSTList* /*request*/, ::StorageEngineInstance::DataFileInfo* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_RequestPBA : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_RequestPBA() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::StorageEngineInstance::LBA2PBARequest, ::StorageEngineInstance::LBA2PBAResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::StorageEngineInstance::LBA2PBARequest* request, ::StorageEngineInstance::LBA2PBAResponse* response) { return this->RequestPBA(context, request, response); }));}
    void SetMessageAllocatorFor_RequestPBA(
        ::grpc::MessageAllocator< ::StorageEngineInstance::LBA2PBARequest, ::StorageEngineInstance::LBA2PBAResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::StorageEngineInstance::LBA2PBARequest, ::StorageEngineInstance::LBA2PBAResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_RequestPBA() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RequestPBA(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::LBA2PBARequest* /*request*/, ::StorageEngineInstance::LBA2PBAResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* RequestPBA(
      ::grpc::CallbackServerContext* /*context*/, const ::StorageEngineInstance::LBA2PBARequest* /*request*/, ::StorageEngineInstance::LBA2PBAResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_GetDataFileInfo<WithCallbackMethod_RequestPBA<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetDataFileInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetDataFileInfo() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetDataFileInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDataFileInfo(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::SSTList* /*request*/, ::StorageEngineInstance::DataFileInfo* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_RequestPBA : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_RequestPBA() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_RequestPBA() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RequestPBA(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::LBA2PBARequest* /*request*/, ::StorageEngineInstance::LBA2PBAResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetDataFileInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetDataFileInfo() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetDataFileInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDataFileInfo(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::SSTList* /*request*/, ::StorageEngineInstance::DataFileInfo* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetDataFileInfo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_RequestPBA : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_RequestPBA() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_RequestPBA() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RequestPBA(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::LBA2PBARequest* /*request*/, ::StorageEngineInstance::LBA2PBAResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRequestPBA(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetDataFileInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetDataFileInfo() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetDataFileInfo(context, request, response); }));
    }
    ~WithRawCallbackMethod_GetDataFileInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDataFileInfo(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::SSTList* /*request*/, ::StorageEngineInstance::DataFileInfo* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetDataFileInfo(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_RequestPBA : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_RequestPBA() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->RequestPBA(context, request, response); }));
    }
    ~WithRawCallbackMethod_RequestPBA() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RequestPBA(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::LBA2PBARequest* /*request*/, ::StorageEngineInstance::LBA2PBAResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* RequestPBA(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetDataFileInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetDataFileInfo() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::StorageEngineInstance::SSTList, ::StorageEngineInstance::DataFileInfo>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::StorageEngineInstance::SSTList, ::StorageEngineInstance::DataFileInfo>* streamer) {
                       return this->StreamedGetDataFileInfo(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetDataFileInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetDataFileInfo(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::SSTList* /*request*/, ::StorageEngineInstance::DataFileInfo* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetDataFileInfo(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::StorageEngineInstance::SSTList,::StorageEngineInstance::DataFileInfo>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_RequestPBA : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_RequestPBA() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::StorageEngineInstance::LBA2PBARequest, ::StorageEngineInstance::LBA2PBAResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::StorageEngineInstance::LBA2PBARequest, ::StorageEngineInstance::LBA2PBAResponse>* streamer) {
                       return this->StreamedRequestPBA(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_RequestPBA() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status RequestPBA(::grpc::ServerContext* /*context*/, const ::StorageEngineInstance::LBA2PBARequest* /*request*/, ::StorageEngineInstance::LBA2PBAResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedRequestPBA(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::StorageEngineInstance::LBA2PBARequest,::StorageEngineInstance::LBA2PBAResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetDataFileInfo<WithStreamedUnaryMethod_RequestPBA<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetDataFileInfo<WithStreamedUnaryMethod_RequestPBA<Service > > StreamedService;
};

}  // namespace StorageEngineInstance


#endif  // GRPC_storage_2dmanager_2eproto__INCLUDED