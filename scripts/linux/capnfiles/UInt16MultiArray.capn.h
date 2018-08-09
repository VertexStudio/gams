// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: UInt16MultiArray.capn

#ifndef CAPNP_INCLUDED_a7355188fe9f08b1_
#define CAPNP_INCLUDED_a7355188fe9f08b1_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "MultiArrayLayout.capn.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(a0a889292792c827);

}  // namespace schemas
}  // namespace capnp

namespace gams {
namespace types {

struct UInt16MultiArray {
  UInt16MultiArray() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(a0a889292792c827, 0, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class UInt16MultiArray::Reader {
public:
  typedef UInt16MultiArray Reads;

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

  inline bool hasData() const;
  inline  ::capnp::List< ::uint16_t>::Reader getData() const;

  inline bool hasLayout() const;
  inline  ::gams::types::MultiArrayLayout::Reader getLayout() const;

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

class UInt16MultiArray::Builder {
public:
  typedef UInt16MultiArray Builds;

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

  inline bool hasData();
  inline  ::capnp::List< ::uint16_t>::Builder getData();
  inline void setData( ::capnp::List< ::uint16_t>::Reader value);
  inline void setData(::kj::ArrayPtr<const  ::uint16_t> value);
  inline  ::capnp::List< ::uint16_t>::Builder initData(unsigned int size);
  inline void adoptData(::capnp::Orphan< ::capnp::List< ::uint16_t>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::uint16_t>> disownData();

  inline bool hasLayout();
  inline  ::gams::types::MultiArrayLayout::Builder getLayout();
  inline void setLayout( ::gams::types::MultiArrayLayout::Reader value);
  inline  ::gams::types::MultiArrayLayout::Builder initLayout();
  inline void adoptLayout(::capnp::Orphan< ::gams::types::MultiArrayLayout>&& value);
  inline ::capnp::Orphan< ::gams::types::MultiArrayLayout> disownLayout();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class UInt16MultiArray::Pipeline {
public:
  typedef UInt16MultiArray Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::gams::types::MultiArrayLayout::Pipeline getLayout();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool UInt16MultiArray::Reader::hasData() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool UInt16MultiArray::Builder::hasData() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::uint16_t>::Reader UInt16MultiArray::Reader::getData() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::uint16_t>::Builder UInt16MultiArray::Builder::getData() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void UInt16MultiArray::Builder::setData( ::capnp::List< ::uint16_t>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline void UInt16MultiArray::Builder::setData(::kj::ArrayPtr<const  ::uint16_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::uint16_t>::Builder UInt16MultiArray::Builder::initData(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void UInt16MultiArray::Builder::adoptData(
    ::capnp::Orphan< ::capnp::List< ::uint16_t>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::uint16_t>> UInt16MultiArray::Builder::disownData() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool UInt16MultiArray::Reader::hasLayout() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool UInt16MultiArray::Builder::hasLayout() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::MultiArrayLayout::Reader UInt16MultiArray::Reader::getLayout() const {
  return ::capnp::_::PointerHelpers< ::gams::types::MultiArrayLayout>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::gams::types::MultiArrayLayout::Builder UInt16MultiArray::Builder::getLayout() {
  return ::capnp::_::PointerHelpers< ::gams::types::MultiArrayLayout>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::MultiArrayLayout::Pipeline UInt16MultiArray::Pipeline::getLayout() {
  return  ::gams::types::MultiArrayLayout::Pipeline(_typeless.getPointerField(1));
}
#endif  // !CAPNP_LITE
inline void UInt16MultiArray::Builder::setLayout( ::gams::types::MultiArrayLayout::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::MultiArrayLayout>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::MultiArrayLayout::Builder UInt16MultiArray::Builder::initLayout() {
  return ::capnp::_::PointerHelpers< ::gams::types::MultiArrayLayout>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void UInt16MultiArray::Builder::adoptLayout(
    ::capnp::Orphan< ::gams::types::MultiArrayLayout>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::MultiArrayLayout>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::MultiArrayLayout> UInt16MultiArray::Builder::disownLayout() {
  return ::capnp::_::PointerHelpers< ::gams::types::MultiArrayLayout>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_a7355188fe9f08b1_
