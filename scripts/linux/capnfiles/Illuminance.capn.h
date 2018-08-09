// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: Illuminance.capn

#ifndef CAPNP_INCLUDED_a313aa897ea9aa54_
#define CAPNP_INCLUDED_a313aa897ea9aa54_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "Header.capn.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(9c3c2e8af04d75bf);

}  // namespace schemas
}  // namespace capnp

namespace gams {
namespace types {

struct Illuminance {
  Illuminance() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(9c3c2e8af04d75bf, 2, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class Illuminance::Reader {
public:
  typedef Illuminance Reads;

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

  inline double getIlluminance() const;

  inline bool hasHeader() const;
  inline  ::gams::types::Header::Reader getHeader() const;

  inline double getVariance() const;

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

class Illuminance::Builder {
public:
  typedef Illuminance Builds;

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

  inline double getIlluminance();
  inline void setIlluminance(double value);

  inline bool hasHeader();
  inline  ::gams::types::Header::Builder getHeader();
  inline void setHeader( ::gams::types::Header::Reader value);
  inline  ::gams::types::Header::Builder initHeader();
  inline void adoptHeader(::capnp::Orphan< ::gams::types::Header>&& value);
  inline ::capnp::Orphan< ::gams::types::Header> disownHeader();

  inline double getVariance();
  inline void setVariance(double value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Illuminance::Pipeline {
public:
  typedef Illuminance Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::gams::types::Header::Pipeline getHeader();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline double Illuminance::Reader::getIlluminance() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline double Illuminance::Builder::getIlluminance() {
  return _builder.getDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void Illuminance::Builder::setIlluminance(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool Illuminance::Reader::hasHeader() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Illuminance::Builder::hasHeader() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::Header::Reader Illuminance::Reader::getHeader() const {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::gams::types::Header::Builder Illuminance::Builder::getHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::Header::Pipeline Illuminance::Pipeline::getHeader() {
  return  ::gams::types::Header::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void Illuminance::Builder::setHeader( ::gams::types::Header::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::Header::Builder Illuminance::Builder::initHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Illuminance::Builder::adoptHeader(
    ::capnp::Orphan< ::gams::types::Header>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::Header> Illuminance::Builder::disownHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline double Illuminance::Reader::getVariance() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline double Illuminance::Builder::getVariance() {
  return _builder.getDataField<double>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void Illuminance::Builder::setVariance(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_a313aa897ea9aa54_
