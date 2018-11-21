// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/vision/v1/image_annotator.proto

#include "google/cloud/vision/v1/image_annotator.pb.h"
#include "google/cloud/vision/v1/image_annotator.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace cloud {
namespace vision {
namespace v1 {

static const char* ImageAnnotator_method_names[] = {
  "/google.cloud.vision.v1.ImageAnnotator/BatchAnnotateImages",
};

std::unique_ptr< ImageAnnotator::Stub> ImageAnnotator::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ImageAnnotator::Stub> stub(new ImageAnnotator::Stub(channel));
  return stub;
}

ImageAnnotator::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_BatchAnnotateImages_(ImageAnnotator_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ImageAnnotator::Stub::BatchAnnotateImages(::grpc::ClientContext* context, const ::google::cloud::vision::v1::BatchAnnotateImagesRequest& request, ::google::cloud::vision::v1::BatchAnnotateImagesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_BatchAnnotateImages_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::vision::v1::BatchAnnotateImagesResponse>* ImageAnnotator::Stub::AsyncBatchAnnotateImagesRaw(::grpc::ClientContext* context, const ::google::cloud::vision::v1::BatchAnnotateImagesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::vision::v1::BatchAnnotateImagesResponse>::Create(channel_.get(), cq, rpcmethod_BatchAnnotateImages_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::vision::v1::BatchAnnotateImagesResponse>* ImageAnnotator::Stub::PrepareAsyncBatchAnnotateImagesRaw(::grpc::ClientContext* context, const ::google::cloud::vision::v1::BatchAnnotateImagesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::vision::v1::BatchAnnotateImagesResponse>::Create(channel_.get(), cq, rpcmethod_BatchAnnotateImages_, context, request, false);
}

ImageAnnotator::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ImageAnnotator_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ImageAnnotator::Service, ::google::cloud::vision::v1::BatchAnnotateImagesRequest, ::google::cloud::vision::v1::BatchAnnotateImagesResponse>(
          std::mem_fn(&ImageAnnotator::Service::BatchAnnotateImages), this)));
}

ImageAnnotator::Service::~Service() {
}

::grpc::Status ImageAnnotator::Service::BatchAnnotateImages(::grpc::ServerContext* context, const ::google::cloud::vision::v1::BatchAnnotateImagesRequest* request, ::google::cloud::vision::v1::BatchAnnotateImagesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace vision
}  // namespace v1

