// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: TwistWithCovariance.capn

#ifndef CAPNP_INCLUDED_83cf22b7849690aa_
#define CAPNP_INCLUDED_83cf22b7849690aa_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "Twist.capn.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(bbe571f7f8647ce3);

}  // namespace schemas
}  // namespace capnp


struct TwistWithCovariance {
  TwistWithCovariance() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(bbe571f7f8647ce3, 0, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class TwistWithCovariance::Reader {
public:
  typedef TwistWithCovariance Reads;

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

  inline bool hasTwist() const;
  inline  ::Twist::Reader getTwist() const;

  inline bool hasCovariance() const;
  inline  ::capnp::List<double>::Reader getCovariance() const;

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

class TwistWithCovariance::Builder {
public:
  typedef TwistWithCovariance Builds;

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

  inline bool hasTwist();
  inline  ::Twist::Builder getTwist();
  inline void setTwist( ::Twist::Reader value);
  inline  ::Twist::Builder initTwist();
  inline void adoptTwist(::capnp::Orphan< ::Twist>&& value);
  inline ::capnp::Orphan< ::Twist> disownTwist();

  inline bool hasCovariance();
  inline  ::capnp::List<double>::Builder getCovariance();
  inline void setCovariance( ::capnp::List<double>::Reader value);
  inline void setCovariance(::kj::ArrayPtr<const double> value);
  inline  ::capnp::List<double>::Builder initCovariance(unsigned int size);
  inline void adoptCovariance(::capnp::Orphan< ::capnp::List<double>>&& value);
  inline ::capnp::Orphan< ::capnp::List<double>> disownCovariance();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class TwistWithCovariance::Pipeline {
public:
  typedef TwistWithCovariance Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::Twist::Pipeline getTwist();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool TwistWithCovariance::Reader::hasTwist() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool TwistWithCovariance::Builder::hasTwist() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::Twist::Reader TwistWithCovariance::Reader::getTwist() const {
  return ::capnp::_::PointerHelpers< ::Twist>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::Twist::Builder TwistWithCovariance::Builder::getTwist() {
  return ::capnp::_::PointerHelpers< ::Twist>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::Twist::Pipeline TwistWithCovariance::Pipeline::getTwist() {
  return  ::Twist::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void TwistWithCovariance::Builder::setTwist( ::Twist::Reader value) {
  ::capnp::_::PointerHelpers< ::Twist>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::Twist::Builder TwistWithCovariance::Builder::initTwist() {
  return ::capnp::_::PointerHelpers< ::Twist>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void TwistWithCovariance::Builder::adoptTwist(
    ::capnp::Orphan< ::Twist>&& value) {
  ::capnp::_::PointerHelpers< ::Twist>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::Twist> TwistWithCovariance::Builder::disownTwist() {
  return ::capnp::_::PointerHelpers< ::Twist>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool TwistWithCovariance::Reader::hasCovariance() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool TwistWithCovariance::Builder::hasCovariance() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List<double>::Reader TwistWithCovariance::Reader::getCovariance() const {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::List<double>::Builder TwistWithCovariance::Builder::getCovariance() {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void TwistWithCovariance::Builder::setCovariance( ::capnp::List<double>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List<double>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline void TwistWithCovariance::Builder::setCovariance(::kj::ArrayPtr<const double> value) {
  ::capnp::_::PointerHelpers< ::capnp::List<double>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List<double>::Builder TwistWithCovariance::Builder::initCovariance(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void TwistWithCovariance::Builder::adoptCovariance(
    ::capnp::Orphan< ::capnp::List<double>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List<double>>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List<double>> TwistWithCovariance::Builder::disownCovariance() {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}


#endif  // CAPNP_INCLUDED_83cf22b7849690aa_