// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/assistant/embedded/v1alpha1/embedded_assistant.proto

#include "google/assistant/embedded/v1alpha1/embedded_assistant.pb.h"
#include "google/assistant/embedded/v1alpha1/embedded_assistant.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace assistant {
namespace embedded {
namespace v1alpha1 {

static const char* EmbeddedAssistant_method_names[] = {
  "/google.assistant.embedded.v1alpha1.EmbeddedAssistant/Converse",
};

std::unique_ptr< EmbeddedAssistant::Stub> EmbeddedAssistant::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< EmbeddedAssistant::Stub> stub(new EmbeddedAssistant::Stub(channel));
  return stub;
}

EmbeddedAssistant::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Converse_(EmbeddedAssistant_method_names[0], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::ClientReaderWriter< ::google::assistant::embedded::v1alpha1::ConverseRequest, ::google::assistant::embedded::v1alpha1::ConverseResponse>* EmbeddedAssistant::Stub::ConverseRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::google::assistant::embedded::v1alpha1::ConverseRequest, ::google::assistant::embedded::v1alpha1::ConverseResponse>::Create(channel_.get(), rpcmethod_Converse_, context);
}

::grpc::ClientAsyncReaderWriter< ::google::assistant::embedded::v1alpha1::ConverseRequest, ::google::assistant::embedded::v1alpha1::ConverseResponse>* EmbeddedAssistant::Stub::AsyncConverseRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::google::assistant::embedded::v1alpha1::ConverseRequest, ::google::assistant::embedded::v1alpha1::ConverseResponse>::Create(channel_.get(), cq, rpcmethod_Converse_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::google::assistant::embedded::v1alpha1::ConverseRequest, ::google::assistant::embedded::v1alpha1::ConverseResponse>* EmbeddedAssistant::Stub::PrepareAsyncConverseRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::google::assistant::embedded::v1alpha1::ConverseRequest, ::google::assistant::embedded::v1alpha1::ConverseResponse>::Create(channel_.get(), cq, rpcmethod_Converse_, context, false, nullptr);
}

EmbeddedAssistant::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EmbeddedAssistant_method_names[0],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< EmbeddedAssistant::Service, ::google::assistant::embedded::v1alpha1::ConverseRequest, ::google::assistant::embedded::v1alpha1::ConverseResponse>(
          std::mem_fn(&EmbeddedAssistant::Service::Converse), this)));
}

EmbeddedAssistant::Service::~Service() {
}

::grpc::Status EmbeddedAssistant::Service::Converse(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::assistant::embedded::v1alpha1::ConverseResponse, ::google::assistant::embedded::v1alpha1::ConverseRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace assistant
}  // namespace embedded
}  // namespace v1alpha1
