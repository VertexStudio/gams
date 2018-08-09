// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: RegionOfInterest.capn

#ifndef CAPNP_INCLUDED_f4f6cdf742d1424c_
#define CAPNP_INCLUDED_f4f6cdf742d1424c_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(800666092870c8fe);

}  // namespace schemas
}  // namespace capnp

namespace gams {
namespace types {

struct RegionOfInterest {
  RegionOfInterest() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(800666092870c8fe, 3, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class RegionOfInterest::Reader {
public:
  typedef RegionOfInterest Reads;

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

  inline bool getDoRectify() const;

  inline  ::uint32_t getYOffset() const;

  inline  ::uint32_t getXOffset() const;

  inline  ::uint32_t getHeight() const;

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

class RegionOfInterest::Builder {
public:
  typedef RegionOfInterest Builds;

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

  inline bool getDoRectify();
  inline void setDoRectify(bool value);

  inline  ::uint32_t getYOffset();
  inline void setYOffset( ::uint32_t value);

  inline  ::uint32_t getXOffset();
  inline void setXOffset( ::uint32_t value);

  inline  ::uint32_t getHeight();
  inline void setHeight( ::uint32_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class RegionOfInterest::Pipeline {
public:
  typedef RegionOfInterest Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline  ::uint32_t RegionOfInterest::Reader::getWidth() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t RegionOfInterest::Builder::getWidth() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void RegionOfInterest::Builder::setWidth( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool RegionOfInterest::Reader::getDoRectify() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<32>() * ::capnp::ELEMENTS);
}

inline bool RegionOfInterest::Builder::getDoRectify() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<32>() * ::capnp::ELEMENTS);
}
inline void RegionOfInterest::Builder::setDoRectify(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<32>() * ::capnp::ELEMENTS, value);
}

inline  ::uint32_t RegionOfInterest::Reader::getYOffset() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t RegionOfInterest::Builder::getYOffset() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void RegionOfInterest::Builder::setYOffset( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline  ::uint32_t RegionOfInterest::Reader::getXOffset() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t RegionOfInterest::Builder::getXOffset() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void RegionOfInterest::Builder::setXOffset( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

inline  ::uint32_t RegionOfInterest::Reader::getHeight() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t RegionOfInterest::Builder::getHeight() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}
inline void RegionOfInterest::Builder::setHeight( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS, value);
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_f4f6cdf742d1424c_
