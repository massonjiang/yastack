// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/datastore/v1/datastore.proto

#include "google/datastore/v1/datastore.pb.h"
#include "google/datastore/v1/datastore.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace datastore {
namespace v1 {

static const char* Datastore_method_names[] = {
  "/google.datastore.v1.Datastore/Lookup",
  "/google.datastore.v1.Datastore/RunQuery",
  "/google.datastore.v1.Datastore/BeginTransaction",
  "/google.datastore.v1.Datastore/Commit",
  "/google.datastore.v1.Datastore/Rollback",
  "/google.datastore.v1.Datastore/AllocateIds",
};

std::unique_ptr< Datastore::Stub> Datastore::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Datastore::Stub> stub(new Datastore::Stub(channel));
  return stub;
}

Datastore::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Lookup_(Datastore_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RunQuery_(Datastore_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BeginTransaction_(Datastore_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Commit_(Datastore_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Rollback_(Datastore_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AllocateIds_(Datastore_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Datastore::Stub::Lookup(::grpc::ClientContext* context, const ::google::datastore::v1::LookupRequest& request, ::google::datastore::v1::LookupResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Lookup_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::v1::LookupResponse>* Datastore::Stub::AsyncLookupRaw(::grpc::ClientContext* context, const ::google::datastore::v1::LookupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::v1::LookupResponse>::Create(channel_.get(), cq, rpcmethod_Lookup_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::v1::LookupResponse>* Datastore::Stub::PrepareAsyncLookupRaw(::grpc::ClientContext* context, const ::google::datastore::v1::LookupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::v1::LookupResponse>::Create(channel_.get(), cq, rpcmethod_Lookup_, context, request, false);
}

::grpc::Status Datastore::Stub::RunQuery(::grpc::ClientContext* context, const ::google::datastore::v1::RunQueryRequest& request, ::google::datastore::v1::RunQueryResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RunQuery_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::v1::RunQueryResponse>* Datastore::Stub::AsyncRunQueryRaw(::grpc::ClientContext* context, const ::google::datastore::v1::RunQueryRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::v1::RunQueryResponse>::Create(channel_.get(), cq, rpcmethod_RunQuery_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::v1::RunQueryResponse>* Datastore::Stub::PrepareAsyncRunQueryRaw(::grpc::ClientContext* context, const ::google::datastore::v1::RunQueryRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::v1::RunQueryResponse>::Create(channel_.get(), cq, rpcmethod_RunQuery_, context, request, false);
}

::grpc::Status Datastore::Stub::BeginTransaction(::grpc::ClientContext* context, const ::google::datastore::v1::BeginTransactionRequest& request, ::google::datastore::v1::BeginTransactionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_BeginTransaction_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::v1::BeginTransactionResponse>* Datastore::Stub::AsyncBeginTransactionRaw(::grpc::ClientContext* context, const ::google::datastore::v1::BeginTransactionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::v1::BeginTransactionResponse>::Create(channel_.get(), cq, rpcmethod_BeginTransaction_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::v1::BeginTransactionResponse>* Datastore::Stub::PrepareAsyncBeginTransactionRaw(::grpc::ClientContext* context, const ::google::datastore::v1::BeginTransactionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::v1::BeginTransactionResponse>::Create(channel_.get(), cq, rpcmethod_BeginTransaction_, context, request, false);
}

::grpc::Status Datastore::Stub::Commit(::grpc::ClientContext* context, const ::google::datastore::v1::CommitRequest& request, ::google::datastore::v1::CommitResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Commit_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::v1::CommitResponse>* Datastore::Stub::AsyncCommitRaw(::grpc::ClientContext* context, const ::google::datastore::v1::CommitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::v1::CommitResponse>::Create(channel_.get(), cq, rpcmethod_Commit_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::v1::CommitResponse>* Datastore::Stub::PrepareAsyncCommitRaw(::grpc::ClientContext* context, const ::google::datastore::v1::CommitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::v1::CommitResponse>::Create(channel_.get(), cq, rpcmethod_Commit_, context, request, false);
}

::grpc::Status Datastore::Stub::Rollback(::grpc::ClientContext* context, const ::google::datastore::v1::RollbackRequest& request, ::google::datastore::v1::RollbackResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Rollback_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::v1::RollbackResponse>* Datastore::Stub::AsyncRollbackRaw(::grpc::ClientContext* context, const ::google::datastore::v1::RollbackRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::v1::RollbackResponse>::Create(channel_.get(), cq, rpcmethod_Rollback_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::v1::RollbackResponse>* Datastore::Stub::PrepareAsyncRollbackRaw(::grpc::ClientContext* context, const ::google::datastore::v1::RollbackRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::v1::RollbackResponse>::Create(channel_.get(), cq, rpcmethod_Rollback_, context, request, false);
}

::grpc::Status Datastore::Stub::AllocateIds(::grpc::ClientContext* context, const ::google::datastore::v1::AllocateIdsRequest& request, ::google::datastore::v1::AllocateIdsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AllocateIds_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::v1::AllocateIdsResponse>* Datastore::Stub::AsyncAllocateIdsRaw(::grpc::ClientContext* context, const ::google::datastore::v1::AllocateIdsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::v1::AllocateIdsResponse>::Create(channel_.get(), cq, rpcmethod_AllocateIds_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::v1::AllocateIdsResponse>* Datastore::Stub::PrepareAsyncAllocateIdsRaw(::grpc::ClientContext* context, const ::google::datastore::v1::AllocateIdsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::v1::AllocateIdsResponse>::Create(channel_.get(), cq, rpcmethod_AllocateIds_, context, request, false);
}

Datastore::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Datastore_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Datastore::Service, ::google::datastore::v1::LookupRequest, ::google::datastore::v1::LookupResponse>(
          std::mem_fn(&Datastore::Service::Lookup), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Datastore_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Datastore::Service, ::google::datastore::v1::RunQueryRequest, ::google::datastore::v1::RunQueryResponse>(
          std::mem_fn(&Datastore::Service::RunQuery), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Datastore_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Datastore::Service, ::google::datastore::v1::BeginTransactionRequest, ::google::datastore::v1::BeginTransactionResponse>(
          std::mem_fn(&Datastore::Service::BeginTransaction), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Datastore_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Datastore::Service, ::google::datastore::v1::CommitRequest, ::google::datastore::v1::CommitResponse>(
          std::mem_fn(&Datastore::Service::Commit), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Datastore_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Datastore::Service, ::google::datastore::v1::RollbackRequest, ::google::datastore::v1::RollbackResponse>(
          std::mem_fn(&Datastore::Service::Rollback), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Datastore_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Datastore::Service, ::google::datastore::v1::AllocateIdsRequest, ::google::datastore::v1::AllocateIdsResponse>(
          std::mem_fn(&Datastore::Service::AllocateIds), this)));
}

Datastore::Service::~Service() {
}

::grpc::Status Datastore::Service::Lookup(::grpc::ServerContext* context, const ::google::datastore::v1::LookupRequest* request, ::google::datastore::v1::LookupResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Datastore::Service::RunQuery(::grpc::ServerContext* context, const ::google::datastore::v1::RunQueryRequest* request, ::google::datastore::v1::RunQueryResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Datastore::Service::BeginTransaction(::grpc::ServerContext* context, const ::google::datastore::v1::BeginTransactionRequest* request, ::google::datastore::v1::BeginTransactionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Datastore::Service::Commit(::grpc::ServerContext* context, const ::google::datastore::v1::CommitRequest* request, ::google::datastore::v1::CommitResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Datastore::Service::Rollback(::grpc::ServerContext* context, const ::google::datastore::v1::RollbackRequest* request, ::google::datastore::v1::RollbackResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Datastore::Service::AllocateIds(::grpc::ServerContext* context, const ::google::datastore::v1::AllocateIdsRequest* request, ::google::datastore::v1::AllocateIdsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace datastore
}  // namespace v1

