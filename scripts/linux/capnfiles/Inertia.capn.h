// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: Inertia.capn

#ifndef CAPNP_INCLUDED_a7ad6c17d2ffc1c3_
#define CAPNP_INCLUDED_a7ad6c17d2ffc1c3_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "Vector3.capn.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(f3f90461b7ed8c68);

}  // namespace schemas
}  // namespace capnp

namespace gams {
namespace types {

struct Inertia {
  Inertia() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(f3f90461b7ed8c68, 7, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class Inertia::Reader {
public:
  typedef Inertia Reads;

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

  inline double getIyy() const;

  inline double getM() const;

  inline double getIxz() const;

  inline double getIxx() const;

  inline double getIxy() const;

  inline double getIzz() const;

  inline bool hasCom() const;
  inline  ::gams::types::Vector3::Reader getCom() const;

  inline double getIyz() const;

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

class Inertia::Builder {
public:
  typedef Inertia Builds;

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

  inline double getIyy();
  inline void setIyy(double value);

  inline double getM();
  inline void setM(double value);

  inline double getIxz();
  inline void setIxz(double value);

  inline double getIxx();
  inline void setIxx(double value);

  inline double getIxy();
  inline void setIxy(double value);

  inline double getIzz();
  inline void setIzz(double value);

  inline bool hasCom();
  inline  ::gams::types::Vector3::Builder getCom();
  inline void setCom( ::gams::types::Vector3::Reader value);
  inline  ::gams::types::Vector3::Builder initCom();
  inline void adoptCom(::capnp::Orphan< ::gams::types::Vector3>&& value);
  inline ::capnp::Orphan< ::gams::types::Vector3> disownCom();

  inline double getIyz();
  inline void setIyz(double value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Inertia::Pipeline {
public:
  typedef Inertia Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::gams::types::Vector3::Pipeline getCom();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline double Inertia::Reader::getIyy() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline double Inertia::Builder::getIyy() {
  return _builder.getDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void Inertia::Builder::setIyy(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline double Inertia::Reader::getM() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline double Inertia::Builder::getM() {
  return _builder.getDataField<double>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void Inertia::Builder::setM(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline double Inertia::Reader::getIxz() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline double Inertia::Builder::getIxz() {
  return _builder.getDataField<double>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void Inertia::Builder::setIxz(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline double Inertia::Reader::getIxx() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline double Inertia::Builder::getIxx() {
  return _builder.getDataField<double>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void Inertia::Builder::setIxx(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

inline double Inertia::Reader::getIxy() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}

inline double Inertia::Builder::getIxy() {
  return _builder.getDataField<double>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}
inline void Inertia::Builder::setIxy(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS, value);
}

inline double Inertia::Reader::getIzz() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}

inline double Inertia::Builder::getIzz() {
  return _builder.getDataField<double>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}
inline void Inertia::Builder::setIzz(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS, value);
}

inline bool Inertia::Reader::hasCom() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Inertia::Builder::hasCom() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::Vector3::Reader Inertia::Reader::getCom() const {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::gams::types::Vector3::Builder Inertia::Builder::getCom() {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::Vector3::Pipeline Inertia::Pipeline::getCom() {
  return  ::gams::types::Vector3::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void Inertia::Builder::setCom( ::gams::types::Vector3::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::Vector3>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::Vector3::Builder Inertia::Builder::initCom() {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Inertia::Builder::adoptCom(
    ::capnp::Orphan< ::gams::types::Vector3>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::Vector3>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::Vector3> Inertia::Builder::disownCom() {
  return ::capnp::_::PointerHelpers< ::gams::types::Vector3>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline double Inertia::Reader::getIyz() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}

inline double Inertia::Builder::getIyz() {
  return _builder.getDataField<double>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}
inline void Inertia::Builder::setIyz(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS, value);
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_a7ad6c17d2ffc1c3_
