// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proxy/dokodemo/config.proto
// Protobuf C++ Version: 4.25.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_proxy_2fdokodemo_2fconfig_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_proxy_2fdokodemo_2fconfig_2eproto_2epb_2eh

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
#include "common/net/address.pb.h"
#include "common/net/network.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_proxy_2fdokodemo_2fconfig_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_proxy_2fdokodemo_2fconfig_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_proxy_2fdokodemo_2fconfig_2eproto;
namespace xray {
namespace proxy {
namespace dokodemo {
class Config;
struct ConfigDefaultTypeInternal;
extern ConfigDefaultTypeInternal _Config_default_instance_;
}  // namespace dokodemo
}  // namespace proxy
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace xray {
namespace proxy {
namespace dokodemo {

// ===================================================================


// -------------------------------------------------------------------

class Config final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:xray.proxy.dokodemo.Config) */ {
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
    return "xray.proxy.dokodemo.Config";
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
    kNetworksFieldNumber = 7,
    kAddressFieldNumber = 1,
    kNetworkListFieldNumber = 3,
    kPortFieldNumber = 2,
    kTimeoutFieldNumber = 4,
    kFollowRedirectFieldNumber = 5,
    kUserLevelFieldNumber = 6,
  };
  // repeated .xray.common.net.Network networks = 7;
  int networks_size() const;
  private:
  int _internal_networks_size() const;

  public:
  void clear_networks() ;
  public:
  ::xray::common::net::Network networks(int index) const;
  void set_networks(int index, ::xray::common::net::Network value);
  void add_networks(::xray::common::net::Network value);
  const ::google::protobuf::RepeatedField<int>& networks() const;
  ::google::protobuf::RepeatedField<int>* mutable_networks();

  private:
  const ::google::protobuf::RepeatedField<int>& _internal_networks() const;
  ::google::protobuf::RepeatedField<int>* _internal_mutable_networks();

  public:
  // .xray.common.net.IPOrDomain address = 1;
  bool has_address() const;
  void clear_address() ;
  const ::xray::common::net::IPOrDomain& address() const;
  PROTOBUF_NODISCARD ::xray::common::net::IPOrDomain* release_address();
  ::xray::common::net::IPOrDomain* mutable_address();
  void set_allocated_address(::xray::common::net::IPOrDomain* value);
  void unsafe_arena_set_allocated_address(::xray::common::net::IPOrDomain* value);
  ::xray::common::net::IPOrDomain* unsafe_arena_release_address();

  private:
  const ::xray::common::net::IPOrDomain& _internal_address() const;
  ::xray::common::net::IPOrDomain* _internal_mutable_address();

  public:
  // .xray.common.net.NetworkList network_list = 3 [deprecated = true];
  [[deprecated]]  bool has_network_list() const;
  [[deprecated]]  void clear_network_list() ;
  [[deprecated]] const ::xray::common::net::NetworkList& network_list() const;
  [[deprecated]] PROTOBUF_NODISCARD ::xray::common::net::NetworkList* release_network_list();
  [[deprecated]] ::xray::common::net::NetworkList* mutable_network_list();
  [[deprecated]] void set_allocated_network_list(::xray::common::net::NetworkList* value);
  [[deprecated]] void unsafe_arena_set_allocated_network_list(::xray::common::net::NetworkList* value);
  [[deprecated]] ::xray::common::net::NetworkList* unsafe_arena_release_network_list();

  private:
  const ::xray::common::net::NetworkList& _internal_network_list() const;
  ::xray::common::net::NetworkList* _internal_mutable_network_list();

  public:
  // uint32 port = 2;
  void clear_port() ;
  ::uint32_t port() const;
  void set_port(::uint32_t value);

  private:
  ::uint32_t _internal_port() const;
  void _internal_set_port(::uint32_t value);

  public:
  // uint32 timeout = 4 [deprecated = true];
  [[deprecated]]  void clear_timeout() ;
  [[deprecated]] ::uint32_t timeout() const;
  [[deprecated]] void set_timeout(::uint32_t value);

  private:
  ::uint32_t _internal_timeout() const;
  void _internal_set_timeout(::uint32_t value);

  public:
  // bool follow_redirect = 5;
  void clear_follow_redirect() ;
  bool follow_redirect() const;
  void set_follow_redirect(bool value);

  private:
  bool _internal_follow_redirect() const;
  void _internal_set_follow_redirect(bool value);

  public:
  // uint32 user_level = 6;
  void clear_user_level() ;
  ::uint32_t user_level() const;
  void set_user_level(::uint32_t value);

  private:
  ::uint32_t _internal_user_level() const;
  void _internal_set_user_level(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:xray.proxy.dokodemo.Config)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 7, 2,
      0, 2>
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
    ::google::protobuf::RepeatedField<int> networks_;
    mutable ::google::protobuf::internal::CachedSize _networks_cached_byte_size_;
    ::xray::common::net::IPOrDomain* address_;
    ::xray::common::net::NetworkList* network_list_;
    ::uint32_t port_;
    ::uint32_t timeout_;
    bool follow_redirect_;
    ::uint32_t user_level_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proxy_2fdokodemo_2fconfig_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Config

// .xray.common.net.IPOrDomain address = 1;
inline bool Config::has_address() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.address_ != nullptr);
  return value;
}
inline const ::xray::common::net::IPOrDomain& Config::_internal_address() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::xray::common::net::IPOrDomain* p = _impl_.address_;
  return p != nullptr ? *p : reinterpret_cast<const ::xray::common::net::IPOrDomain&>(::xray::common::net::_IPOrDomain_default_instance_);
}
inline const ::xray::common::net::IPOrDomain& Config::address() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.proxy.dokodemo.Config.address)
  return _internal_address();
}
inline void Config::unsafe_arena_set_allocated_address(::xray::common::net::IPOrDomain* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.address_);
  }
  _impl_.address_ = reinterpret_cast<::xray::common::net::IPOrDomain*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:xray.proxy.dokodemo.Config.address)
}
inline ::xray::common::net::IPOrDomain* Config::release_address() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::xray::common::net::IPOrDomain* released = _impl_.address_;
  _impl_.address_ = nullptr;
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
inline ::xray::common::net::IPOrDomain* Config::unsafe_arena_release_address() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:xray.proxy.dokodemo.Config.address)

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::xray::common::net::IPOrDomain* temp = _impl_.address_;
  _impl_.address_ = nullptr;
  return temp;
}
inline ::xray::common::net::IPOrDomain* Config::_internal_mutable_address() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.address_ == nullptr) {
    auto* p = CreateMaybeMessage<::xray::common::net::IPOrDomain>(GetArena());
    _impl_.address_ = reinterpret_cast<::xray::common::net::IPOrDomain*>(p);
  }
  return _impl_.address_;
}
inline ::xray::common::net::IPOrDomain* Config::mutable_address() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::xray::common::net::IPOrDomain* _msg = _internal_mutable_address();
  // @@protoc_insertion_point(field_mutable:xray.proxy.dokodemo.Config.address)
  return _msg;
}
inline void Config::set_allocated_address(::xray::common::net::IPOrDomain* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.address_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena = reinterpret_cast<::google::protobuf::MessageLite*>(value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }

  _impl_.address_ = reinterpret_cast<::xray::common::net::IPOrDomain*>(value);
  // @@protoc_insertion_point(field_set_allocated:xray.proxy.dokodemo.Config.address)
}

// uint32 port = 2;
inline void Config::clear_port() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.port_ = 0u;
}
inline ::uint32_t Config::port() const {
  // @@protoc_insertion_point(field_get:xray.proxy.dokodemo.Config.port)
  return _internal_port();
}
inline void Config::set_port(::uint32_t value) {
  _internal_set_port(value);
  // @@protoc_insertion_point(field_set:xray.proxy.dokodemo.Config.port)
}
inline ::uint32_t Config::_internal_port() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.port_;
}
inline void Config::_internal_set_port(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.port_ = value;
}

// .xray.common.net.NetworkList network_list = 3 [deprecated = true];
inline bool Config::has_network_list() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.network_list_ != nullptr);
  return value;
}
inline const ::xray::common::net::NetworkList& Config::_internal_network_list() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::xray::common::net::NetworkList* p = _impl_.network_list_;
  return p != nullptr ? *p : reinterpret_cast<const ::xray::common::net::NetworkList&>(::xray::common::net::_NetworkList_default_instance_);
}
inline const ::xray::common::net::NetworkList& Config::network_list() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.proxy.dokodemo.Config.network_list)
  return _internal_network_list();
}
inline void Config::unsafe_arena_set_allocated_network_list(::xray::common::net::NetworkList* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.network_list_);
  }
  _impl_.network_list_ = reinterpret_cast<::xray::common::net::NetworkList*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:xray.proxy.dokodemo.Config.network_list)
}
inline ::xray::common::net::NetworkList* Config::release_network_list() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000002u;
  ::xray::common::net::NetworkList* released = _impl_.network_list_;
  _impl_.network_list_ = nullptr;
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
inline ::xray::common::net::NetworkList* Config::unsafe_arena_release_network_list() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:xray.proxy.dokodemo.Config.network_list)

  _impl_._has_bits_[0] &= ~0x00000002u;
  ::xray::common::net::NetworkList* temp = _impl_.network_list_;
  _impl_.network_list_ = nullptr;
  return temp;
}
inline ::xray::common::net::NetworkList* Config::_internal_mutable_network_list() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.network_list_ == nullptr) {
    auto* p = CreateMaybeMessage<::xray::common::net::NetworkList>(GetArena());
    _impl_.network_list_ = reinterpret_cast<::xray::common::net::NetworkList*>(p);
  }
  return _impl_.network_list_;
}
inline ::xray::common::net::NetworkList* Config::mutable_network_list() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::xray::common::net::NetworkList* _msg = _internal_mutable_network_list();
  // @@protoc_insertion_point(field_mutable:xray.proxy.dokodemo.Config.network_list)
  return _msg;
}
inline void Config::set_allocated_network_list(::xray::common::net::NetworkList* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.network_list_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena = reinterpret_cast<::google::protobuf::MessageLite*>(value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }

  _impl_.network_list_ = reinterpret_cast<::xray::common::net::NetworkList*>(value);
  // @@protoc_insertion_point(field_set_allocated:xray.proxy.dokodemo.Config.network_list)
}

// repeated .xray.common.net.Network networks = 7;
inline int Config::_internal_networks_size() const {
  return _internal_networks().size();
}
inline int Config::networks_size() const {
  return _internal_networks_size();
}
inline void Config::clear_networks() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.networks_.Clear();
}
inline ::xray::common::net::Network Config::networks(int index) const {
  // @@protoc_insertion_point(field_get:xray.proxy.dokodemo.Config.networks)
  return static_cast<::xray::common::net::Network>(_internal_networks().Get(index));
}
inline void Config::set_networks(int index, ::xray::common::net::Network value) {
  _internal_mutable_networks()->Set(index, value);
  // @@protoc_insertion_point(field_set:xray.proxy.dokodemo.Config.networks)
}
inline void Config::add_networks(::xray::common::net::Network value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_networks()->Add(value);
  // @@protoc_insertion_point(field_add:xray.proxy.dokodemo.Config.networks)
}
inline const ::google::protobuf::RepeatedField<int>& Config::networks() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:xray.proxy.dokodemo.Config.networks)
  return _internal_networks();
}
inline ::google::protobuf::RepeatedField<int>* Config::mutable_networks()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:xray.proxy.dokodemo.Config.networks)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_networks();
}
inline const ::google::protobuf::RepeatedField<int>& Config::_internal_networks() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.networks_;
}
inline ::google::protobuf::RepeatedField<int>* Config::_internal_mutable_networks() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.networks_;
}

// uint32 timeout = 4 [deprecated = true];
inline void Config::clear_timeout() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.timeout_ = 0u;
}
inline ::uint32_t Config::timeout() const {
  // @@protoc_insertion_point(field_get:xray.proxy.dokodemo.Config.timeout)
  return _internal_timeout();
}
inline void Config::set_timeout(::uint32_t value) {
  _internal_set_timeout(value);
  // @@protoc_insertion_point(field_set:xray.proxy.dokodemo.Config.timeout)
}
inline ::uint32_t Config::_internal_timeout() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.timeout_;
}
inline void Config::_internal_set_timeout(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.timeout_ = value;
}

// bool follow_redirect = 5;
inline void Config::clear_follow_redirect() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.follow_redirect_ = false;
}
inline bool Config::follow_redirect() const {
  // @@protoc_insertion_point(field_get:xray.proxy.dokodemo.Config.follow_redirect)
  return _internal_follow_redirect();
}
inline void Config::set_follow_redirect(bool value) {
  _internal_set_follow_redirect(value);
  // @@protoc_insertion_point(field_set:xray.proxy.dokodemo.Config.follow_redirect)
}
inline bool Config::_internal_follow_redirect() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.follow_redirect_;
}
inline void Config::_internal_set_follow_redirect(bool value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.follow_redirect_ = value;
}

// uint32 user_level = 6;
inline void Config::clear_user_level() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.user_level_ = 0u;
}
inline ::uint32_t Config::user_level() const {
  // @@protoc_insertion_point(field_get:xray.proxy.dokodemo.Config.user_level)
  return _internal_user_level();
}
inline void Config::set_user_level(::uint32_t value) {
  _internal_set_user_level(value);
  // @@protoc_insertion_point(field_set:xray.proxy.dokodemo.Config.user_level)
}
inline ::uint32_t Config::_internal_user_level() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.user_level_;
}
inline void Config::_internal_set_user_level(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.user_level_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace dokodemo
}  // namespace proxy
}  // namespace xray


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_proxy_2fdokodemo_2fconfig_2eproto_2epb_2eh