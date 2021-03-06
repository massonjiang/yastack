// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/billing/v1/cloud_billing.proto

#include "google/cloud/billing/v1/cloud_billing.pb.h"
#include "google/cloud/billing/v1/cloud_billing.grpc.pb.h"

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
namespace billing {
namespace v1 {

static const char* CloudBilling_method_names[] = {
  "/google.cloud.billing.v1.CloudBilling/GetBillingAccount",
  "/google.cloud.billing.v1.CloudBilling/ListBillingAccounts",
  "/google.cloud.billing.v1.CloudBilling/ListProjectBillingInfo",
  "/google.cloud.billing.v1.CloudBilling/GetProjectBillingInfo",
  "/google.cloud.billing.v1.CloudBilling/UpdateProjectBillingInfo",
};

std::unique_ptr< CloudBilling::Stub> CloudBilling::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< CloudBilling::Stub> stub(new CloudBilling::Stub(channel));
  return stub;
}

CloudBilling::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetBillingAccount_(CloudBilling_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListBillingAccounts_(CloudBilling_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListProjectBillingInfo_(CloudBilling_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetProjectBillingInfo_(CloudBilling_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateProjectBillingInfo_(CloudBilling_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status CloudBilling::Stub::GetBillingAccount(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetBillingAccountRequest& request, ::google::cloud::billing::v1::BillingAccount* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetBillingAccount_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::BillingAccount>* CloudBilling::Stub::AsyncGetBillingAccountRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetBillingAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::billing::v1::BillingAccount>::Create(channel_.get(), cq, rpcmethod_GetBillingAccount_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::BillingAccount>* CloudBilling::Stub::PrepareAsyncGetBillingAccountRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetBillingAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::billing::v1::BillingAccount>::Create(channel_.get(), cq, rpcmethod_GetBillingAccount_, context, request, false);
}

::grpc::Status CloudBilling::Stub::ListBillingAccounts(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListBillingAccountsRequest& request, ::google::cloud::billing::v1::ListBillingAccountsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListBillingAccounts_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ListBillingAccountsResponse>* CloudBilling::Stub::AsyncListBillingAccountsRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListBillingAccountsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::billing::v1::ListBillingAccountsResponse>::Create(channel_.get(), cq, rpcmethod_ListBillingAccounts_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ListBillingAccountsResponse>* CloudBilling::Stub::PrepareAsyncListBillingAccountsRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListBillingAccountsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::billing::v1::ListBillingAccountsResponse>::Create(channel_.get(), cq, rpcmethod_ListBillingAccounts_, context, request, false);
}

::grpc::Status CloudBilling::Stub::ListProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListProjectBillingInfoRequest& request, ::google::cloud::billing::v1::ListProjectBillingInfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListProjectBillingInfo_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ListProjectBillingInfoResponse>* CloudBilling::Stub::AsyncListProjectBillingInfoRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::billing::v1::ListProjectBillingInfoResponse>::Create(channel_.get(), cq, rpcmethod_ListProjectBillingInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ListProjectBillingInfoResponse>* CloudBilling::Stub::PrepareAsyncListProjectBillingInfoRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::billing::v1::ListProjectBillingInfoResponse>::Create(channel_.get(), cq, rpcmethod_ListProjectBillingInfo_, context, request, false);
}

::grpc::Status CloudBilling::Stub::GetProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetProjectBillingInfoRequest& request, ::google::cloud::billing::v1::ProjectBillingInfo* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetProjectBillingInfo_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ProjectBillingInfo>* CloudBilling::Stub::AsyncGetProjectBillingInfoRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::billing::v1::ProjectBillingInfo>::Create(channel_.get(), cq, rpcmethod_GetProjectBillingInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ProjectBillingInfo>* CloudBilling::Stub::PrepareAsyncGetProjectBillingInfoRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::billing::v1::ProjectBillingInfo>::Create(channel_.get(), cq, rpcmethod_GetProjectBillingInfo_, context, request, false);
}

::grpc::Status CloudBilling::Stub::UpdateProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest& request, ::google::cloud::billing::v1::ProjectBillingInfo* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateProjectBillingInfo_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ProjectBillingInfo>* CloudBilling::Stub::AsyncUpdateProjectBillingInfoRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::billing::v1::ProjectBillingInfo>::Create(channel_.get(), cq, rpcmethod_UpdateProjectBillingInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ProjectBillingInfo>* CloudBilling::Stub::PrepareAsyncUpdateProjectBillingInfoRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::billing::v1::ProjectBillingInfo>::Create(channel_.get(), cq, rpcmethod_UpdateProjectBillingInfo_, context, request, false);
}

CloudBilling::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CloudBilling_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CloudBilling::Service, ::google::cloud::billing::v1::GetBillingAccountRequest, ::google::cloud::billing::v1::BillingAccount>(
          std::mem_fn(&CloudBilling::Service::GetBillingAccount), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CloudBilling_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CloudBilling::Service, ::google::cloud::billing::v1::ListBillingAccountsRequest, ::google::cloud::billing::v1::ListBillingAccountsResponse>(
          std::mem_fn(&CloudBilling::Service::ListBillingAccounts), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CloudBilling_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CloudBilling::Service, ::google::cloud::billing::v1::ListProjectBillingInfoRequest, ::google::cloud::billing::v1::ListProjectBillingInfoResponse>(
          std::mem_fn(&CloudBilling::Service::ListProjectBillingInfo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CloudBilling_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CloudBilling::Service, ::google::cloud::billing::v1::GetProjectBillingInfoRequest, ::google::cloud::billing::v1::ProjectBillingInfo>(
          std::mem_fn(&CloudBilling::Service::GetProjectBillingInfo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CloudBilling_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CloudBilling::Service, ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest, ::google::cloud::billing::v1::ProjectBillingInfo>(
          std::mem_fn(&CloudBilling::Service::UpdateProjectBillingInfo), this)));
}

CloudBilling::Service::~Service() {
}

::grpc::Status CloudBilling::Service::GetBillingAccount(::grpc::ServerContext* context, const ::google::cloud::billing::v1::GetBillingAccountRequest* request, ::google::cloud::billing::v1::BillingAccount* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudBilling::Service::ListBillingAccounts(::grpc::ServerContext* context, const ::google::cloud::billing::v1::ListBillingAccountsRequest* request, ::google::cloud::billing::v1::ListBillingAccountsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudBilling::Service::ListProjectBillingInfo(::grpc::ServerContext* context, const ::google::cloud::billing::v1::ListProjectBillingInfoRequest* request, ::google::cloud::billing::v1::ListProjectBillingInfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudBilling::Service::GetProjectBillingInfo(::grpc::ServerContext* context, const ::google::cloud::billing::v1::GetProjectBillingInfoRequest* request, ::google::cloud::billing::v1::ProjectBillingInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudBilling::Service::UpdateProjectBillingInfo(::grpc::ServerContext* context, const ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest* request, ::google::cloud::billing::v1::ProjectBillingInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace billing
}  // namespace v1

