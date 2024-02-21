// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/net/address.proto
// Protobuf C++ Version: 4.25.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_common_2fnet_2faddress_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_common_2fnet_2faddress_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_common_2fnet_2faddress_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_common_2fnet_2faddress_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_common_2fnet_2faddress_2eproto;
namespace xray {
namespace common {
namespace net {
class IPOrDomain;
struct IPOrDomainDefaultTypeInternal;
extern IPOrDomainDefaultTypeInternal _IPOrDomain_default_instance_;
}  // namespace net
}  // namespace common
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace xray {
namespace common {
namespace net {

// ===================================================================


// -------------------------------------------------------------------

class IPOrDomain final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:xray.common.net.IPOrDomain) */ {
 public:
  inline IPOrDomain() : IPOrDomain(nullptr) {}
  ~IPOrDomain() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR IPOrDomain(::google::protobuf::internal::ConstantInitialized);

  inline IPOrDomain(const IPOrDomain& from)
      : IPOrDomain(nullptr, from) {}
  IPOrDomain(IPOrDomain&& from) noexcept
    : IPOrDomain() {
    *this = ::std::move(from);
  }

  inline IPOrDomain& operator=(const IPOrDomain& from) {
    CopyFrom(from);
    return *this;
  }
  inline IPOrDomain& operator=(IPOrDomain&& from) noexcept {
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
  static const IPOrDomain& default_instance() {
    return *internal_default_instance();
  }
  enum AddressCase {
    kIp = 1,
    kDomain = 2,
    ADDRESS_NOT_SET = 0,
  };

  static inline const IPOrDomain* internal_default_instance() {
    return reinterpret_cast<const IPOrDomain*>(
               &_IPOrDomain_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(IPOrDomain& a, IPOrDomain& b) {
    a.Swap(&b);
  }
  inline void Swap(IPOrDomain* other) {
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
  void UnsafeArenaSwap(IPOrDomain* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  IPOrDomain* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<IPOrDomain>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const IPOrDomain& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const IPOrDomain& from) {
    IPOrDomain::MergeImpl(*this, from);
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
  void InternalSwap(IPOrDomain* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "xray.common.net.IPOrDomain";
  }
  protected:
  explicit IPOrDomain(::google::protobuf::Arena* arena);
  IPOrDomain(::google::protobuf::Arena* arena, const IPOrDomain& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIpFieldNumber = 1,
    kDomainFieldNumber = 2,
  };
  // bytes ip = 1;
  bool has_ip() const;
  void clear_ip() ;
  const std::string& ip() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_ip(Arg_&& arg, Args_... args);
  std::string* mutable_ip();
  PROTOBUF_NODISCARD std::string* release_ip();
  void set_allocated_ip(std::string* value);

  private:
  const std::string& _internal_ip() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_ip(
      const std::string& value);
  std::string* _internal_mutable_ip();

  public:
  // string domain = 2;
  bool has_domain() const;
  void clear_domain() ;
  const std::string& domain() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_domain(Arg_&& arg, Args_... args);
  std::string* mutable_domain();
  PROTOBUF_NODISCARD std::string* release_domain();
  void set_allocated_domain(std::string* value);

  private:
  const std::string& _internal_domain() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_domain(
      const std::string& value);
  std::string* _internal_mutable_domain();

  public:
  void clear_address();
  AddressCase address_case() const;
  // @@protoc_insertion_point(class_scope:xray.common.net.IPOrDomain)
 private:
  class _Internal;
  void set_has_ip();
  void set_has_domain();

  inline bool has_address() const;
  inline void clear_has_address();

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 2, 0,
      41, 2>
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
    union AddressUnion {
      constexpr AddressUnion() : _constinit_{} {}
        ::google::protobuf::internal::ConstantInitialized _constinit_;
      ::google::protobuf::internal::ArenaStringPtr ip_;
      ::google::protobuf::internal::ArenaStringPtr domain_;
    } address_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::uint32_t _oneof_case_[1];

    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_common_2fnet_2faddress_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// IPOrDomain

// bytes ip = 1;
inline bool IPOrDomain::has_ip() const {
  return address_case() == kIp;
}
inline void IPOrDomain::set_has_ip() {
  _impl_._oneof_case_[0] = kIp;
}
inline void IPOrDomain::clear_ip() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (address_case() == kIp) {
    _impl_.address_.ip_.Destroy();
    clear_has_address();
  }
}
inline const std::string& IPOrDomain::ip() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.common.net.IPOrDomain.ip)
  return _internal_ip();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void IPOrDomain::set_ip(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (address_case() != kIp) {
    clear_address();

    set_has_ip();
    _impl_.address_.ip_.InitDefault();
  }
  _impl_.address_.ip_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:xray.common.net.IPOrDomain.ip)
}
inline std::string* IPOrDomain::mutable_ip() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_ip();
  // @@protoc_insertion_point(field_mutable:xray.common.net.IPOrDomain.ip)
  return _s;
}
inline const std::string& IPOrDomain::_internal_ip() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  if (address_case() != kIp) {
    return ::google::protobuf::internal::GetEmptyStringAlreadyInited();
  }
  return _impl_.address_.ip_.Get();
}
inline void IPOrDomain::_internal_set_ip(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (address_case() != kIp) {
    clear_address();

    set_has_ip();
    _impl_.address_.ip_.InitDefault();
  }
  _impl_.address_.ip_.Set(value, GetArena());
}
inline std::string* IPOrDomain::_internal_mutable_ip() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (address_case() != kIp) {
    clear_address();

    set_has_ip();
    _impl_.address_.ip_.InitDefault();
  }
  return _impl_.address_.ip_.Mutable( GetArena());
}
inline std::string* IPOrDomain::release_ip() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:xray.common.net.IPOrDomain.ip)
  if (address_case() != kIp) {
    return nullptr;
  }
  clear_has_address();
  return _impl_.address_.ip_.Release();
}
inline void IPOrDomain::set_allocated_ip(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (has_address()) {
    clear_address();
  }
  if (value != nullptr) {
    set_has_ip();
    _impl_.address_.ip_.InitAllocated(value, GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:xray.common.net.IPOrDomain.ip)
}

// string domain = 2;
inline bool IPOrDomain::has_domain() const {
  return address_case() == kDomain;
}
inline void IPOrDomain::set_has_domain() {
  _impl_._oneof_case_[0] = kDomain;
}
inline void IPOrDomain::clear_domain() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (address_case() == kDomain) {
    _impl_.address_.domain_.Destroy();
    clear_has_address();
  }
}
inline const std::string& IPOrDomain::domain() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.common.net.IPOrDomain.domain)
  return _internal_domain();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void IPOrDomain::set_domain(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (address_case() != kDomain) {
    clear_address();

    set_has_domain();
    _impl_.address_.domain_.InitDefault();
  }
  _impl_.address_.domain_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:xray.common.net.IPOrDomain.domain)
}
inline std::string* IPOrDomain::mutable_domain() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_domain();
  // @@protoc_insertion_point(field_mutable:xray.common.net.IPOrDomain.domain)
  return _s;
}
inline const std::string& IPOrDomain::_internal_domain() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  if (address_case() != kDomain) {
    return ::google::protobuf::internal::GetEmptyStringAlreadyInited();
  }
  return _impl_.address_.domain_.Get();
}
inline void IPOrDomain::_internal_set_domain(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (address_case() != kDomain) {
    clear_address();

    set_has_domain();
    _impl_.address_.domain_.InitDefault();
  }
  _impl_.address_.domain_.Set(value, GetArena());
}
inline std::string* IPOrDomain::_internal_mutable_domain() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (address_case() != kDomain) {
    clear_address();

    set_has_domain();
    _impl_.address_.domain_.InitDefault();
  }
  return _impl_.address_.domain_.Mutable( GetArena());
}
inline std::string* IPOrDomain::release_domain() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:xray.common.net.IPOrDomain.domain)
  if (address_case() != kDomain) {
    return nullptr;
  }
  clear_has_address();
  return _impl_.address_.domain_.Release();
}
inline void IPOrDomain::set_allocated_domain(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (has_address()) {
    clear_address();
  }
  if (value != nullptr) {
    set_has_domain();
    _impl_.address_.domain_.InitAllocated(value, GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:xray.common.net.IPOrDomain.domain)
}

inline bool IPOrDomain::has_address() const {
  return address_case() != ADDRESS_NOT_SET;
}
inline void IPOrDomain::clear_has_address() {
  _impl_._oneof_case_[0] = ADDRESS_NOT_SET;
}
inline IPOrDomain::AddressCase IPOrDomain::address_case() const {
  return IPOrDomain::AddressCase(_impl_._oneof_case_[0]);
}
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace net
}  // namespace common
}  // namespace xray


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_common_2fnet_2faddress_2eproto_2epb_2eh