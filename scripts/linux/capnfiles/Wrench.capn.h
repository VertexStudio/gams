// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: Wrench.capn

#ifndef CAPNP_INCLUDED_edfa0e94383ad5a0_
#define CAPNP_INCLUDED_edfa0e94383ad5a0_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "Vector3.capn.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(c4d205df0bbce7b5);

}  // namespace schemas
}  // namespace capnp

namespace gams {
namespace types {

struct Wrench {
  Wrench() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(c4d205df0bbce7b5, 0, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class Wrench::Reader {
public:
  typedef Wrench Reads;

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

  inline bool hasTorque() const;
  inline  ::gams::types::Vector3::Reader getTorque() const;

  inline bool hasForce() const;
  inline  ::gams::types::Vector3::Reader getForce() const;

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

class Wrench::Builder {
public:
  typedef Wrench Builds;

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

  inline bool hasTorque();
  inline  ::gams::types::Vector3::Builder getTorque();
  inline void setTorque( ::gams::types::Vector3::Reader value);
  inline  ::gams::types::Vector3::Builder initTorque();
  inline void adoptTorque(::capnp::Orphan< ::gams::types::Vector3>&& value);
  inline ::capnp::Orphan< ::gams::types::Vector3> disownTorque();

  inline bool hasForce();
  inline  ::gams::types::Vector3::Builder getForce();
  inline void setForce( ::gams::types::Vector3::Reader value);
  inline  ::gams::types::Vector3::Builder initForce();
  inline void adoptForce(::capnp::Orphan< ::gams::types::Vector3>&& value);
  inline ::capnp::Orphan< ::gams::types::Vector3> disownForce();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Wrench::Pipeline {
public:
  typedef Wrench Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::gams::types::Vector3::Pipeline getTorque();
  inline  ::gams::types::Vector3::Pipeline getForce();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool Wrench::Reader::hasTorque() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Wrench::Builder::hasTorque() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::Vector3::Reader Wrench::Reader::getTorque() const {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::gams::types::Vector3::Builder Wrench::Builder::getTorque() {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::Vector3::Pipeline Wrench::Pipeline::getTorque() {
  return  ::gams::types::Vector3::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void Wrench::Builder::setTorque( ::gams::types::Vector3::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::Vector3>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::Vector3::Builder Wrench::Builder::initTorque() {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Wrench::Builder::adoptTorque(
    ::capnp::Orphan< ::gams::types::Vector3>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::Vector3>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::Vector3> Wrench::Builder::disownTorque() {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool Wrench::Reader::hasForce() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool Wrench::Builder::hasForce() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::Vector3::Reader Wrench::Reader::getForce() const {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::gams::types::Vector3::Builder Wrench::Builder::getForce() {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::Vector3::Pipeline Wrench::Pipeline::getForce() {
  return  ::gams::types::Vector3::Pipeline(_typeless.getPointerField(1));
}
#endif  // !CAPNP_LITE
inline void Wrench::Builder::setForce( ::gams::types::Vector3::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::Vector3>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::Vector3::Builder Wrench::Builder::initForce() {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void Wrench::Builder::adoptForce(
    ::capnp::Orphan< ::gams::types::Vector3>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::Vector3>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::Vector3> Wrench::Builder::disownForce() {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_edfa0e94383ad5a0_
