// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: app/observatory/burst/config.proto
// Protobuf C++ Version: 4.25.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_app_2fobservatory_2fburst_2fconfig_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_app_2fobservatory_2fburst_2fconfig_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_app_2fobservatory_2fburst_2fconfig_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_app_2fobservatory_2fburst_2fconfig_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_app_2fobservatory_2fburst_2fconfig_2eproto;
namespace xray {
namespace core {
namespace app {
namespace observatory {
namespace burst {
class Config;
struct ConfigDefaultTypeInternal;
extern ConfigDefaultTypeInternal _Config_default_instance_;
class HealthPingConfig;
struct HealthPingConfigDefaultTypeInternal;
extern HealthPingConfigDefaultTypeInternal _HealthPingConfig_default_instance_;
}  // namespace burst
}  // namespace observatory
}  // namespace app
}  // namespace core
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace xray {
namespace core {
namespace app {
namespace observatory {
namespace burst {

// ===================================================================


// -------------------------------------------------------------------

class HealthPingConfig final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:xray.core.app.observatory.burst.HealthPingConfig) */ {
 public:
  inline HealthPingConfig() : HealthPingConfig(nullptr) {}
  ~HealthPingConfig() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR HealthPingConfig(::google::protobuf::internal::ConstantInitialized);

  inline HealthPingConfig(const HealthPingConfig& from)
      : HealthPingConfig(nullptr, from) {}
  HealthPingConfig(HealthPingConfig&& from) noexcept
    : HealthPingConfig() {
    *this = ::std::move(from);
  }

  inline HealthPingConfig& operator=(const HealthPingConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline HealthPingConfig& operator=(HealthPingConfig&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const HealthPingConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const HealthPingConfig* internal_default_instance() {
    return reinterpret_cast<const HealthPingConfig*>(
               &_HealthPingConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(HealthPingConfig& a, HealthPingConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(HealthPingConfig* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HealthPingConfig* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HealthPingConfig* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HealthPingConfig>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const HealthPingConfig& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const HealthPingConfig& from) {
    HealthPingConfig::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(HealthPingConfig* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "xray.core.app.observatory.burst.HealthPingConfig";
  }
  protected:
  explicit HealthPingConfig(::google::protobuf::Arena* arena);
  HealthPingConfig(::google::protobuf::Arena* arena, const HealthPingConfig& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDestinationFieldNumber = 1,
    kConnectivityFieldNumber = 2,
    kIntervalFieldNumber = 3,
    kTimeoutFieldNumber = 5,
    kSamplingCountFieldNumber = 4,
  };
  // string destination = 1;
  void clear_destination() ;
  const std::string& destination() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_destination(Arg_&& arg, Args_... args);
  std::string* mutable_destination();
  PROTOBUF_NODISCARD std::string* release_destination();
  void set_allocated_destination(std::string* value);

  private:
  const std::string& _internal_destination() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_destination(
      const std::string& value);
  std::string* _internal_mutable_destination();

  public:
  // string connectivity = 2;
  void clear_connectivity() ;
  const std::string& connectivity() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_connectivity(Arg_&& arg, Args_... args);
  std::string* mutable_connectivity();
  PROTOBUF_NODISCARD std::string* release_connectivity();
  void set_allocated_connectivity(std::string* value);

  private:
  const std::string& _internal_connectivity() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_connectivity(
      const std::string& value);
  std::string* _internal_mutable_connectivity();

  public:
  // int64 interval = 3;
  void clear_interval() ;
  ::int64_t interval() const;
  void set_interval(::int64_t value);

  private:
  ::int64_t _internal_interval() const;
  void _internal_set_interval(::int64_t value);

  public:
  // int64 timeout = 5;
  void clear_timeout() ;
  ::int64_t timeout() const;
  void set_timeout(::int64_t value);

  private:
  ::int64_t _internal_timeout() const;
  void _internal_set_timeout(::int64_t value);

  public:
  // int32 samplingCount = 4;
  void clear_samplingcount() ;
  ::int32_t samplingcount() const;
  void set_samplingcount(::int32_t value);

  private:
  ::int32_t _internal_samplingcount() const;
  void _internal_set_samplingcount(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:xray.core.app.observatory.burst.HealthPingConfig)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 5, 0,
      80, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr destination_;
    ::google::protobuf::internal::ArenaStringPtr connectivity_;
    ::int64_t interval_;
    ::int64_t timeout_;
    ::int32_t samplingcount_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_app_2fobservatory_2fburst_2fconfig_2eproto;
};// -------------------------------------------------------------------

class Config final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:xray.core.app.observatory.burst.Config) */ {
 public:
  inline Config() : Config(nullptr) {}
  ~Config() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Config(::google::protobuf::internal::ConstantInitialized);

  inline Config(const Config& from)
      : Config(nullptr, from) {}
  Config(Config&& from) noexcept
    : Config() {
    *this = ::std::move(from);
  }

  inline Config& operator=(const Config& from) {
    CopyFrom(from);
    return *this;
  }
  inline Config& operator=(Config&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Config& default_instance() {
    return *internal_default_instance();
  }
  static inline const Config* internal_default_instance() {
    return reinterpret_cast<const Config*>(
               &_Config_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Config& a, Config& b) {
    a.Swap(&b);
  }
  inline void Swap(Config* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Config* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Config* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Config>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Config& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Config& from) {
    Config::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Config* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "xray.core.app.observatory.burst.Config";
  }
  protected:
  explicit Config(::google::protobuf::Arena* arena);
  Config(::google::protobuf::Arena* arena, const Config& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSubjectSelectorFieldNumber = 2,
    kPingConfigFieldNumber = 3,
  };
  // repeated string subject_selector = 2;
  int subject_selector_size() const;
  private:
  int _internal_subject_selector_size() const;

  public:
  void clear_subject_selector() ;
  const std::string& subject_selector(int index) const;
  std::string* mutable_subject_selector(int index);
  void set_subject_selector(int index, const std::string& value);
  void set_subject_selector(int index, std::string&& value);
  void set_subject_selector(int index, const char* value);
  void set_subject_selector(int index, const char* value, std::size_t size);
  void set_subject_selector(int index, absl::string_view value);
  std::string* add_subject_selector();
  void add_subject_selector(const std::string& value);
  void add_subject_selector(std::string&& value);
  void add_subject_selector(const char* value);
  void add_subject_selector(const char* value, std::size_t size);
  void add_subject_selector(absl::string_view value);
  const ::google::protobuf::RepeatedPtrField<std::string>& subject_selector() const;
  ::google::protobuf::RepeatedPtrField<std::string>* mutable_subject_selector();

  private:
  const ::google::protobuf::RepeatedPtrField<std::string>& _internal_subject_selector() const;
  ::google::protobuf::RepeatedPtrField<std::string>* _internal_mutable_subject_selector();

  public:
  // .xray.core.app.observatory.burst.HealthPingConfig ping_config = 3;
  bool has_ping_config() const;
  void clear_ping_config() ;
  const ::xray::core::app::observatory::burst::HealthPingConfig& ping_config() const;
  PROTOBUF_NODISCARD ::xray::core::app::observatory::burst::HealthPingConfig* release_ping_config();
  ::xray::core::app::observatory::burst::HealthPingConfig* mutable_ping_config();
  void set_allocated_ping_config(::xray::core::app::observatory::burst::HealthPingConfig* value);
  void unsafe_arena_set_allocated_ping_config(::xray::core::app::observatory::burst::HealthPingConfig* value);
  ::xray::core::app::observatory::burst::HealthPingConfig* unsafe_arena_release_ping_config();

  private:
  const ::xray::core::app::observatory::burst::HealthPingConfig& _internal_ping_config() const;
  ::xray::core::app::observatory::burst::HealthPingConfig* _internal_mutable_ping_config();

  public:
  // @@protoc_insertion_point(class_scope:xray.core.app.observatory.burst.Config)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 1,
      63, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::RepeatedPtrField<std::string> subject_selector_;
    ::xray::core::app::observatory::burst::HealthPingConfig* ping_config_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_app_2fobservatory_2fburst_2fconfig_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Config

// repeated string subject_selector = 2;
inline int Config::_internal_subject_selector_size() const {
  return _internal_subject_selector().size();
}
inline int Config::subject_selector_size() const {
  return _internal_subject_selector_size();
}
inline void Config::clear_subject_selector() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.subject_selector_.Clear();
}
inline std::string* Config::add_subject_selector()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  std::string* _s = _internal_mutable_subject_selector()->Add();
  // @@protoc_insertion_point(field_add_mutable:xray.core.app.observatory.burst.Config.subject_selector)
  return _s;
}
inline const std::string& Config::subject_selector(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.core.app.observatory.burst.Config.subject_selector)
  return _internal_subject_selector().Get(index);
}
inline std::string* Config::mutable_subject_selector(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:xray.core.app.observatory.burst.Config.subject_selector)
  return _internal_mutable_subject_selector()->Mutable(index);
}
inline void Config::set_subject_selector(int index, const std::string& value) {
  _internal_mutable_subject_selector()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:xray.core.app.observatory.burst.Config.subject_selector)
}
inline void Config::set_subject_selector(int index, std::string&& value) {
  _internal_mutable_subject_selector()->Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:xray.core.app.observatory.burst.Config.subject_selector)
}
inline void Config::set_subject_selector(int index, const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_subject_selector()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:xray.core.app.observatory.burst.Config.subject_selector)
}
inline void Config::set_subject_selector(int index, const char* value,
                              std::size_t size) {
  _internal_mutable_subject_selector()->Mutable(index)->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:xray.core.app.observatory.burst.Config.subject_selector)
}
inline void Config::set_subject_selector(int index, absl::string_view value) {
  _internal_mutable_subject_selector()->Mutable(index)->assign(value.data(),
                                                     value.size());
  // @@protoc_insertion_point(field_set_string_piece:xray.core.app.observatory.burst.Config.subject_selector)
}
inline void Config::add_subject_selector(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_subject_selector()->Add()->assign(value);
  // @@protoc_insertion_point(field_add:xray.core.app.observatory.burst.Config.subject_selector)
}
inline void Config::add_subject_selector(std::string&& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_subject_selector()->Add(std::move(value));
  // @@protoc_insertion_point(field_add:xray.core.app.observatory.burst.Config.subject_selector)
}
inline void Config::add_subject_selector(const char* value) {
  ABSL_DCHECK(value != nullptr);
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_subject_selector()->Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:xray.core.app.observatory.burst.Config.subject_selector)
}
inline void Config::add_subject_selector(const char* value, std::size_t size) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_subject_selector()->Add()->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:xray.core.app.observatory.burst.Config.subject_selector)
}
inline void Config::add_subject_selector(absl::string_view value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_subject_selector()->Add()->assign(value.data(), value.size());
  // @@protoc_insertion_point(field_add_string_piece:xray.core.app.observatory.burst.Config.subject_selector)
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
Config::subject_selector() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:xray.core.app.observatory.burst.Config.subject_selector)
  return _internal_subject_selector();
}
inline ::google::protobuf::RepeatedPtrField<std::string>*
Config::mutable_subject_selector() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:xray.core.app.observatory.burst.Config.subject_selector)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_subject_selector();
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
Config::_internal_subject_selector() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.subject_selector_;
}
inline ::google::protobuf::RepeatedPtrField<std::string>*
Config::_internal_mutable_subject_selector() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.subject_selector_;
}

// .xray.core.app.observatory.burst.HealthPingConfig ping_config = 3;
inline bool Config::has_ping_config() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.ping_config_ != nullptr);
  return value;
}
inline void Config::clear_ping_config() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (_impl_.ping_config_ != nullptr) _impl_.ping_config_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const ::xray::core::app::observatory::burst::HealthPingConfig& Config::_internal_ping_config() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::xray::core::app::observatory::burst::HealthPingConfig* p = _impl_.ping_config_;
  return p != nullptr ? *p : reinterpret_cast<const ::xray::core::app::observatory::burst::HealthPingConfig&>(::xray::core::app::observatory::burst::_HealthPingConfig_default_instance_);
}
inline const ::xray::core::app::observatory::burst::HealthPingConfig& Config::ping_config() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.core.app.observatory.burst.Config.ping_config)
  return _internal_ping_config();
}
inline void Config::unsafe_arena_set_allocated_ping_config(::xray::core::app::observatory::burst::HealthPingConfig* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.ping_config_);
  }
  _impl_.ping_config_ = reinterpret_cast<::xray::core::app::observatory::burst::HealthPingConfig*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:xray.core.app.observatory.burst.Config.ping_config)
}
inline ::xray::core::app::observatory::burst::HealthPingConfig* Config::release_ping_config() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::xray::core::app::observatory::burst::HealthPingConfig* released = _impl_.ping_config_;
  _impl_.ping_config_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
  released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  if (GetArena() == nullptr) {
    delete old;
  }
#else   // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArena() != nullptr) {
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return released;
}
inline ::xray::core::app::observatory::burst::HealthPingConfig* Config::unsafe_arena_release_ping_config() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:xray.core.app.observatory.burst.Config.ping_config)

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::xray::core::app::observatory::burst::HealthPingConfig* temp = _impl_.ping_config_;
  _impl_.ping_config_ = nullptr;
  return temp;
}
inline ::xray::core::app::observatory::burst::HealthPingConfig* Config::_internal_mutable_ping_config() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.ping_config_ == nullptr) {
    auto* p = CreateMaybeMessage<::xray::core::app::observatory::burst::HealthPingConfig>(GetArena());
    _impl_.ping_config_ = reinterpret_cast<::xray::core::app::observatory::burst::HealthPingConfig*>(p);
  }
  return _impl_.ping_config_;
}
inline ::xray::core::app::observatory::burst::HealthPingConfig* Config::mutable_ping_config() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::xray::core::app::observatory::burst::HealthPingConfig* _msg = _internal_mutable_ping_config();
  // @@protoc_insertion_point(field_mutable:xray.core.app.observatory.burst.Config.ping_config)
  return _msg;
}
inline void Config::set_allocated_ping_config(::xray::core::app::observatory::burst::HealthPingConfig* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::xray::core::app::observatory::burst::HealthPingConfig*>(_impl_.ping_config_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena = reinterpret_cast<::xray::core::app::observatory::burst::HealthPingConfig*>(value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }

  _impl_.ping_config_ = reinterpret_cast<::xray::core::app::observatory::burst::HealthPingConfig*>(value);
  // @@protoc_insertion_point(field_set_allocated:xray.core.app.observatory.burst.Config.ping_config)
}

// -------------------------------------------------------------------

// HealthPingConfig

// string destination = 1;
inline void HealthPingConfig::clear_destination() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.destination_.ClearToEmpty();
}
inline const std::string& HealthPingConfig::destination() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.core.app.observatory.burst.HealthPingConfig.destination)
  return _internal_destination();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void HealthPingConfig::set_destination(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.destination_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:xray.core.app.observatory.burst.HealthPingConfig.destination)
}
inline std::string* HealthPingConfig::mutable_destination() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_destination();
  // @@protoc_insertion_point(field_mutable:xray.core.app.observatory.burst.HealthPingConfig.destination)
  return _s;
}
inline const std::string& HealthPingConfig::_internal_destination() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.destination_.Get();
}
inline void HealthPingConfig::_internal_set_destination(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.destination_.Set(value, GetArena());
}
inline std::string* HealthPingConfig::_internal_mutable_destination() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.destination_.Mutable( GetArena());
}
inline std::string* HealthPingConfig::release_destination() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:xray.core.app.observatory.burst.HealthPingConfig.destination)
  return _impl_.destination_.Release();
}
inline void HealthPingConfig::set_allocated_destination(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.destination_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.destination_.IsDefault()) {
          _impl_.destination_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:xray.core.app.observatory.burst.HealthPingConfig.destination)
}

// string connectivity = 2;
inline void HealthPingConfig::clear_connectivity() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.connectivity_.ClearToEmpty();
}
inline const std::string& HealthPingConfig::connectivity() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.core.app.observatory.burst.HealthPingConfig.connectivity)
  return _internal_connectivity();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void HealthPingConfig::set_connectivity(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.connectivity_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:xray.core.app.observatory.burst.HealthPingConfig.connectivity)
}
inline std::string* HealthPingConfig::mutable_connectivity() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_connectivity();
  // @@protoc_insertion_point(field_mutable:xray.core.app.observatory.burst.HealthPingConfig.connectivity)
  return _s;
}
inline const std::string& HealthPingConfig::_internal_connectivity() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.connectivity_.Get();
}
inline void HealthPingConfig::_internal_set_connectivity(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.connectivity_.Set(value, GetArena());
}
inline std::string* HealthPingConfig::_internal_mutable_connectivity() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.connectivity_.Mutable( GetArena());
}
inline std::string* HealthPingConfig::release_connectivity() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:xray.core.app.observatory.burst.HealthPingConfig.connectivity)
  return _impl_.connectivity_.Release();
}
inline void HealthPingConfig::set_allocated_connectivity(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.connectivity_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.connectivity_.IsDefault()) {
          _impl_.connectivity_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:xray.core.app.observatory.burst.HealthPingConfig.connectivity)
}

// int64 interval = 3;
inline void HealthPingConfig::clear_interval() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.interval_ = ::int64_t{0};
}
inline ::int64_t HealthPingConfig::interval() const {
  // @@protoc_insertion_point(field_get:xray.core.app.observatory.burst.HealthPingConfig.interval)
  return _internal_interval();
}
inline void HealthPingConfig::set_interval(::int64_t value) {
  _internal_set_interval(value);
  // @@protoc_insertion_point(field_set:xray.core.app.observatory.burst.HealthPingConfig.interval)
}
inline ::int64_t HealthPingConfig::_internal_interval() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.interval_;
}
inline void HealthPingConfig::_internal_set_interval(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.interval_ = value;
}

// int32 samplingCount = 4;
inline void HealthPingConfig::clear_samplingcount() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.samplingcount_ = 0;
}
inline ::int32_t HealthPingConfig::samplingcount() const {
  // @@protoc_insertion_point(field_get:xray.core.app.observatory.burst.HealthPingConfig.samplingCount)
  return _internal_samplingcount();
}
inline void HealthPingConfig::set_samplingcount(::int32_t value) {
  _internal_set_samplingcount(value);
  // @@protoc_insertion_point(field_set:xray.core.app.observatory.burst.HealthPingConfig.samplingCount)
}
inline ::int32_t HealthPingConfig::_internal_samplingcount() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.samplingcount_;
}
inline void HealthPingConfig::_internal_set_samplingcount(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.samplingcount_ = value;
}

// int64 timeout = 5;
inline void HealthPingConfig::clear_timeout() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.timeout_ = ::int64_t{0};
}
inline ::int64_t HealthPingConfig::timeout() const {
  // @@protoc_insertion_point(field_get:xray.core.app.observatory.burst.HealthPingConfig.timeout)
  return _internal_timeout();
}
inline void HealthPingConfig::set_timeout(::int64_t value) {
  _internal_set_timeout(value);
  // @@protoc_insertion_point(field_set:xray.core.app.observatory.burst.HealthPingConfig.timeout)
}
inline ::int64_t HealthPingConfig::_internal_timeout() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.timeout_;
}
inline void HealthPingConfig::_internal_set_timeout(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.timeout_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace burst
}  // namespace observatory
}  // namespace app
}  // namespace core
}  // namespace xray


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_app_2fobservatory_2fburst_2fconfig_2eproto_2epb_2eh