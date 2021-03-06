// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ItemSellConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ItemSellConfig.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace ProConfigSpace {

namespace {

const ::google::protobuf::Descriptor* ItemSellConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ItemSellConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ItemSellConfig_2eproto() {
  protobuf_AddDesc_ItemSellConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ItemSellConfig.proto");
  GOOGLE_CHECK(file != NULL);
  ItemSellConfig_descriptor_ = file->message_type(0);
  static const int ItemSellConfig_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemSellConfig, sell_id_),
  };
  ItemSellConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ItemSellConfig_descriptor_,
      ItemSellConfig::default_instance_,
      ItemSellConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemSellConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemSellConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ItemSellConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ItemSellConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ItemSellConfig_descriptor_, &ItemSellConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ItemSellConfig_2eproto() {
  delete ItemSellConfig::default_instance_;
  delete ItemSellConfig_reflection_;
}

void protobuf_AddDesc_ItemSellConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::ProConfigSpace::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024ItemSellConfig.proto\022\016ProConfigSpace\032\025"
    "ConfigTypeGroup.proto\"!\n\016ItemSellConfig\022"
    "\017\n\007sell_id\030\001 \001(\005", 96);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ItemSellConfig.proto", &protobuf_RegisterTypes);
  ItemSellConfig::default_instance_ = new ItemSellConfig();
  ItemSellConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ItemSellConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ItemSellConfig_2eproto {
  StaticDescriptorInitializer_ItemSellConfig_2eproto() {
    protobuf_AddDesc_ItemSellConfig_2eproto();
  }
} static_descriptor_initializer_ItemSellConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ItemSellConfig::kSellIdFieldNumber;
#endif  // !_MSC_VER

ItemSellConfig::ItemSellConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ItemSellConfig::InitAsDefaultInstance() {
}

ItemSellConfig::ItemSellConfig(const ItemSellConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ItemSellConfig::SharedCtor() {
  _cached_size_ = 0;
  sell_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ItemSellConfig::~ItemSellConfig() {
  SharedDtor();
}

void ItemSellConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ItemSellConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ItemSellConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ItemSellConfig_descriptor_;
}

const ItemSellConfig& ItemSellConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ItemSellConfig_2eproto();
  return *default_instance_;
}

ItemSellConfig* ItemSellConfig::default_instance_ = NULL;

ItemSellConfig* ItemSellConfig::New() const {
  return new ItemSellConfig;
}

void ItemSellConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    sell_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ItemSellConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 sell_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sell_id_)));
          set_has_sell_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ItemSellConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 sell_id = 1;
  if (has_sell_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->sell_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ItemSellConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 sell_id = 1;
  if (has_sell_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->sell_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ItemSellConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 sell_id = 1;
    if (has_sell_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sell_id());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ItemSellConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ItemSellConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ItemSellConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ItemSellConfig::MergeFrom(const ItemSellConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_sell_id()) {
      set_sell_id(from.sell_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ItemSellConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ItemSellConfig::CopyFrom(const ItemSellConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ItemSellConfig::IsInitialized() const {

  return true;
}

void ItemSellConfig::Swap(ItemSellConfig* other) {
  if (other != this) {
    std::swap(sell_id_, other->sell_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ItemSellConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ItemSellConfig_descriptor_;
  metadata.reflection = ItemSellConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ProConfigSpace

// @@protoc_insertion_point(global_scope)
