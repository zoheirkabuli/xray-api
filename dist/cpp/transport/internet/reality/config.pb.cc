// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: transport/internet/reality/config.proto

#include "transport/internet/reality/config.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace xray {
namespace transport {
namespace internet {
namespace reality {

inline constexpr Config::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : server_names_{},
        short_ids_{},
        spider_y_{},
        _spider_y_cached_byte_size_{0},
        dest_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        type_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        private_key_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        min_client_ver_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        max_client_ver_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        fingerprint_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        server_name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        public_key_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        short_id_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        spider_x_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        master_key_log_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        xver_{::uint64_t{0u}},
        max_time_diff_{::uint64_t{0u}},
        show_{false},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Config::Config(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ConfigDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ConfigDefaultTypeInternal() {}
  union {
    Config _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ConfigDefaultTypeInternal _Config_default_instance_;
}  // namespace reality
}  // namespace internet
}  // namespace transport
}  // namespace xray
static ::_pb::Metadata file_level_metadata_transport_2finternet_2freality_2fconfig_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_transport_2finternet_2freality_2fconfig_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_transport_2finternet_2freality_2fconfig_2eproto = nullptr;
const ::uint32_t TableStruct_transport_2finternet_2freality_2fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.show_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.dest_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.type_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.xver_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.server_names_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.private_key_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.min_client_ver_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.max_client_ver_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.max_time_diff_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.short_ids_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.fingerprint_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.server_name_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.public_key_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.short_id_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.spider_x_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.spider_y_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::reality::Config, _impl_.master_key_log_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::xray::transport::internet::reality::Config)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::xray::transport::internet::reality::_Config_default_instance_._instance,
};
const char descriptor_table_protodef_transport_2finternet_2freality_2fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\'transport/internet/reality/config.prot"
    "o\022\037xray.transport.internet.reality\"\321\002\n\006C"
    "onfig\022\014\n\004show\030\001 \001(\010\022\014\n\004dest\030\002 \001(\t\022\014\n\004typ"
    "e\030\003 \001(\t\022\014\n\004xver\030\004 \001(\004\022\024\n\014server_names\030\005 "
    "\003(\t\022\023\n\013private_key\030\006 \001(\014\022\026\n\016min_client_v"
    "er\030\007 \001(\014\022\026\n\016max_client_ver\030\010 \001(\014\022\025\n\rmax_"
    "time_diff\030\t \001(\004\022\021\n\tshort_ids\030\n \003(\014\022\023\n\013Fi"
    "ngerprint\030\025 \001(\t\022\023\n\013server_name\030\026 \001(\t\022\022\n\n"
    "public_key\030\027 \001(\014\022\020\n\010short_id\030\030 \001(\014\022\020\n\010sp"
    "ider_x\030\031 \001(\t\022\020\n\010spider_y\030\032 \003(\003\022\026\n\016master"
    "_key_log\030\033 \001(\tB\177\n#com.xray.transport.int"
    "ernet.realityP\001Z4github.com/xtls/xray-co"
    "re/transport/internet/reality\252\002\037Xray.Tra"
    "nsport.Internet.Realityb\006proto3"
};
static ::absl::once_flag descriptor_table_transport_2finternet_2freality_2fconfig_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_transport_2finternet_2freality_2fconfig_2eproto = {
    false,
    false,
    551,
    descriptor_table_protodef_transport_2finternet_2freality_2fconfig_2eproto,
    "transport/internet/reality/config.proto",
    &descriptor_table_transport_2finternet_2freality_2fconfig_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_transport_2finternet_2freality_2fconfig_2eproto::offsets,
    file_level_metadata_transport_2finternet_2freality_2fconfig_2eproto,
    file_level_enum_descriptors_transport_2finternet_2freality_2fconfig_2eproto,
    file_level_service_descriptors_transport_2finternet_2freality_2fconfig_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_transport_2finternet_2freality_2fconfig_2eproto_getter() {
  return &descriptor_table_transport_2finternet_2freality_2fconfig_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_transport_2finternet_2freality_2fconfig_2eproto(&descriptor_table_transport_2finternet_2freality_2fconfig_2eproto);
namespace xray {
namespace transport {
namespace internet {
namespace reality {
// ===================================================================

class Config::_Internal {
 public:
};

Config::Config(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:xray.transport.internet.reality.Config)
}
inline PROTOBUF_NDEBUG_INLINE Config::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : server_names_{visibility, arena, from.server_names_},
        short_ids_{visibility, arena, from.short_ids_},
        spider_y_{visibility, arena, from.spider_y_},
        _spider_y_cached_byte_size_{0},
        dest_(arena, from.dest_),
        type_(arena, from.type_),
        private_key_(arena, from.private_key_),
        min_client_ver_(arena, from.min_client_ver_),
        max_client_ver_(arena, from.max_client_ver_),
        fingerprint_(arena, from.fingerprint_),
        server_name_(arena, from.server_name_),
        public_key_(arena, from.public_key_),
        short_id_(arena, from.short_id_),
        spider_x_(arena, from.spider_x_),
        master_key_log_(arena, from.master_key_log_),
        _cached_size_{0} {}

Config::Config(
    ::google::protobuf::Arena* arena,
    const Config& from)
    : ::google::protobuf::Message(arena) {
  Config* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, xver_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, xver_),
           offsetof(Impl_, show_) -
               offsetof(Impl_, xver_) +
               sizeof(Impl_::show_));

  // @@protoc_insertion_point(copy_constructor:xray.transport.internet.reality.Config)
}
inline PROTOBUF_NDEBUG_INLINE Config::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : server_names_{visibility, arena},
        short_ids_{visibility, arena},
        spider_y_{visibility, arena},
        _spider_y_cached_byte_size_{0},
        dest_(arena),
        type_(arena),
        private_key_(arena),
        min_client_ver_(arena),
        max_client_ver_(arena),
        fingerprint_(arena),
        server_name_(arena),
        public_key_(arena),
        short_id_(arena),
        spider_x_(arena),
        master_key_log_(arena),
        _cached_size_{0} {}

inline void Config::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, xver_),
           0,
           offsetof(Impl_, show_) -
               offsetof(Impl_, xver_) +
               sizeof(Impl_::show_));
}
Config::~Config() {
  // @@protoc_insertion_point(destructor:xray.transport.internet.reality.Config)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Config::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.dest_.Destroy();
  _impl_.type_.Destroy();
  _impl_.private_key_.Destroy();
  _impl_.min_client_ver_.Destroy();
  _impl_.max_client_ver_.Destroy();
  _impl_.fingerprint_.Destroy();
  _impl_.server_name_.Destroy();
  _impl_.public_key_.Destroy();
  _impl_.short_id_.Destroy();
  _impl_.spider_x_.Destroy();
  _impl_.master_key_log_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Config::Clear() {
// @@protoc_insertion_point(message_clear_start:xray.transport.internet.reality.Config)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.server_names_.Clear();
  _impl_.short_ids_.Clear();
  _impl_.spider_y_.Clear();
  _impl_.dest_.ClearToEmpty();
  _impl_.type_.ClearToEmpty();
  _impl_.private_key_.ClearToEmpty();
  _impl_.min_client_ver_.ClearToEmpty();
  _impl_.max_client_ver_.ClearToEmpty();
  _impl_.fingerprint_.ClearToEmpty();
  _impl_.server_name_.ClearToEmpty();
  _impl_.public_key_.ClearToEmpty();
  _impl_.short_id_.ClearToEmpty();
  _impl_.spider_x_.ClearToEmpty();
  _impl_.master_key_log_.ClearToEmpty();
  ::memset(&_impl_.xver_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.show_) -
      reinterpret_cast<char*>(&_impl_.xver_)) + sizeof(_impl_.show_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Config::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<5, 17, 0, 127, 2> Config::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    27, 248,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4161797120,  // skipmap
    offsetof(decltype(_table_), field_entries),
    17,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Config_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // bool show = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<bool, offsetof(Config, _impl_.show_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.show_)}},
    // string dest = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.dest_)}},
    // string type = 3;
    {::_pbi::TcParser::FastUS1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.type_)}},
    // uint64 xver = 4;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint64_t, offsetof(Config, _impl_.xver_), 63>(),
     {32, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.xver_)}},
    // repeated string server_names = 5;
    {::_pbi::TcParser::FastUR1,
     {42, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.server_names_)}},
    // bytes private_key = 6;
    {::_pbi::TcParser::FastBS1,
     {50, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.private_key_)}},
    // bytes min_client_ver = 7;
    {::_pbi::TcParser::FastBS1,
     {58, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.min_client_ver_)}},
    // bytes max_client_ver = 8;
    {::_pbi::TcParser::FastBS1,
     {66, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.max_client_ver_)}},
    // uint64 max_time_diff = 9;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint64_t, offsetof(Config, _impl_.max_time_diff_), 63>(),
     {72, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.max_time_diff_)}},
    // repeated bytes short_ids = 10;
    {::_pbi::TcParser::FastBR1,
     {82, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.short_ids_)}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    // string Fingerprint = 21;
    {::_pbi::TcParser::FastUS2,
     {426, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.fingerprint_)}},
    // string server_name = 22;
    {::_pbi::TcParser::FastUS2,
     {434, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.server_name_)}},
    // bytes public_key = 23;
    {::_pbi::TcParser::FastBS2,
     {442, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.public_key_)}},
    // bytes short_id = 24;
    {::_pbi::TcParser::FastBS2,
     {450, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.short_id_)}},
    // string spider_x = 25;
    {::_pbi::TcParser::FastUS2,
     {458, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.spider_x_)}},
    // repeated int64 spider_y = 26;
    {::_pbi::TcParser::FastV64P2,
     {466, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.spider_y_)}},
    // string master_key_log = 27;
    {::_pbi::TcParser::FastUS2,
     {474, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.master_key_log_)}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // bool show = 1;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.show_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBool)},
    // string dest = 2;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.dest_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string type = 3;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.type_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // uint64 xver = 4;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.xver_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt64)},
    // repeated string server_names = 5;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.server_names_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kUtf8String | ::_fl::kRepSString)},
    // bytes private_key = 6;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.private_key_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
    // bytes min_client_ver = 7;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.min_client_ver_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
    // bytes max_client_ver = 8;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.max_client_ver_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
    // uint64 max_time_diff = 9;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.max_time_diff_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt64)},
    // repeated bytes short_ids = 10;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.short_ids_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kBytes | ::_fl::kRepSString)},
    // string Fingerprint = 21;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.fingerprint_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string server_name = 22;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.server_name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // bytes public_key = 23;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.public_key_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
    // bytes short_id = 24;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.short_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
    // string spider_x = 25;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.spider_x_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // repeated int64 spider_y = 26;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.spider_y_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kPackedInt64)},
    // string master_key_log = 27;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.master_key_log_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\46\0\4\4\0\14\0\0\0\0\0\13\13\0\0\10\0\16\0\0\0\0\0\0"
    "xray.transport.internet.reality.Config"
    "dest"
    "type"
    "server_names"
    "Fingerprint"
    "server_name"
    "spider_x"
    "master_key_log"
  }},
};

::uint8_t* Config::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xray.transport.internet.reality.Config)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // bool show = 1;
  if (this->_internal_show() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        1, this->_internal_show(), target);
  }

  // string dest = 2;
  if (!this->_internal_dest().empty()) {
    const std::string& _s = this->_internal_dest();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.transport.internet.reality.Config.dest");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // string type = 3;
  if (!this->_internal_type().empty()) {
    const std::string& _s = this->_internal_type();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.transport.internet.reality.Config.type");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  // uint64 xver = 4;
  if (this->_internal_xver() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        4, this->_internal_xver(), target);
  }

  // repeated string server_names = 5;
  for (int i = 0, n = this->_internal_server_names_size(); i < n; ++i) {
    const auto& s = this->_internal_server_names().Get(i);
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        s.data(), static_cast<int>(s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.transport.internet.reality.Config.server_names");
    target = stream->WriteString(5, s, target);
  }

  // bytes private_key = 6;
  if (!this->_internal_private_key().empty()) {
    const std::string& _s = this->_internal_private_key();
    target = stream->WriteBytesMaybeAliased(6, _s, target);
  }

  // bytes min_client_ver = 7;
  if (!this->_internal_min_client_ver().empty()) {
    const std::string& _s = this->_internal_min_client_ver();
    target = stream->WriteBytesMaybeAliased(7, _s, target);
  }

  // bytes max_client_ver = 8;
  if (!this->_internal_max_client_ver().empty()) {
    const std::string& _s = this->_internal_max_client_ver();
    target = stream->WriteBytesMaybeAliased(8, _s, target);
  }

  // uint64 max_time_diff = 9;
  if (this->_internal_max_time_diff() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        9, this->_internal_max_time_diff(), target);
  }

  // repeated bytes short_ids = 10;
  for (int i = 0, n = this->_internal_short_ids_size(); i < n; ++i) {
    const auto& s = this->_internal_short_ids().Get(i);
    target = stream->WriteBytes(10, s, target);
  }

  // string Fingerprint = 21;
  if (!this->_internal_fingerprint().empty()) {
    const std::string& _s = this->_internal_fingerprint();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.transport.internet.reality.Config.Fingerprint");
    target = stream->WriteStringMaybeAliased(21, _s, target);
  }

  // string server_name = 22;
  if (!this->_internal_server_name().empty()) {
    const std::string& _s = this->_internal_server_name();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.transport.internet.reality.Config.server_name");
    target = stream->WriteStringMaybeAliased(22, _s, target);
  }

  // bytes public_key = 23;
  if (!this->_internal_public_key().empty()) {
    const std::string& _s = this->_internal_public_key();
    target = stream->WriteBytesMaybeAliased(23, _s, target);
  }

  // bytes short_id = 24;
  if (!this->_internal_short_id().empty()) {
    const std::string& _s = this->_internal_short_id();
    target = stream->WriteBytesMaybeAliased(24, _s, target);
  }

  // string spider_x = 25;
  if (!this->_internal_spider_x().empty()) {
    const std::string& _s = this->_internal_spider_x();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.transport.internet.reality.Config.spider_x");
    target = stream->WriteStringMaybeAliased(25, _s, target);
  }

  // repeated int64 spider_y = 26;
  {
    int byte_size = _impl_._spider_y_cached_byte_size_.Get();
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(
          26, _internal_spider_y(), byte_size, target);
    }
  }

  // string master_key_log = 27;
  if (!this->_internal_master_key_log().empty()) {
    const std::string& _s = this->_internal_master_key_log();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.transport.internet.reality.Config.master_key_log");
    target = stream->WriteStringMaybeAliased(27, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xray.transport.internet.reality.Config)
  return target;
}

::size_t Config::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xray.transport.internet.reality.Config)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string server_names = 5;
  total_size += 1 * ::google::protobuf::internal::FromIntSize(_internal_server_names().size());
  for (int i = 0, n = _internal_server_names().size(); i < n; ++i) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
        _internal_server_names().Get(i));
  }
  // repeated bytes short_ids = 10;
  total_size += 1 * ::google::protobuf::internal::FromIntSize(_internal_short_ids().size());
  for (int i = 0, n = _internal_short_ids().size(); i < n; ++i) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
        _internal_short_ids().Get(i));
  }
  // repeated int64 spider_y = 26;
  {
    std::size_t data_size = ::_pbi::WireFormatLite::Int64Size(
        this->_internal_spider_y())
    ;
    _impl_._spider_y_cached_byte_size_.Set(::_pbi::ToCachedSize(data_size));
    std::size_t tag_size = data_size == 0
        ? 0
        : 2 + ::_pbi::WireFormatLite::Int32Size(
                            static_cast<int32_t>(data_size))
    ;
    total_size += tag_size + data_size;
  }
  // string dest = 2;
  if (!this->_internal_dest().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_dest());
  }

  // string type = 3;
  if (!this->_internal_type().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_type());
  }

  // bytes private_key = 6;
  if (!this->_internal_private_key().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_private_key());
  }

  // bytes min_client_ver = 7;
  if (!this->_internal_min_client_ver().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_min_client_ver());
  }

  // bytes max_client_ver = 8;
  if (!this->_internal_max_client_ver().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_max_client_ver());
  }

  // string Fingerprint = 21;
  if (!this->_internal_fingerprint().empty()) {
    total_size += 2 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_fingerprint());
  }

  // string server_name = 22;
  if (!this->_internal_server_name().empty()) {
    total_size += 2 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_server_name());
  }

  // bytes public_key = 23;
  if (!this->_internal_public_key().empty()) {
    total_size += 2 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_public_key());
  }

  // bytes short_id = 24;
  if (!this->_internal_short_id().empty()) {
    total_size += 2 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_short_id());
  }

  // string spider_x = 25;
  if (!this->_internal_spider_x().empty()) {
    total_size += 2 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_spider_x());
  }

  // string master_key_log = 27;
  if (!this->_internal_master_key_log().empty()) {
    total_size += 2 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_master_key_log());
  }

  // uint64 xver = 4;
  if (this->_internal_xver() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_xver());
  }

  // uint64 max_time_diff = 9;
  if (this->_internal_max_time_diff() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_max_time_diff());
  }

  // bool show = 1;
  if (this->_internal_show() != 0) {
    total_size += 2;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Config::_class_data_ = {
    Config::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Config::GetClassData() const {
  return &_class_data_;
}

void Config::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Config*>(&to_msg);
  auto& from = static_cast<const Config&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:xray.transport.internet.reality.Config)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_server_names()->MergeFrom(from._internal_server_names());
  _this->_internal_mutable_short_ids()->MergeFrom(from._internal_short_ids());
  _this->_internal_mutable_spider_y()->MergeFrom(from._internal_spider_y());
  if (!from._internal_dest().empty()) {
    _this->_internal_set_dest(from._internal_dest());
  }
  if (!from._internal_type().empty()) {
    _this->_internal_set_type(from._internal_type());
  }
  if (!from._internal_private_key().empty()) {
    _this->_internal_set_private_key(from._internal_private_key());
  }
  if (!from._internal_min_client_ver().empty()) {
    _this->_internal_set_min_client_ver(from._internal_min_client_ver());
  }
  if (!from._internal_max_client_ver().empty()) {
    _this->_internal_set_max_client_ver(from._internal_max_client_ver());
  }
  if (!from._internal_fingerprint().empty()) {
    _this->_internal_set_fingerprint(from._internal_fingerprint());
  }
  if (!from._internal_server_name().empty()) {
    _this->_internal_set_server_name(from._internal_server_name());
  }
  if (!from._internal_public_key().empty()) {
    _this->_internal_set_public_key(from._internal_public_key());
  }
  if (!from._internal_short_id().empty()) {
    _this->_internal_set_short_id(from._internal_short_id());
  }
  if (!from._internal_spider_x().empty()) {
    _this->_internal_set_spider_x(from._internal_spider_x());
  }
  if (!from._internal_master_key_log().empty()) {
    _this->_internal_set_master_key_log(from._internal_master_key_log());
  }
  if (from._internal_xver() != 0) {
    _this->_internal_set_xver(from._internal_xver());
  }
  if (from._internal_max_time_diff() != 0) {
    _this->_internal_set_max_time_diff(from._internal_max_time_diff());
  }
  if (from._internal_show() != 0) {
    _this->_internal_set_show(from._internal_show());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Config::CopyFrom(const Config& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xray.transport.internet.reality.Config)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Config::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Config::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Config::InternalSwap(Config* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.server_names_.InternalSwap(&other->_impl_.server_names_);
  _impl_.short_ids_.InternalSwap(&other->_impl_.short_ids_);
  _impl_.spider_y_.InternalSwap(&other->_impl_.spider_y_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.dest_, &other->_impl_.dest_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.type_, &other->_impl_.type_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.private_key_, &other->_impl_.private_key_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.min_client_ver_, &other->_impl_.min_client_ver_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.max_client_ver_, &other->_impl_.max_client_ver_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.fingerprint_, &other->_impl_.fingerprint_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.server_name_, &other->_impl_.server_name_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.public_key_, &other->_impl_.public_key_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.short_id_, &other->_impl_.short_id_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.spider_x_, &other->_impl_.spider_x_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.master_key_log_, &other->_impl_.master_key_log_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Config, _impl_.show_)
      + sizeof(Config::_impl_.show_)
      - PROTOBUF_FIELD_OFFSET(Config, _impl_.xver_)>(
          reinterpret_cast<char*>(&_impl_.xver_),
          reinterpret_cast<char*>(&other->_impl_.xver_));
}

::google::protobuf::Metadata Config::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_transport_2finternet_2freality_2fconfig_2eproto_getter, &descriptor_table_transport_2finternet_2freality_2fconfig_2eproto_once,
      file_level_metadata_transport_2finternet_2freality_2fconfig_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace reality
}  // namespace internet
}  // namespace transport
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"