// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/bigtable/admin/cluster/v1/bigtable_cluster_data.proto

#ifndef PROTOBUF_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fdata_2eproto__INCLUDED
#define PROTOBUF_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fdata_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
#include "google/longrunning/operations.pb.h"
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)

namespace protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fdata_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsZoneImpl();
void InitDefaultsZone();
void InitDefaultsClusterImpl();
void InitDefaultsCluster();
inline void InitDefaults() {
  InitDefaultsZone();
  InitDefaultsCluster();
}
}  // namespace protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fdata_2eproto
namespace google {
namespace bigtable {
namespace admin {
namespace cluster {
namespace v1 {
class Cluster;
class ClusterDefaultTypeInternal;
extern ClusterDefaultTypeInternal _Cluster_default_instance_;
class Zone;
class ZoneDefaultTypeInternal;
extern ZoneDefaultTypeInternal _Zone_default_instance_;
}  // namespace v1
}  // namespace cluster
}  // namespace admin
}  // namespace bigtable
}  // namespace google
namespace google {
namespace bigtable {
namespace admin {
namespace cluster {
namespace v1 {

enum Zone_Status {
  Zone_Status_UNKNOWN = 0,
  Zone_Status_OK = 1,
  Zone_Status_PLANNED_MAINTENANCE = 2,
  Zone_Status_EMERGENCY_MAINENANCE = 3,
  Zone_Status_Zone_Status_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Zone_Status_Zone_Status_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Zone_Status_IsValid(int value);
const Zone_Status Zone_Status_Status_MIN = Zone_Status_UNKNOWN;
const Zone_Status Zone_Status_Status_MAX = Zone_Status_EMERGENCY_MAINENANCE;
const int Zone_Status_Status_ARRAYSIZE = Zone_Status_Status_MAX + 1;

const ::google::protobuf::EnumDescriptor* Zone_Status_descriptor();
inline const ::std::string& Zone_Status_Name(Zone_Status value) {
  return ::google::protobuf::internal::NameOfEnum(
    Zone_Status_descriptor(), value);
}
inline bool Zone_Status_Parse(
    const ::std::string& name, Zone_Status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Zone_Status>(
    Zone_Status_descriptor(), name, value);
}
enum StorageType {
  STORAGE_UNSPECIFIED = 0,
  STORAGE_SSD = 1,
  STORAGE_HDD = 2,
  StorageType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  StorageType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool StorageType_IsValid(int value);
const StorageType StorageType_MIN = STORAGE_UNSPECIFIED;
const StorageType StorageType_MAX = STORAGE_HDD;
const int StorageType_ARRAYSIZE = StorageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* StorageType_descriptor();
inline const ::std::string& StorageType_Name(StorageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    StorageType_descriptor(), value);
}
inline bool StorageType_Parse(
    const ::std::string& name, StorageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<StorageType>(
    StorageType_descriptor(), name, value);
}
// ===================================================================

class Zone : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.bigtable.admin.cluster.v1.Zone) */ {
 public:
  Zone();
  virtual ~Zone();

  Zone(const Zone& from);

  inline Zone& operator=(const Zone& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Zone(Zone&& from) noexcept
    : Zone() {
    *this = ::std::move(from);
  }

  inline Zone& operator=(Zone&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Zone& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Zone* internal_default_instance() {
    return reinterpret_cast<const Zone*>(
               &_Zone_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Zone* other);
  friend void swap(Zone& a, Zone& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Zone* New() const PROTOBUF_FINAL { return New(NULL); }

  Zone* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Zone& from);
  void MergeFrom(const Zone& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Zone* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef Zone_Status Status;
  static const Status UNKNOWN =
    Zone_Status_UNKNOWN;
  static const Status OK =
    Zone_Status_OK;
  static const Status PLANNED_MAINTENANCE =
    Zone_Status_PLANNED_MAINTENANCE;
  static const Status EMERGENCY_MAINENANCE =
    Zone_Status_EMERGENCY_MAINENANCE;
  static inline bool Status_IsValid(int value) {
    return Zone_Status_IsValid(value);
  }
  static const Status Status_MIN =
    Zone_Status_Status_MIN;
  static const Status Status_MAX =
    Zone_Status_Status_MAX;
  static const int Status_ARRAYSIZE =
    Zone_Status_Status_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Status_descriptor() {
    return Zone_Status_descriptor();
  }
  static inline const ::std::string& Status_Name(Status value) {
    return Zone_Status_Name(value);
  }
  static inline bool Status_Parse(const ::std::string& name,
      Status* value) {
    return Zone_Status_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string display_name = 2;
  void clear_display_name();
  static const int kDisplayNameFieldNumber = 2;
  const ::std::string& display_name() const;
  void set_display_name(const ::std::string& value);
  #if LANG_CXX11
  void set_display_name(::std::string&& value);
  #endif
  void set_display_name(const char* value);
  void set_display_name(const char* value, size_t size);
  ::std::string* mutable_display_name();
  ::std::string* release_display_name();
  void set_allocated_display_name(::std::string* display_name);

  // .google.bigtable.admin.cluster.v1.Zone.Status status = 3;
  void clear_status();
  static const int kStatusFieldNumber = 3;
  ::google::bigtable::admin::cluster::v1::Zone_Status status() const;
  void set_status(::google::bigtable::admin::cluster::v1::Zone_Status value);

  // @@protoc_insertion_point(class_scope:google.bigtable.admin.cluster.v1.Zone)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr display_name_;
  int status_;
  mutable int _cached_size_;
  friend struct ::protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fdata_2eproto::TableStruct;
  friend void ::protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fdata_2eproto::InitDefaultsZoneImpl();
};
// -------------------------------------------------------------------

class Cluster : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.bigtable.admin.cluster.v1.Cluster) */ {
 public:
  Cluster();
  virtual ~Cluster();

  Cluster(const Cluster& from);

  inline Cluster& operator=(const Cluster& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Cluster(Cluster&& from) noexcept
    : Cluster() {
    *this = ::std::move(from);
  }

  inline Cluster& operator=(Cluster&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Cluster& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Cluster* internal_default_instance() {
    return reinterpret_cast<const Cluster*>(
               &_Cluster_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Cluster* other);
  friend void swap(Cluster& a, Cluster& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Cluster* New() const PROTOBUF_FINAL { return New(NULL); }

  Cluster* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Cluster& from);
  void MergeFrom(const Cluster& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Cluster* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string display_name = 4;
  void clear_display_name();
  static const int kDisplayNameFieldNumber = 4;
  const ::std::string& display_name() const;
  void set_display_name(const ::std::string& value);
  #if LANG_CXX11
  void set_display_name(::std::string&& value);
  #endif
  void set_display_name(const char* value);
  void set_display_name(const char* value, size_t size);
  ::std::string* mutable_display_name();
  ::std::string* release_display_name();
  void set_allocated_display_name(::std::string* display_name);

  // .google.longrunning.Operation current_operation = 3;
  bool has_current_operation() const;
  void clear_current_operation();
  static const int kCurrentOperationFieldNumber = 3;
  const ::google::longrunning::Operation& current_operation() const;
  ::google::longrunning::Operation* release_current_operation();
  ::google::longrunning::Operation* mutable_current_operation();
  void set_allocated_current_operation(::google::longrunning::Operation* current_operation);

  // int32 serve_nodes = 5;
  void clear_serve_nodes();
  static const int kServeNodesFieldNumber = 5;
  ::google::protobuf::int32 serve_nodes() const;
  void set_serve_nodes(::google::protobuf::int32 value);

  // .google.bigtable.admin.cluster.v1.StorageType default_storage_type = 8;
  void clear_default_storage_type();
  static const int kDefaultStorageTypeFieldNumber = 8;
  ::google::bigtable::admin::cluster::v1::StorageType default_storage_type() const;
  void set_default_storage_type(::google::bigtable::admin::cluster::v1::StorageType value);

  // @@protoc_insertion_point(class_scope:google.bigtable.admin.cluster.v1.Cluster)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr display_name_;
  ::google::longrunning::Operation* current_operation_;
  ::google::protobuf::int32 serve_nodes_;
  int default_storage_type_;
  mutable int _cached_size_;
  friend struct ::protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fdata_2eproto::TableStruct;
  friend void ::protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fdata_2eproto::InitDefaultsClusterImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Zone

// string name = 1;
inline void Zone::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Zone::name() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.cluster.v1.Zone.name)
  return name_.GetNoArena();
}
inline void Zone::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.bigtable.admin.cluster.v1.Zone.name)
}
#if LANG_CXX11
inline void Zone::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.bigtable.admin.cluster.v1.Zone.name)
}
#endif
inline void Zone::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.bigtable.admin.cluster.v1.Zone.name)
}
inline void Zone::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.bigtable.admin.cluster.v1.Zone.name)
}
inline ::std::string* Zone::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.bigtable.admin.cluster.v1.Zone.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Zone::release_name() {
  // @@protoc_insertion_point(field_release:google.bigtable.admin.cluster.v1.Zone.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Zone::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.bigtable.admin.cluster.v1.Zone.name)
}

// string display_name = 2;
inline void Zone::clear_display_name() {
  display_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Zone::display_name() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.cluster.v1.Zone.display_name)
  return display_name_.GetNoArena();
}
inline void Zone::set_display_name(const ::std::string& value) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.bigtable.admin.cluster.v1.Zone.display_name)
}
#if LANG_CXX11
inline void Zone::set_display_name(::std::string&& value) {
  
  display_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.bigtable.admin.cluster.v1.Zone.display_name)
}
#endif
inline void Zone::set_display_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.bigtable.admin.cluster.v1.Zone.display_name)
}
inline void Zone::set_display_name(const char* value, size_t size) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.bigtable.admin.cluster.v1.Zone.display_name)
}
inline ::std::string* Zone::mutable_display_name() {
  
  // @@protoc_insertion_point(field_mutable:google.bigtable.admin.cluster.v1.Zone.display_name)
  return display_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Zone::release_display_name() {
  // @@protoc_insertion_point(field_release:google.bigtable.admin.cluster.v1.Zone.display_name)
  
  return display_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Zone::set_allocated_display_name(::std::string* display_name) {
  if (display_name != NULL) {
    
  } else {
    
  }
  display_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), display_name);
  // @@protoc_insertion_point(field_set_allocated:google.bigtable.admin.cluster.v1.Zone.display_name)
}

// .google.bigtable.admin.cluster.v1.Zone.Status status = 3;
inline void Zone::clear_status() {
  status_ = 0;
}
inline ::google::bigtable::admin::cluster::v1::Zone_Status Zone::status() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.cluster.v1.Zone.status)
  return static_cast< ::google::bigtable::admin::cluster::v1::Zone_Status >(status_);
}
inline void Zone::set_status(::google::bigtable::admin::cluster::v1::Zone_Status value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:google.bigtable.admin.cluster.v1.Zone.status)
}

// -------------------------------------------------------------------

// Cluster

// string name = 1;
inline void Cluster::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Cluster::name() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.cluster.v1.Cluster.name)
  return name_.GetNoArena();
}
inline void Cluster::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.bigtable.admin.cluster.v1.Cluster.name)
}
#if LANG_CXX11
inline void Cluster::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.bigtable.admin.cluster.v1.Cluster.name)
}
#endif
inline void Cluster::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.bigtable.admin.cluster.v1.Cluster.name)
}
inline void Cluster::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.bigtable.admin.cluster.v1.Cluster.name)
}
inline ::std::string* Cluster::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.bigtable.admin.cluster.v1.Cluster.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Cluster::release_name() {
  // @@protoc_insertion_point(field_release:google.bigtable.admin.cluster.v1.Cluster.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Cluster::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.bigtable.admin.cluster.v1.Cluster.name)
}

// .google.longrunning.Operation current_operation = 3;
inline bool Cluster::has_current_operation() const {
  return this != internal_default_instance() && current_operation_ != NULL;
}
inline const ::google::longrunning::Operation& Cluster::current_operation() const {
  const ::google::longrunning::Operation* p = current_operation_;
  // @@protoc_insertion_point(field_get:google.bigtable.admin.cluster.v1.Cluster.current_operation)
  return p != NULL ? *p : *reinterpret_cast<const ::google::longrunning::Operation*>(
      &::google::longrunning::_Operation_default_instance_);
}
inline ::google::longrunning::Operation* Cluster::release_current_operation() {
  // @@protoc_insertion_point(field_release:google.bigtable.admin.cluster.v1.Cluster.current_operation)
  
  ::google::longrunning::Operation* temp = current_operation_;
  current_operation_ = NULL;
  return temp;
}
inline ::google::longrunning::Operation* Cluster::mutable_current_operation() {
  
  if (current_operation_ == NULL) {
    current_operation_ = new ::google::longrunning::Operation;
  }
  // @@protoc_insertion_point(field_mutable:google.bigtable.admin.cluster.v1.Cluster.current_operation)
  return current_operation_;
}
inline void Cluster::set_allocated_current_operation(::google::longrunning::Operation* current_operation) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(current_operation_);
  }
  if (current_operation) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      current_operation = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, current_operation, submessage_arena);
    }
    
  } else {
    
  }
  current_operation_ = current_operation;
  // @@protoc_insertion_point(field_set_allocated:google.bigtable.admin.cluster.v1.Cluster.current_operation)
}

// string display_name = 4;
inline void Cluster::clear_display_name() {
  display_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Cluster::display_name() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.cluster.v1.Cluster.display_name)
  return display_name_.GetNoArena();
}
inline void Cluster::set_display_name(const ::std::string& value) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.bigtable.admin.cluster.v1.Cluster.display_name)
}
#if LANG_CXX11
inline void Cluster::set_display_name(::std::string&& value) {
  
  display_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.bigtable.admin.cluster.v1.Cluster.display_name)
}
#endif
inline void Cluster::set_display_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.bigtable.admin.cluster.v1.Cluster.display_name)
}
inline void Cluster::set_display_name(const char* value, size_t size) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.bigtable.admin.cluster.v1.Cluster.display_name)
}
inline ::std::string* Cluster::mutable_display_name() {
  
  // @@protoc_insertion_point(field_mutable:google.bigtable.admin.cluster.v1.Cluster.display_name)
  return display_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Cluster::release_display_name() {
  // @@protoc_insertion_point(field_release:google.bigtable.admin.cluster.v1.Cluster.display_name)
  
  return display_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Cluster::set_allocated_display_name(::std::string* display_name) {
  if (display_name != NULL) {
    
  } else {
    
  }
  display_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), display_name);
  // @@protoc_insertion_point(field_set_allocated:google.bigtable.admin.cluster.v1.Cluster.display_name)
}

// int32 serve_nodes = 5;
inline void Cluster::clear_serve_nodes() {
  serve_nodes_ = 0;
}
inline ::google::protobuf::int32 Cluster::serve_nodes() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.cluster.v1.Cluster.serve_nodes)
  return serve_nodes_;
}
inline void Cluster::set_serve_nodes(::google::protobuf::int32 value) {
  
  serve_nodes_ = value;
  // @@protoc_insertion_point(field_set:google.bigtable.admin.cluster.v1.Cluster.serve_nodes)
}

// .google.bigtable.admin.cluster.v1.StorageType default_storage_type = 8;
inline void Cluster::clear_default_storage_type() {
  default_storage_type_ = 0;
}
inline ::google::bigtable::admin::cluster::v1::StorageType Cluster::default_storage_type() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.cluster.v1.Cluster.default_storage_type)
  return static_cast< ::google::bigtable::admin::cluster::v1::StorageType >(default_storage_type_);
}
inline void Cluster::set_default_storage_type(::google::bigtable::admin::cluster::v1::StorageType value) {
  
  default_storage_type_ = value;
  // @@protoc_insertion_point(field_set:google.bigtable.admin.cluster.v1.Cluster.default_storage_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace cluster
}  // namespace admin
}  // namespace bigtable
}  // namespace google

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::bigtable::admin::cluster::v1::Zone_Status> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::bigtable::admin::cluster::v1::Zone_Status>() {
  return ::google::bigtable::admin::cluster::v1::Zone_Status_descriptor();
}
template <> struct is_proto_enum< ::google::bigtable::admin::cluster::v1::StorageType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::bigtable::admin::cluster::v1::StorageType>() {
  return ::google::bigtable::admin::cluster::v1::StorageType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fdata_2eproto__INCLUDED
