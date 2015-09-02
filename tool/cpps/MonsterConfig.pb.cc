// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MonsterConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MonsterConfig.pb.h"

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

const ::google::protobuf::Descriptor* MonsterConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MonsterConfig_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MonsterConfig_MONSTERTYPE_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_MonsterConfig_2eproto() {
  protobuf_AddDesc_MonsterConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MonsterConfig.proto");
  GOOGLE_CHECK(file != NULL);
  MonsterConfig_descriptor_ = file->message_type(0);
  static const int MonsterConfig_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonsterConfig, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonsterConfig, monsterid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonsterConfig, position_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonsterConfig, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonsterConfig, groupposition_),
  };
  MonsterConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MonsterConfig_descriptor_,
      MonsterConfig::default_instance_,
      MonsterConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonsterConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonsterConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MonsterConfig));
  MonsterConfig_MONSTERTYPE_descriptor_ = MonsterConfig_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MonsterConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MonsterConfig_descriptor_, &MonsterConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MonsterConfig_2eproto() {
  delete MonsterConfig::default_instance_;
  delete MonsterConfig_reflection_;
}

void protobuf_AddDesc_MonsterConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::ProConfigSpace::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023MonsterConfig.proto\022\016ProConfigSpace\032\025C"
    "onfigTypeGroup.proto\"\313\003\n\rMonsterConfig\0227"
    "\n\004type\030\003 \001(\0162).ProConfigSpace.MonsterCon"
    "fig.MONSTERTYPE\022\021\n\tmonsterid\030\001 \001(\005\022\020\n\010po"
    "sition\030\004 \003(\005\022\014\n\004name\030\002 \001(\t\0226\n\rgroupposit"
    "ion\030\005 \003(\0132\037.ProConfigSpace.ConfigTypeGro"
    "up\"\225\002\n\013MONSTERTYPE\022\022\n\016MONSTER_TYPE_7\020\007\022\022"
    "\n\016MONSTER_TYPE_2\020\002\022\023\n\017MONSTER_TYPE_11\020\013\022"
    "\023\n\017MONSTER_TYPE_13\020\r\022\022\n\016MONSTER_TYPE_5\020\005"
    "\022\023\n\017MONSTER_TYPE_12\020\014\022\023\n\017MONSTER_TYPE_10"
    "\020\n\022\022\n\016MONSTER_TYPE_6\020\006\022\022\n\016MONSTER_TYPE_9"
    "\020\t\022\022\n\016MONSTER_TYPE_8\020\010\022\022\n\016MONSTER_TYPE_1"
    "\020\001\022\022\n\016MONSTER_TYPE_4\020\004\022\022\n\016MONSTER_TYPE_3"
    "\020\003", 522);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MonsterConfig.proto", &protobuf_RegisterTypes);
  MonsterConfig::default_instance_ = new MonsterConfig();
  MonsterConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MonsterConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MonsterConfig_2eproto {
  StaticDescriptorInitializer_MonsterConfig_2eproto() {
    protobuf_AddDesc_MonsterConfig_2eproto();
  }
} static_descriptor_initializer_MonsterConfig_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* MonsterConfig_MONSTERTYPE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MonsterConfig_MONSTERTYPE_descriptor_;
}
bool MonsterConfig_MONSTERTYPE_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTER_TYPE_7;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTER_TYPE_2;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTER_TYPE_11;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTER_TYPE_13;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTER_TYPE_5;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTER_TYPE_12;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTER_TYPE_10;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTER_TYPE_6;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTER_TYPE_9;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTER_TYPE_8;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTER_TYPE_1;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTER_TYPE_4;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTER_TYPE_3;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTERTYPE_MIN;
const MonsterConfig_MONSTERTYPE MonsterConfig::MONSTERTYPE_MAX;
const int MonsterConfig::MONSTERTYPE_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int MonsterConfig::kTypeFieldNumber;
const int MonsterConfig::kMonsteridFieldNumber;
const int MonsterConfig::kPositionFieldNumber;
const int MonsterConfig::kNameFieldNumber;
const int MonsterConfig::kGrouppositionFieldNumber;
#endif  // !_MSC_VER

MonsterConfig::MonsterConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MonsterConfig::InitAsDefaultInstance() {
}

MonsterConfig::MonsterConfig(const MonsterConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MonsterConfig::SharedCtor() {
  _cached_size_ = 0;
  type_ = 7;
  monsterid_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MonsterConfig::~MonsterConfig() {
  SharedDtor();
}

void MonsterConfig::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void MonsterConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MonsterConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MonsterConfig_descriptor_;
}

const MonsterConfig& MonsterConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MonsterConfig_2eproto();
  return *default_instance_;
}

MonsterConfig* MonsterConfig::default_instance_ = NULL;

MonsterConfig* MonsterConfig::New() const {
  return new MonsterConfig;
}

void MonsterConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 7;
    monsterid_ = 0;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
  }
  position_.Clear();
  groupposition_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MonsterConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 monsterid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &monsterid_)));
          set_has_monsterid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // optional string name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_type;
        break;
      }

      // optional .ProConfigSpace.MonsterConfig.MONSTERTYPE type = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::ProConfigSpace::MonsterConfig_MONSTERTYPE_IsValid(value)) {
            set_type(static_cast< ::ProConfigSpace::MonsterConfig_MONSTERTYPE >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_position;
        break;
      }

      // repeated int32 position = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_position:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 32, input, this->mutable_position())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_position())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_position;
        if (input->ExpectTag(42)) goto parse_groupposition;
        break;
      }

      // repeated .ProConfigSpace.ConfigTypeGroup groupposition = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_groupposition:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_groupposition()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_groupposition;
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

void MonsterConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 monsterid = 1;
  if (has_monsterid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->monsterid(), output);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->name(), output);
  }

  // optional .ProConfigSpace.MonsterConfig.MONSTERTYPE type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->type(), output);
  }

  // repeated int32 position = 4;
  for (int i = 0; i < this->position_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      4, this->position(i), output);
  }

  // repeated .ProConfigSpace.ConfigTypeGroup groupposition = 5;
  for (int i = 0; i < this->groupposition_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->groupposition(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MonsterConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 monsterid = 1;
  if (has_monsterid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->monsterid(), target);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // optional .ProConfigSpace.MonsterConfig.MONSTERTYPE type = 3;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->type(), target);
  }

  // repeated int32 position = 4;
  for (int i = 0; i < this->position_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(4, this->position(i), target);
  }

  // repeated .ProConfigSpace.ConfigTypeGroup groupposition = 5;
  for (int i = 0; i < this->groupposition_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->groupposition(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MonsterConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .ProConfigSpace.MonsterConfig.MONSTERTYPE type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional int32 monsterid = 1;
    if (has_monsterid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->monsterid());
    }

    // optional string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

  }
  // repeated int32 position = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->position_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->position(i));
    }
    total_size += 1 * this->position_size() + data_size;
  }

  // repeated .ProConfigSpace.ConfigTypeGroup groupposition = 5;
  total_size += 1 * this->groupposition_size();
  for (int i = 0; i < this->groupposition_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->groupposition(i));
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

void MonsterConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MonsterConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MonsterConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MonsterConfig::MergeFrom(const MonsterConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  position_.MergeFrom(from.position_);
  groupposition_.MergeFrom(from.groupposition_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_monsterid()) {
      set_monsterid(from.monsterid());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MonsterConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MonsterConfig::CopyFrom(const MonsterConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MonsterConfig::IsInitialized() const {

  return true;
}

void MonsterConfig::Swap(MonsterConfig* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(monsterid_, other->monsterid_);
    position_.Swap(&other->position_);
    std::swap(name_, other->name_);
    groupposition_.Swap(&other->groupposition_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MonsterConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MonsterConfig_descriptor_;
  metadata.reflection = MonsterConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ProConfigSpace

// @@protoc_insertion_point(global_scope)
