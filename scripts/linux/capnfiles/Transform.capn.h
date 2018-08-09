// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: Transform.capn

#ifndef CAPNP_INCLUDED_9bad1b42944d36ee_
#define CAPNP_INCLUDED_9bad1b42944d36ee_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "Quaternion.capn.h"
#include "Vector3.capn.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(9cea576581d10d40);

}  // namespace schemas
}  // namespace capnp

namespace gams {
namespace types {

struct Transform {
  Transform() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(9cea576581d10d40, 0, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class Transform::Reader {
public:
  typedef Transform Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasTranslation() const;
  inline  ::gams::types::Vector3::Reader getTranslation() const;

  inline bool hasRotation() const;
  inline  ::gams::types::Quaternion::Reader getRotation() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Transform::Builder {
public:
  typedef Transform Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasTranslation();
  inline  ::gams::types::Vector3::Builder getTranslation();
  inline void setTranslation( ::gams::types::Vector3::Reader value);
  inline  ::gams::types::Vector3::Builder initTranslation();
  inline void adoptTranslation(::capnp::Orphan< ::gams::types::Vector3>&& value);
  inline ::capnp::Orphan< ::gams::types::Vector3> disownTranslation();

  inline bool hasRotation();
  inline  ::gams::types::Quaternion::Builder getRotation();
  inline void setRotation( ::gams::types::Quaternion::Reader value);
  inline  ::gams::types::Quaternion::Builder initRotation();
  inline void adoptRotation(::capnp::Orphan< ::gams::types::Quaternion>&& value);
  inline ::capnp::Orphan< ::gams::types::Quaternion> disownRotation();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Transform::Pipeline {
public:
  typedef Transform Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::gams::types::Vector3::Pipeline getTranslation();
  inline  ::gams::types::Quaternion::Pipeline getRotation();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool Transform::Reader::hasTranslation() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Transform::Builder::hasTranslation() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::Vector3::Reader Transform::Reader::getTranslation() const {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::gams::types::Vector3::Builder Transform::Builder::getTranslation() {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::Vector3::Pipeline Transform::Pipeline::getTranslation() {
  return  ::gams::types::Vector3::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void Transform::Builder::setTranslation( ::gams::types::Vector3::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::Vector3>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::Vector3::Builder Transform::Builder::initTranslation() {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Transform::Builder::adoptTranslation(
    ::capnp::Orphan< ::gams::types::Vector3>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::Vector3>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::Vector3> Transform::Builder::disownTranslation() {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool Transform::Reader::hasRotation() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool Transform::Builder::hasRotation() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::Quaternion::Reader Transform::Reader::getRotation() const {
  return ::capnp::_::PointerHelpers< ::gams::types::Quaternion>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::gams::types::Quaternion::Builder Transform::Builder::getRotation() {
  return ::capnp::_::PointerHelpers< ::gams::types::Quaternion>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::Quaternion::Pipeline Transform::Pipeline::getRotation() {
  return  ::gams::types::Quaternion::Pipeline(_typeless.getPointerField(1));
}
#endif  // !CAPNP_LITE
inline void Transform::Builder::setRotation( ::gams::types::Quaternion::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::Quaternion>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::Quaternion::Builder Transform::Builder::initRotation() {
  return ::capnp::_::PointerHelpers< ::gams::types::Quaternion>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void Transform::Builder::adoptRotation(
    ::capnp::Orphan< ::gams::types::Quaternion>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::Quaternion>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::Quaternion> Transform::Builder::disownRotation() {
  return ::capnp::_::PointerHelpers< ::gams::types::Quaternion>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_9bad1b42944d36ee_
