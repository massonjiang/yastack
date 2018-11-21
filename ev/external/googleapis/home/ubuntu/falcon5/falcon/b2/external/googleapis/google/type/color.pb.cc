// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/color.proto

#include "google/type/color.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace google {
namespace type {
class ColorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Color>
      _instance;
} _Color_default_instance_;
}  // namespace type
}  // namespace google
namespace protobuf_google_2ftype_2fcolor_2eproto {
void InitDefaultsColorImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaultsFloatValue();
  {
    void* ptr = &::google::type::_Color_default_instance_;
    new (ptr) ::google::type::Color();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::type::Color::InitAsDefaultInstance();
}

void InitDefaultsColor() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsColorImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::type::Color, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::type::Color, red_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::type::Color, green_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::type::Color, blue_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::type::Color, alpha_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::type::Color)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::type::_Color_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/type/color.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\027google/type/color.proto\022\013google.type\032\036"
      "google/protobuf/wrappers.proto\"]\n\005Color\022"
      "\013\n\003red\030\001 \001(\002\022\r\n\005green\030\002 \001(\002\022\014\n\004blue\030\003 \001("
      "\002\022*\n\005alpha\030\004 \001(\0132\033.google.protobuf.Float"
      "ValueB]\n\017com.google.typeB\nColorProtoP\001Z6"
      "google.golang.org/genproto/googleapis/ty"
      "pe/color;color\242\002\003GTPb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 268);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/type/color.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2fwrappers_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2ftype_2fcolor_2eproto
namespace google {
namespace type {

// ===================================================================

void Color::InitAsDefaultInstance() {
  ::google::type::_Color_default_instance_._instance.get_mutable()->alpha_ = const_cast< ::google::protobuf::FloatValue*>(
      ::google::protobuf::FloatValue::internal_default_instance());
}
void Color::clear_alpha() {
  if (GetArenaNoVirtual() == NULL && alpha_ != NULL) {
    delete alpha_;
  }
  alpha_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Color::kRedFieldNumber;
const int Color::kGreenFieldNumber;
const int Color::kBlueFieldNumber;
const int Color::kAlphaFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Color::Color()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_google_2ftype_2fcolor_2eproto::InitDefaultsColor();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.type.Color)
}
Color::Color(const Color& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_alpha()) {
    alpha_ = new ::google::protobuf::FloatValue(*from.alpha_);
  } else {
    alpha_ = NULL;
  }
  ::memcpy(&red_, &from.red_,
    static_cast<size_t>(reinterpret_cast<char*>(&blue_) -
    reinterpret_cast<char*>(&red_)) + sizeof(blue_));
  // @@protoc_insertion_point(copy_constructor:google.type.Color)
}

void Color::SharedCtor() {
  ::memset(&alpha_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&blue_) -
      reinterpret_cast<char*>(&alpha_)) + sizeof(blue_));
  _cached_size_ = 0;
}

Color::~Color() {
  // @@protoc_insertion_point(destructor:google.type.Color)
  SharedDtor();
}

void Color::SharedDtor() {
  if (this != internal_default_instance()) delete alpha_;
}

void Color::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Color::descriptor() {
  ::protobuf_google_2ftype_2fcolor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2ftype_2fcolor_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Color& Color::default_instance() {
  ::protobuf_google_2ftype_2fcolor_2eproto::InitDefaultsColor();
  return *internal_default_instance();
}

Color* Color::New(::google::protobuf::Arena* arena) const {
  Color* n = new Color;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Color::Clear() {
// @@protoc_insertion_point(message_clear_start:google.type.Color)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && alpha_ != NULL) {
    delete alpha_;
  }
  alpha_ = NULL;
  ::memset(&red_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&blue_) -
      reinterpret_cast<char*>(&red_)) + sizeof(blue_));
  _internal_metadata_.Clear();
}

bool Color::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.type.Color)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float red = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(13u /* 13 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &red_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float green = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &green_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float blue = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &blue_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.FloatValue alpha = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_alpha()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.type.Color)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.type.Color)
  return false;
#undef DO_
}

void Color::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.type.Color)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float red = 1;
  if (this->red() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->red(), output);
  }

  // float green = 2;
  if (this->green() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->green(), output);
  }

  // float blue = 3;
  if (this->blue() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->blue(), output);
  }

  // .google.protobuf.FloatValue alpha = 4;
  if (this->has_alpha()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->alpha_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.type.Color)
}

::google::protobuf::uint8* Color::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.type.Color)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float red = 1;
  if (this->red() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->red(), target);
  }

  // float green = 2;
  if (this->green() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->green(), target);
  }

  // float blue = 3;
  if (this->blue() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->blue(), target);
  }

  // .google.protobuf.FloatValue alpha = 4;
  if (this->has_alpha()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, *this->alpha_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.type.Color)
  return target;
}

size_t Color::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.type.Color)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .google.protobuf.FloatValue alpha = 4;
  if (this->has_alpha()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->alpha_);
  }

  // float red = 1;
  if (this->red() != 0) {
    total_size += 1 + 4;
  }

  // float green = 2;
  if (this->green() != 0) {
    total_size += 1 + 4;
  }

  // float blue = 3;
  if (this->blue() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Color::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.type.Color)
  GOOGLE_DCHECK_NE(&from, this);
  const Color* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Color>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.type.Color)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.type.Color)
    MergeFrom(*source);
  }
}

void Color::MergeFrom(const Color& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.type.Color)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_alpha()) {
    mutable_alpha()->::google::protobuf::FloatValue::MergeFrom(from.alpha());
  }
  if (from.red() != 0) {
    set_red(from.red());
  }
  if (from.green() != 0) {
    set_green(from.green());
  }
  if (from.blue() != 0) {
    set_blue(from.blue());
  }
}

void Color::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.type.Color)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Color::CopyFrom(const Color& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.type.Color)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Color::IsInitialized() const {
  return true;
}

void Color::Swap(Color* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Color::InternalSwap(Color* other) {
  using std::swap;
  swap(alpha_, other->alpha_);
  swap(red_, other->red_);
  swap(green_, other->green_);
  swap(blue_, other->blue_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Color::GetMetadata() const {
  protobuf_google_2ftype_2fcolor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2ftype_2fcolor_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)
