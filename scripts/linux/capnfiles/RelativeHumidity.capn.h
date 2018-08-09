// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: RelativeHumidity.capn

#ifndef CAPNP_INCLUDED_dd1a011c18789e62_
#define CAPNP_INCLUDED_dd1a011c18789e62_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "Header.capn.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(b279fb600505ed23);

}  // namespace schemas
}  // namespace capnp

namespace gams {
namespace types {

struct RelativeHumidity {
  RelativeHumidity() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(b279fb600505ed23, 2, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class RelativeHumidity::Reader {
public:
  typedef RelativeHumidity Reads;

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

  inline bool hasHeader() const;
  inline  ::gams::types::Header::Reader getHeader() const;

  inline double getVariance() const;

  inline double getRelativeHumidity() const;

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

class RelativeHumidity::Builder {
public:
  typedef RelativeHumidity Builds;

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

  inline bool hasHeader();
  inline  ::gams::types::Header::Builder getHeader();
  inline void setHeader( ::gams::types::Header::Reader value);
  inline  ::gams::types::Header::Builder initHeader();
  inline void adoptHeader(::capnp::Orphan< ::gams::types::Header>&& value);
  inline ::capnp::Orphan< ::gams::types::Header> disownHeader();

  inline double getVariance();
  inline void setVariance(double value);

  inline double getRelativeHumidity();
  inline void setRelativeHumidity(double value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class RelativeHumidity::Pipeline {
public:
  typedef RelativeHumidity Pipelines;

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

inline bool RelativeHumidity::Reader::hasHeader() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool RelativeHumidity::Builder::hasHeader() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::Header::Reader RelativeHumidity::Reader::getHeader() const {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::gams::types::Header::Builder RelativeHumidity::Builder::getHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::Header::Pipeline RelativeHumidity::Pipeline::getHeader() {
  return  ::gams::types::Header::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void RelativeHumidity::Builder::setHeader( ::gams::types::Header::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::Header::Builder RelativeHumidity::Builder::initHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void RelativeHumidity::Builder::adoptHeader(
    ::capnp::Orphan< ::gams::types::Header>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::Header> RelativeHumidity::Builder::disownHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline double RelativeHumidity::Reader::getVariance() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline double RelativeHumidity::Builder::getVariance() {
  return _builder.getDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void RelativeHumidity::Builder::setVariance(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline double RelativeHumidity::Reader::getRelativeHumidity() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline double RelativeHumidity::Builder::getRelativeHumidity() {
  return _builder.getDataField<double>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void RelativeHumidity::Builder::setRelativeHumidity(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_dd1a011c18789e62_
