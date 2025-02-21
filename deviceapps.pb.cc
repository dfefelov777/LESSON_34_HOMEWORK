// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: deviceapps.proto
// Protobuf C++ Version: 5.29.3

#include "deviceapps.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;

inline constexpr DeviceApps_Device::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : id_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        type_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR DeviceApps_Device::DeviceApps_Device(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct DeviceApps_DeviceDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DeviceApps_DeviceDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~DeviceApps_DeviceDefaultTypeInternal() {}
  union {
    DeviceApps_Device _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DeviceApps_DeviceDefaultTypeInternal _DeviceApps_Device_default_instance_;

inline constexpr DeviceApps::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        apps_{},
        _apps_cached_byte_size_{0},
        device_{nullptr},
        lat_{0},
        lon_{0} {}

template <typename>
PROTOBUF_CONSTEXPR DeviceApps::DeviceApps(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct DeviceAppsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DeviceAppsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~DeviceAppsDefaultTypeInternal() {}
  union {
    DeviceApps _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DeviceAppsDefaultTypeInternal _DeviceApps_default_instance_;
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_deviceapps_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_deviceapps_2eproto = nullptr;
const ::uint32_t
    TableStruct_deviceapps_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::DeviceApps_Device, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::DeviceApps_Device, _impl_.id_),
        PROTOBUF_FIELD_OFFSET(::DeviceApps_Device, _impl_.type_),
        PROTOBUF_FIELD_OFFSET(::DeviceApps, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::DeviceApps, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::DeviceApps, _impl_.device_),
        PROTOBUF_FIELD_OFFSET(::DeviceApps, _impl_.apps_),
        PROTOBUF_FIELD_OFFSET(::DeviceApps, _impl_.lat_),
        PROTOBUF_FIELD_OFFSET(::DeviceApps, _impl_.lon_),
        0,
        ~0u,
        ~0u,
        ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::DeviceApps_Device)},
        {10, 22, -1, sizeof(::DeviceApps)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::_DeviceApps_Device_default_instance_._instance,
    &::_DeviceApps_default_instance_._instance,
};
const char descriptor_table_protodef_deviceapps_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\020deviceapps.proto\"|\n\nDeviceApps\022\"\n\006devi"
    "ce\030\001 \001(\0132\022.DeviceApps.Device\022\014\n\004apps\030\002 \003"
    "(\r\022\013\n\003lat\030\003 \001(\001\022\013\n\003lon\030\004 \001(\001\032\"\n\006Device\022\n"
    "\n\002id\030\001 \001(\014\022\014\n\004type\030\002 \001(\014b\006proto3"
};
static ::absl::once_flag descriptor_table_deviceapps_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_deviceapps_2eproto = {
    false,
    false,
    152,
    descriptor_table_protodef_deviceapps_2eproto,
    "deviceapps.proto",
    &descriptor_table_deviceapps_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_deviceapps_2eproto::offsets,
    file_level_enum_descriptors_deviceapps_2eproto,
    file_level_service_descriptors_deviceapps_2eproto,
};
// ===================================================================

class DeviceApps_Device::_Internal {
 public:
};

DeviceApps_Device::DeviceApps_Device(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:DeviceApps.Device)
}
inline PROTOBUF_NDEBUG_INLINE DeviceApps_Device::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::DeviceApps_Device& from_msg)
      : id_(arena, from.id_),
        type_(arena, from.type_),
        _cached_size_{0} {}

DeviceApps_Device::DeviceApps_Device(
    ::google::protobuf::Arena* arena,
    const DeviceApps_Device& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  DeviceApps_Device* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:DeviceApps.Device)
}
inline PROTOBUF_NDEBUG_INLINE DeviceApps_Device::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : id_(arena),
        type_(arena),
        _cached_size_{0} {}

inline void DeviceApps_Device::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
DeviceApps_Device::~DeviceApps_Device() {
  // @@protoc_insertion_point(destructor:DeviceApps.Device)
  SharedDtor(*this);
}
inline void DeviceApps_Device::SharedDtor(MessageLite& self) {
  DeviceApps_Device& this_ = static_cast<DeviceApps_Device&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.id_.Destroy();
  this_._impl_.type_.Destroy();
  this_._impl_.~Impl_();
}

inline void* DeviceApps_Device::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) DeviceApps_Device(arena);
}
constexpr auto DeviceApps_Device::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::CopyInit(sizeof(DeviceApps_Device),
                                            alignof(DeviceApps_Device));
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull DeviceApps_Device::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_DeviceApps_Device_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &DeviceApps_Device::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<DeviceApps_Device>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &DeviceApps_Device::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<DeviceApps_Device>(), &DeviceApps_Device::ByteSizeLong,
            &DeviceApps_Device::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(DeviceApps_Device, _impl_._cached_size_),
        false,
    },
    &DeviceApps_Device::kDescriptorMethods,
    &descriptor_table_deviceapps_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* DeviceApps_Device::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> DeviceApps_Device::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::DeviceApps_Device>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // bytes type = 2;
    {::_pbi::TcParser::FastBS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(DeviceApps_Device, _impl_.type_)}},
    // bytes id = 1;
    {::_pbi::TcParser::FastBS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(DeviceApps_Device, _impl_.id_)}},
  }}, {{
    65535, 65535
  }}, {{
    // bytes id = 1;
    {PROTOBUF_FIELD_OFFSET(DeviceApps_Device, _impl_.id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
    // bytes type = 2;
    {PROTOBUF_FIELD_OFFSET(DeviceApps_Device, _impl_.type_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void DeviceApps_Device::Clear() {
// @@protoc_insertion_point(message_clear_start:DeviceApps.Device)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.id_.ClearToEmpty();
  _impl_.type_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* DeviceApps_Device::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const DeviceApps_Device& this_ = static_cast<const DeviceApps_Device&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* DeviceApps_Device::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const DeviceApps_Device& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:DeviceApps.Device)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // bytes id = 1;
          if (!this_._internal_id().empty()) {
            const std::string& _s = this_._internal_id();
            target = stream->WriteBytesMaybeAliased(1, _s, target);
          }

          // bytes type = 2;
          if (!this_._internal_type().empty()) {
            const std::string& _s = this_._internal_type();
            target = stream->WriteBytesMaybeAliased(2, _s, target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:DeviceApps.Device)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t DeviceApps_Device::ByteSizeLong(const MessageLite& base) {
          const DeviceApps_Device& this_ = static_cast<const DeviceApps_Device&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t DeviceApps_Device::ByteSizeLong() const {
          const DeviceApps_Device& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:DeviceApps.Device)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // bytes id = 1;
            if (!this_._internal_id().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                              this_._internal_id());
            }
            // bytes type = 2;
            if (!this_._internal_type().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                              this_._internal_type());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void DeviceApps_Device::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<DeviceApps_Device*>(&to_msg);
  auto& from = static_cast<const DeviceApps_Device&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:DeviceApps.Device)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_id().empty()) {
    _this->_internal_set_id(from._internal_id());
  }
  if (!from._internal_type().empty()) {
    _this->_internal_set_type(from._internal_type());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void DeviceApps_Device::CopyFrom(const DeviceApps_Device& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:DeviceApps.Device)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void DeviceApps_Device::InternalSwap(DeviceApps_Device* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.id_, &other->_impl_.id_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.type_, &other->_impl_.type_, arena);
}

::google::protobuf::Metadata DeviceApps_Device::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class DeviceApps::_Internal {
 public:
  using HasBits =
      decltype(std::declval<DeviceApps>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_._has_bits_);
};

DeviceApps::DeviceApps(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:DeviceApps)
}
inline PROTOBUF_NDEBUG_INLINE DeviceApps::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::DeviceApps& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        apps_{visibility, arena, from.apps_},
        _apps_cached_byte_size_{0} {}

DeviceApps::DeviceApps(
    ::google::protobuf::Arena* arena,
    const DeviceApps& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  DeviceApps* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.device_ = (cached_has_bits & 0x00000001u) ? ::google::protobuf::Message::CopyConstruct<::DeviceApps_Device>(
                              arena, *from._impl_.device_)
                        : nullptr;
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, lat_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, lat_),
           offsetof(Impl_, lon_) -
               offsetof(Impl_, lat_) +
               sizeof(Impl_::lon_));

  // @@protoc_insertion_point(copy_constructor:DeviceApps)
}
inline PROTOBUF_NDEBUG_INLINE DeviceApps::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        apps_{visibility, arena},
        _apps_cached_byte_size_{0} {}

inline void DeviceApps::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, device_),
           0,
           offsetof(Impl_, lon_) -
               offsetof(Impl_, device_) +
               sizeof(Impl_::lon_));
}
DeviceApps::~DeviceApps() {
  // @@protoc_insertion_point(destructor:DeviceApps)
  SharedDtor(*this);
}
inline void DeviceApps::SharedDtor(MessageLite& self) {
  DeviceApps& this_ = static_cast<DeviceApps&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  delete this_._impl_.device_;
  this_._impl_.~Impl_();
}

inline void* DeviceApps::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) DeviceApps(arena);
}
constexpr auto DeviceApps::InternalNewImpl_() {
  constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
      PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_.apps_) +
          decltype(DeviceApps::_impl_.apps_)::
              InternalGetArenaOffset(
                  ::google::protobuf::Message::internal_visibility()),
  });
  if (arena_bits.has_value()) {
    return ::google::protobuf::internal::MessageCreator::ZeroInit(
        sizeof(DeviceApps), alignof(DeviceApps), *arena_bits);
  } else {
    return ::google::protobuf::internal::MessageCreator(&DeviceApps::PlacementNew_,
                                 sizeof(DeviceApps),
                                 alignof(DeviceApps));
  }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull DeviceApps::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_DeviceApps_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &DeviceApps::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<DeviceApps>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &DeviceApps::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<DeviceApps>(), &DeviceApps::ByteSizeLong,
            &DeviceApps::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_._cached_size_),
        false,
    },
    &DeviceApps::kDescriptorMethods,
    &descriptor_table_deviceapps_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* DeviceApps::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 4, 1, 0, 2> DeviceApps::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_._has_bits_),
    0, // no _extensions_
    4, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967280,  // skipmap
    offsetof(decltype(_table_), field_entries),
    4,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::DeviceApps>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // double lon = 4;
    {::_pbi::TcParser::FastF64S1,
     {33, 63, 0, PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_.lon_)}},
    // .DeviceApps.Device device = 1;
    {::_pbi::TcParser::FastMtS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_.device_)}},
    // repeated uint32 apps = 2;
    {::_pbi::TcParser::FastV32P1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_.apps_)}},
    // double lat = 3;
    {::_pbi::TcParser::FastF64S1,
     {25, 63, 0, PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_.lat_)}},
  }}, {{
    65535, 65535
  }}, {{
    // .DeviceApps.Device device = 1;
    {PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_.device_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // repeated uint32 apps = 2;
    {PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_.apps_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kPackedUInt32)},
    // double lat = 3;
    {PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_.lat_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kDouble)},
    // double lon = 4;
    {PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_.lon_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kDouble)},
  }}, {{
    {::_pbi::TcParser::GetTable<::DeviceApps_Device>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void DeviceApps::Clear() {
// @@protoc_insertion_point(message_clear_start:DeviceApps)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.apps_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.device_ != nullptr);
    _impl_.device_->Clear();
  }
  ::memset(&_impl_.lat_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.lon_) -
      reinterpret_cast<char*>(&_impl_.lat_)) + sizeof(_impl_.lon_));
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* DeviceApps::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const DeviceApps& this_ = static_cast<const DeviceApps&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* DeviceApps::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const DeviceApps& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:DeviceApps)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          cached_has_bits = this_._impl_._has_bits_[0];
          // .DeviceApps.Device device = 1;
          if (cached_has_bits & 0x00000001u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                1, *this_._impl_.device_, this_._impl_.device_->GetCachedSize(), target,
                stream);
          }

          // repeated uint32 apps = 2;
          {
            int byte_size = this_._impl_._apps_cached_byte_size_.Get();
            if (byte_size > 0) {
              target = stream->WriteUInt32Packed(
                  2, this_._internal_apps(), byte_size, target);
            }
          }

          // double lat = 3;
          if (::absl::bit_cast<::uint64_t>(this_._internal_lat()) != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteDoubleToArray(
                3, this_._internal_lat(), target);
          }

          // double lon = 4;
          if (::absl::bit_cast<::uint64_t>(this_._internal_lon()) != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteDoubleToArray(
                4, this_._internal_lon(), target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:DeviceApps)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t DeviceApps::ByteSizeLong(const MessageLite& base) {
          const DeviceApps& this_ = static_cast<const DeviceApps&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t DeviceApps::ByteSizeLong() const {
          const DeviceApps& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:DeviceApps)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // repeated uint32 apps = 2;
            {
              total_size +=
                  ::_pbi::WireFormatLite::UInt32SizeWithPackedTagSize(
                      this_._internal_apps(), 1,
                      this_._impl_._apps_cached_byte_size_);
            }
          }
           {
            // .DeviceApps.Device device = 1;
            cached_has_bits = this_._impl_._has_bits_[0];
            if (cached_has_bits & 0x00000001u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.device_);
            }
          }
           {
            // double lat = 3;
            if (::absl::bit_cast<::uint64_t>(this_._internal_lat()) != 0) {
              total_size += 9;
            }
            // double lon = 4;
            if (::absl::bit_cast<::uint64_t>(this_._internal_lon()) != 0) {
              total_size += 9;
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void DeviceApps::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<DeviceApps*>(&to_msg);
  auto& from = static_cast<const DeviceApps&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:DeviceApps)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_apps()->MergeFrom(from._internal_apps());
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(from._impl_.device_ != nullptr);
    if (_this->_impl_.device_ == nullptr) {
      _this->_impl_.device_ =
          ::google::protobuf::Message::CopyConstruct<::DeviceApps_Device>(arena, *from._impl_.device_);
    } else {
      _this->_impl_.device_->MergeFrom(*from._impl_.device_);
    }
  }
  if (::absl::bit_cast<::uint64_t>(from._internal_lat()) != 0) {
    _this->_impl_.lat_ = from._impl_.lat_;
  }
  if (::absl::bit_cast<::uint64_t>(from._internal_lon()) != 0) {
    _this->_impl_.lon_ = from._impl_.lon_;
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void DeviceApps::CopyFrom(const DeviceApps& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:DeviceApps)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void DeviceApps::InternalSwap(DeviceApps* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.apps_.InternalSwap(&other->_impl_.apps_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_.lon_)
      + sizeof(DeviceApps::_impl_.lon_)
      - PROTOBUF_FIELD_OFFSET(DeviceApps, _impl_.device_)>(
          reinterpret_cast<char*>(&_impl_.device_),
          reinterpret_cast<char*>(&other->_impl_.device_));
}

::google::protobuf::Metadata DeviceApps::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_deviceapps_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
