// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: app/commander/config.proto
// Protobuf C++ Version: 4.25.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_app_2fcommander_2fconfig_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_app_2fcommander_2fconfig_2eproto_2epb_2eh

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
#include "google/protobuf/generated_message_bases.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "common/serial/typed_message.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_app_2fcommander_2fconfig_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_app_2fcommander_2fconfig_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_app_2fcommander_2fconfig_2eproto;
namespace xray {
namespace app {
namespace commander {
class Config;
struct ConfigDefaultTypeInternal;
extern ConfigDefaultTypeInternal _Config_default_instance_;
class ReflectionConfig;
struct ReflectionConfigDefaultTypeInternal;
extern ReflectionConfigDefaultTypeInternal _ReflectionConfig_default_instance_;
}  // namespace commander
}  // namespace app
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace xray {
namespace app {
namespace commander {

// ===================================================================


// -------------------------------------------------------------------

class ReflectionConfig final :
    public ::google::protobuf::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:xray.app.commander.ReflectionConfig) */ {
 public:
  inline ReflectionConfig() : ReflectionConfig(nullptr) {}
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR ReflectionConfig(::google::protobuf::internal::ConstantInitialized);

  inline ReflectionConfig(const ReflectionConfig& from)
      : ReflectionConfig(nullptr, from) {}
  ReflectionConfig(ReflectionConfig&& from) noexcept
    : ReflectionConfig() {
    *this = ::std::move(from);
  }

  inline ReflectionConfig& operator=(const ReflectionConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline ReflectionConfig& operator=(ReflectionConfig&& from) noexcept {
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
  static const ReflectionConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const ReflectionConfig* internal_default_instance() {
    return reinterpret_cast<const ReflectionConfig*>(
               &_ReflectionConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ReflectionConfig& a, ReflectionConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(ReflectionConfig* other) {
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
  void UnsafeArenaSwap(ReflectionConfig* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ReflectionConfig* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ReflectionConfig>(arena);
  }
  using ::google::protobuf::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const ReflectionConfig& from) {
    ::google::protobuf::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::google::protobuf::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const ReflectionConfig& from) {
    ::google::protobuf::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "xray.app.commander.ReflectionConfig";
  }
  protected:
  explicit ReflectionConfig(::google::protobuf::Arena* arena);
  ReflectionConfig(::google::protobuf::Arena* arena, const ReflectionConfig& from);
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:xray.app.commander.ReflectionConfig)
 private:
  class _Internal;

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
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  friend struct ::TableStruct_app_2fcommander_2fconfig_2eproto;
};// -------------------------------------------------------------------

class Config final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:xray.app.commander.Config) */ {
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
    return "xray.app.commander.Config";
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
    kServiceFieldNumber = 2,
    kTagFieldNumber = 1,
  };
  // repeated .xray.common.serial.TypedMessage service = 2;
  int service_size() const;
  private:
  int _internal_service_size() const;

  public:
  void clear_service() ;
  ::xray::common::serial::TypedMessage* mutable_service(int index);
  ::google::protobuf::RepeatedPtrField< ::xray::common::serial::TypedMessage >*
      mutable_service();
  private:
  const ::google::protobuf::RepeatedPtrField<::xray::common::serial::TypedMessage>& _internal_service() const;
  ::google::protobuf::RepeatedPtrField<::xray::common::serial::TypedMessage>* _internal_mutable_service();
  public:
  const ::xray::common::serial::TypedMessage& service(int index) const;
  ::xray::common::serial::TypedMessage* add_service();
  const ::google::protobuf::RepeatedPtrField< ::xray::common::serial::TypedMessage >&
      service() const;
  // string tag = 1;
  void clear_tag() ;
  const std::string& tag() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_tag(Arg_&& arg, Args_... args);
  std::string* mutable_tag();
  PROTOBUF_NODISCARD std::string* release_tag();
  void set_allocated_tag(std::string* value);

  private:
  const std::string& _internal_tag() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_tag(
      const std::string& value);
  std::string* _internal_mutable_tag();

  public:
  // @@protoc_insertion_point(class_scope:xray.app.commander.Config)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 1,
      37, 2>
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
    ::google::protobuf::RepeatedPtrField< ::xray::common::serial::TypedMessage > service_;
    ::google::protobuf::internal::ArenaStringPtr tag_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_app_2fcommander_2fconfig_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Config

// string tag = 1;
inline void Config::clear_tag() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.tag_.ClearToEmpty();
}
inline const std::string& Config::tag() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.app.commander.Config.tag)
  return _internal_tag();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Config::set_tag(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.tag_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:xray.app.commander.Config.tag)
}
inline std::string* Config::mutable_tag() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_tag();
  // @@protoc_insertion_point(field_mutable:xray.app.commander.Config.tag)
  return _s;
}
inline const std::string& Config::_internal_tag() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.tag_.Get();
}
inline void Config::_internal_set_tag(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.tag_.Set(value, GetArena());
}
inline std::string* Config::_internal_mutable_tag() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.tag_.Mutable( GetArena());
}
inline std::string* Config::release_tag() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:xray.app.commander.Config.tag)
  return _impl_.tag_.Release();
}
inline void Config::set_allocated_tag(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.tag_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.tag_.IsDefault()) {
          _impl_.tag_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:xray.app.commander.Config.tag)
}

// repeated .xray.common.serial.TypedMessage service = 2;
inline int Config::_internal_service_size() const {
  return _internal_service().size();
}
inline int Config::service_size() const {
  return _internal_service_size();
}
inline ::xray::common::serial::TypedMessage* Config::mutable_service(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:xray.app.commander.Config.service)
  return _internal_mutable_service()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::xray::common::serial::TypedMessage>* Config::mutable_service()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:xray.app.commander.Config.service)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_service();
}
inline const ::xray::common::serial::TypedMessage& Config::service(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.app.commander.Config.service)
  return _internal_service().Get(index);
}
inline ::xray::common::serial::TypedMessage* Config::add_service() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::xray::common::serial::TypedMessage* _add = _internal_mutable_service()->Add();
  // @@protoc_insertion_point(field_add:xray.app.commander.Config.service)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::xray::common::serial::TypedMessage>& Config::service() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:xray.app.commander.Config.service)
  return _internal_service();
}
inline const ::google::protobuf::RepeatedPtrField<::xray::common::serial::TypedMessage>&
Config::_internal_service() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.service_;
}
inline ::google::protobuf::RepeatedPtrField<::xray::common::serial::TypedMessage>*
Config::_internal_mutable_service() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.service_;
}

// -------------------------------------------------------------------

// ReflectionConfig

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace commander
}  // namespace app
}  // namespace xray


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_app_2fcommander_2fconfig_2eproto_2epb_2eh