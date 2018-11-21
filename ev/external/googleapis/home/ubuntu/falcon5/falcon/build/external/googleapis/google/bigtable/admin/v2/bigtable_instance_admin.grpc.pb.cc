// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/bigtable/admin/v2/bigtable_instance_admin.proto

#include "google/bigtable/admin/v2/bigtable_instance_admin.pb.h"
#include "google/bigtable/admin/v2/bigtable_instance_admin.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace bigtable {
namespace admin {
namespace v2 {

static const char* BigtableInstanceAdmin_method_names[] = {
  "/google.bigtable.admin.v2.BigtableInstanceAdmin/CreateInstance",
  "/google.bigtable.admin.v2.BigtableInstanceAdmin/GetInstance",
  "/google.bigtable.admin.v2.BigtableInstanceAdmin/ListInstances",
  "/google.bigtable.admin.v2.BigtableInstanceAdmin/UpdateInstance",
  "/google.bigtable.admin.v2.BigtableInstanceAdmin/DeleteInstance",
  "/google.bigtable.admin.v2.BigtableInstanceAdmin/CreateCluster",
  "/google.bigtable.admin.v2.BigtableInstanceAdmin/GetCluster",
  "/google.bigtable.admin.v2.BigtableInstanceAdmin/ListClusters",
  "/google.bigtable.admin.v2.BigtableInstanceAdmin/UpdateCluster",
  "/google.bigtable.admin.v2.BigtableInstanceAdmin/DeleteCluster",
};

std::unique_ptr< BigtableInstanceAdmin::Stub> BigtableInstanceAdmin::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< BigtableInstanceAdmin::Stub> stub(new BigtableInstanceAdmin::Stub(channel));
  return stub;
}

BigtableInstanceAdmin::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateInstance_(BigtableInstanceAdmin_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetInstance_(BigtableInstanceAdmin_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListInstances_(BigtableInstanceAdmin_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateInstance_(BigtableInstanceAdmin_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteInstance_(BigtableInstanceAdmin_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateCluster_(BigtableInstanceAdmin_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetCluster_(BigtableInstanceAdmin_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListClusters_(BigtableInstanceAdmin_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateCluster_(BigtableInstanceAdmin_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteCluster_(BigtableInstanceAdmin_method_names[9], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status BigtableInstanceAdmin::Stub::CreateInstance(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::CreateInstanceRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateInstance_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* BigtableInstanceAdmin::Stub::AsyncCreateInstanceRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::CreateInstanceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateInstance_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* BigtableInstanceAdmin::Stub::PrepareAsyncCreateInstanceRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::CreateInstanceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateInstance_, context, request, false);
}

::grpc::Status BigtableInstanceAdmin::Stub::GetInstance(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::GetInstanceRequest& request, ::google::bigtable::admin::v2::Instance* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetInstance_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::Instance>* BigtableInstanceAdmin::Stub::AsyncGetInstanceRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::GetInstanceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::bigtable::admin::v2::Instance>::Create(channel_.get(), cq, rpcmethod_GetInstance_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::Instance>* BigtableInstanceAdmin::Stub::PrepareAsyncGetInstanceRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::GetInstanceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::bigtable::admin::v2::Instance>::Create(channel_.get(), cq, rpcmethod_GetInstance_, context, request, false);
}

::grpc::Status BigtableInstanceAdmin::Stub::ListInstances(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::ListInstancesRequest& request, ::google::bigtable::admin::v2::ListInstancesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListInstances_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::ListInstancesResponse>* BigtableInstanceAdmin::Stub::AsyncListInstancesRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::ListInstancesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::bigtable::admin::v2::ListInstancesResponse>::Create(channel_.get(), cq, rpcmethod_ListInstances_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::ListInstancesResponse>* BigtableInstanceAdmin::Stub::PrepareAsyncListInstancesRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::ListInstancesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::bigtable::admin::v2::ListInstancesResponse>::Create(channel_.get(), cq, rpcmethod_ListInstances_, context, request, false);
}

::grpc::Status BigtableInstanceAdmin::Stub::UpdateInstance(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::Instance& request, ::google::bigtable::admin::v2::Instance* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateInstance_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::Instance>* BigtableInstanceAdmin::Stub::AsyncUpdateInstanceRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::Instance& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::bigtable::admin::v2::Instance>::Create(channel_.get(), cq, rpcmethod_UpdateInstance_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::Instance>* BigtableInstanceAdmin::Stub::PrepareAsyncUpdateInstanceRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::Instance& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::bigtable::admin::v2::Instance>::Create(channel_.get(), cq, rpcmethod_UpdateInstance_, context, request, false);
}

::grpc::Status BigtableInstanceAdmin::Stub::DeleteInstance(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::DeleteInstanceRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteInstance_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* BigtableInstanceAdmin::Stub::AsyncDeleteInstanceRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::DeleteInstanceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteInstance_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* BigtableInstanceAdmin::Stub::PrepareAsyncDeleteInstanceRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::DeleteInstanceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteInstance_, context, request, false);
}

::grpc::Status BigtableInstanceAdmin::Stub::CreateCluster(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::CreateClusterRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateCluster_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* BigtableInstanceAdmin::Stub::AsyncCreateClusterRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::CreateClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateCluster_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* BigtableInstanceAdmin::Stub::PrepareAsyncCreateClusterRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::CreateClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateCluster_, context, request, false);
}

::grpc::Status BigtableInstanceAdmin::Stub::GetCluster(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::GetClusterRequest& request, ::google::bigtable::admin::v2::Cluster* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetCluster_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::Cluster>* BigtableInstanceAdmin::Stub::AsyncGetClusterRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::GetClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::bigtable::admin::v2::Cluster>::Create(channel_.get(), cq, rpcmethod_GetCluster_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::Cluster>* BigtableInstanceAdmin::Stub::PrepareAsyncGetClusterRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::GetClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::bigtable::admin::v2::Cluster>::Create(channel_.get(), cq, rpcmethod_GetCluster_, context, request, false);
}

::grpc::Status BigtableInstanceAdmin::Stub::ListClusters(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::ListClustersRequest& request, ::google::bigtable::admin::v2::ListClustersResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListClusters_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::ListClustersResponse>* BigtableInstanceAdmin::Stub::AsyncListClustersRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::ListClustersRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::bigtable::admin::v2::ListClustersResponse>::Create(channel_.get(), cq, rpcmethod_ListClusters_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::ListClustersResponse>* BigtableInstanceAdmin::Stub::PrepareAsyncListClustersRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::ListClustersRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::bigtable::admin::v2::ListClustersResponse>::Create(channel_.get(), cq, rpcmethod_ListClusters_, context, request, false);
}

::grpc::Status BigtableInstanceAdmin::Stub::UpdateCluster(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::Cluster& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateCluster_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* BigtableInstanceAdmin::Stub::AsyncUpdateClusterRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::Cluster& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_UpdateCluster_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* BigtableInstanceAdmin::Stub::PrepareAsyncUpdateClusterRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::Cluster& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_UpdateCluster_, context, request, false);
}

::grpc::Status BigtableInstanceAdmin::Stub::DeleteCluster(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::DeleteClusterRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteCluster_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* BigtableInstanceAdmin::Stub::AsyncDeleteClusterRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::DeleteClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteCluster_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* BigtableInstanceAdmin::Stub::PrepareAsyncDeleteClusterRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::DeleteClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteCluster_, context, request, false);
}

BigtableInstanceAdmin::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BigtableInstanceAdmin_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BigtableInstanceAdmin::Service, ::google::bigtable::admin::v2::CreateInstanceRequest, ::google::longrunning::Operation>(
          std::mem_fn(&BigtableInstanceAdmin::Service::CreateInstance), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BigtableInstanceAdmin_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BigtableInstanceAdmin::Service, ::google::bigtable::admin::v2::GetInstanceRequest, ::google::bigtable::admin::v2::Instance>(
          std::mem_fn(&BigtableInstanceAdmin::Service::GetInstance), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BigtableInstanceAdmin_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BigtableInstanceAdmin::Service, ::google::bigtable::admin::v2::ListInstancesRequest, ::google::bigtable::admin::v2::ListInstancesResponse>(
          std::mem_fn(&BigtableInstanceAdmin::Service::ListInstances), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BigtableInstanceAdmin_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BigtableInstanceAdmin::Service, ::google::bigtable::admin::v2::Instance, ::google::bigtable::admin::v2::Instance>(
          std::mem_fn(&BigtableInstanceAdmin::Service::UpdateInstance), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BigtableInstanceAdmin_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BigtableInstanceAdmin::Service, ::google::bigtable::admin::v2::DeleteInstanceRequest, ::google::protobuf::Empty>(
          std::mem_fn(&BigtableInstanceAdmin::Service::DeleteInstance), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BigtableInstanceAdmin_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BigtableInstanceAdmin::Service, ::google::bigtable::admin::v2::CreateClusterRequest, ::google::longrunning::Operation>(
          std::mem_fn(&BigtableInstanceAdmin::Service::CreateCluster), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BigtableInstanceAdmin_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BigtableInstanceAdmin::Service, ::google::bigtable::admin::v2::GetClusterRequest, ::google::bigtable::admin::v2::Cluster>(
          std::mem_fn(&BigtableInstanceAdmin::Service::GetCluster), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BigtableInstanceAdmin_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BigtableInstanceAdmin::Service, ::google::bigtable::admin::v2::ListClustersRequest, ::google::bigtable::admin::v2::ListClustersResponse>(
          std::mem_fn(&BigtableInstanceAdmin::Service::ListClusters), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BigtableInstanceAdmin_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BigtableInstanceAdmin::Service, ::google::bigtable::admin::v2::Cluster, ::google::longrunning::Operation>(
          std::mem_fn(&BigtableInstanceAdmin::Service::UpdateCluster), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BigtableInstanceAdmin_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BigtableInstanceAdmin::Service, ::google::bigtable::admin::v2::DeleteClusterRequest, ::google::protobuf::Empty>(
          std::mem_fn(&BigtableInstanceAdmin::Service::DeleteCluster), this)));
}

BigtableInstanceAdmin::Service::~Service() {
}

::grpc::Status BigtableInstanceAdmin::Service::CreateInstance(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::CreateInstanceRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableInstanceAdmin::Service::GetInstance(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::GetInstanceRequest* request, ::google::bigtable::admin::v2::Instance* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableInstanceAdmin::Service::ListInstances(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::ListInstancesRequest* request, ::google::bigtable::admin::v2::ListInstancesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableInstanceAdmin::Service::UpdateInstance(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::Instance* request, ::google::bigtable::admin::v2::Instance* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableInstanceAdmin::Service::DeleteInstance(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::DeleteInstanceRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableInstanceAdmin::Service::CreateCluster(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::CreateClusterRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableInstanceAdmin::Service::GetCluster(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::GetClusterRequest* request, ::google::bigtable::admin::v2::Cluster* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableInstanceAdmin::Service::ListClusters(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::ListClustersRequest* request, ::google::bigtable::admin::v2::ListClustersResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableInstanceAdmin::Service::UpdateCluster(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::Cluster* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableInstanceAdmin::Service::DeleteCluster(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::DeleteClusterRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace bigtable
}  // namespace admin
}  // namespace v2

