// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: PointCloud2.capn

#ifndef CAPNP_INCLUDED_b78c850e4d6b299b_
#define CAPNP_INCLUDED_b78c850e4d6b299b_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "Header.capn.h"
#include "PointField.capn.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(e259d8a50ab94585);

}  // namespace schemas
}  // namespace capnp

namespace gams {
namespace types {

struct PointCloud2 {
  PointCloud2() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(e259d8a50ab94585, 3, 3)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class PointCloud2::Reader {
public:
  typedef PointCloud2 Reads;

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

  inline  ::uint32_t getWidth() const;

  inline bool getIsDense() const;

  inline  ::uint32_t getPointStep() const;

  inline  ::uint32_t getHeight() const;

  inline bool hasHeader() const;
  inline  ::gams::types::Header::Reader getHeader() const;

  inline bool hasData() const;
  inline  ::capnp::List< ::uint8_t>::Reader getData() const;

  inline bool hasFields() const;
  inline  ::capnp::List< ::gams::types::PointField>::Reader getFields() const;

  inline  ::uint32_t getRowStep() const;

  inline bool getIsBigendian() const;

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

class PointCloud2::Builder {
public:
  typedef PointCloud2 Builds;

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

  inline  ::uint32_t getWidth();
  inline void setWidth( ::uint32_t value);

  inline bool getIsDense();
  inline void setIsDense(bool value);

  inline  ::uint32_t getPointStep();
  inline void setPointStep( ::uint32_t value);

  inline  ::uint32_t getHeight();
  inline void setHeight( ::uint32_t value);

  inline bool hasHeader();
  inline  ::gams::types::Header::Builder getHeader();
  inline void setHeader( ::gams::types::Header::Reader value);
  inline  ::gams::types::Header::Builder initHeader();
  inline void adoptHeader(::capnp::Orphan< ::gams::types::Header>&& value);
  inline ::capnp::Orphan< ::gams::types::Header> disownHeader();

  inline bool hasData();
  inline  ::capnp::List< ::uint8_t>::Builder getData();
  inline void setData( ::capnp::List< ::uint8_t>::Reader value);
  inline void setData(::kj::ArrayPtr<const  ::uint8_t> value);
  inline  ::capnp::List< ::uint8_t>::Builder initData(unsigned int size);
  inline void adoptData(::capnp::Orphan< ::capnp::List< ::uint8_t>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::uint8_t>> disownData();

  inline bool hasFields();
  inline  ::capnp::List< ::gams::types::PointField>::Builder getFields();
  inline void setFields( ::capnp::List< ::gams::types::PointField>::Reader value);
  inline  ::capnp::List< ::gams::types::PointField>::Builder initFields(unsigned int size);
  inline void adoptFields(::capnp::Orphan< ::capnp::List< ::gams::types::PointField>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::gams::types::PointField>> disownFields();

  inline  ::uint32_t getRowStep();
  inline void setRowStep( ::uint32_t value);

  inline bool getIsBigendian();
  inline void setIsBigendian(bool value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class PointCloud2::Pipeline {
public:
  typedef PointCloud2 Pipelines;

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

inline  ::uint32_t PointCloud2::Reader::getWidth() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t PointCloud2::Builder::getWidth() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void PointCloud2::Builder::setWidth( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool PointCloud2::Reader::getIsDense() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<32>() * ::capnp::ELEMENTS);
}

inline bool PointCloud2::Builder::getIsDense() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<32>() * ::capnp::ELEMENTS);
}
inline void PointCloud2::Builder::setIsDense(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<32>() * ::capnp::ELEMENTS, value);
}

inline  ::uint32_t PointCloud2::Reader::getPointStep() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t PointCloud2::Builder::getPointStep() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void PointCloud2::Builder::setPointStep( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline  ::uint32_t PointCloud2::Reader::getHeight() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t PointCloud2::Builder::getHeight() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void PointCloud2::Builder::setHeight( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

inline bool PointCloud2::Reader::hasHeader() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool PointCloud2::Builder::hasHeader() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::Header::Reader PointCloud2::Reader::getHeader() const {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::gams::types::Header::Builder PointCloud2::Builder::getHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::Header::Pipeline PointCloud2::Pipeline::getHeader() {
  return  ::gams::types::Header::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void PointCloud2::Builder::setHeader( ::gams::types::Header::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::Header::Builder PointCloud2::Builder::initHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void PointCloud2::Builder::adoptHeader(
    ::capnp::Orphan< ::gams::types::Header>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::Header> PointCloud2::Builder::disownHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool PointCloud2::Reader::hasData() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool PointCloud2::Builder::hasData() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::uint8_t>::Reader PointCloud2::Reader::getData() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::uint8_t>::Builder PointCloud2::Builder::getData() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void PointCloud2::Builder::setData( ::capnp::List< ::uint8_t>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline void PointCloud2::Builder::setData(::kj::ArrayPtr<const  ::uint8_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::uint8_t>::Builder PointCloud2::Builder::initData(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void PointCloud2::Builder::adoptData(
    ::capnp::Orphan< ::capnp::List< ::uint8_t>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::uint8_t>> PointCloud2::Builder::disownData() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool PointCloud2::Reader::hasFields() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool PointCloud2::Builder::hasFields() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::gams::types::PointField>::Reader PointCloud2::Reader::getFields() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::PointField>>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::gams::types::PointField>::Builder PointCloud2::Builder::getFields() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::PointField>>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void PointCloud2::Builder::setFields( ::capnp::List< ::gams::types::PointField>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::PointField>>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::gams::types::PointField>::Builder PointCloud2::Builder::initFields(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::PointField>>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void PointCloud2::Builder::adoptFields(
    ::capnp::Orphan< ::capnp::List< ::gams::types::PointField>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::PointField>>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::gams::types::PointField>> PointCloud2::Builder::disownFields() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::gams::types::PointField>>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

inline  ::uint32_t PointCloud2::Reader::getRowStep() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t PointCloud2::Builder::getRowStep() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}
inline void PointCloud2::Builder::setRowStep( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS, value);
}

inline bool PointCloud2::Reader::getIsBigendian() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<33>() * ::capnp::ELEMENTS);
}

inline bool PointCloud2::Builder::getIsBigendian() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<33>() * ::capnp::ELEMENTS);
}
inline void PointCloud2::Builder::setIsBigendian(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<33>() * ::capnp::ELEMENTS, value);
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_b78c850e4d6b299b_
