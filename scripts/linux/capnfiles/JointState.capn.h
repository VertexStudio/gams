// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: JointState.capn

#ifndef CAPNP_INCLUDED_d2483cf757e1e6e1_
#define CAPNP_INCLUDED_d2483cf757e1e6e1_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "Header.capn.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(a2067d51a00923cd);

}  // namespace schemas
}  // namespace capnp

namespace gams {
namespace types {

struct JointState {
  JointState() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(a2067d51a00923cd, 0, 5)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class JointState::Reader {
public:
  typedef JointState Reads;

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

  inline bool hasVelocity() const;
  inline  ::capnp::List<double>::Reader getVelocity() const;

  inline bool hasEffort() const;
  inline  ::capnp::List<double>::Reader getEffort() const;

  inline bool hasName() const;
  inline  ::capnp::Text::Reader getName() const;

  inline bool hasPosition() const;
  inline  ::capnp::List<double>::Reader getPosition() const;

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

class JointState::Builder {
public:
  typedef JointState Builds;

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

  inline bool hasVelocity();
  inline  ::capnp::List<double>::Builder getVelocity();
  inline void setVelocity( ::capnp::List<double>::Reader value);
  inline void setVelocity(::kj::ArrayPtr<const double> value);
  inline  ::capnp::List<double>::Builder initVelocity(unsigned int size);
  inline void adoptVelocity(::capnp::Orphan< ::capnp::List<double>>&& value);
  inline ::capnp::Orphan< ::capnp::List<double>> disownVelocity();

  inline bool hasEffort();
  inline  ::capnp::List<double>::Builder getEffort();
  inline void setEffort( ::capnp::List<double>::Reader value);
  inline void setEffort(::kj::ArrayPtr<const double> value);
  inline  ::capnp::List<double>::Builder initEffort(unsigned int size);
  inline void adoptEffort(::capnp::Orphan< ::capnp::List<double>>&& value);
  inline ::capnp::Orphan< ::capnp::List<double>> disownEffort();

  inline bool hasName();
  inline  ::capnp::Text::Builder getName();
  inline void setName( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initName(unsigned int size);
  inline void adoptName(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownName();

  inline bool hasPosition();
  inline  ::capnp::List<double>::Builder getPosition();
  inline void setPosition( ::capnp::List<double>::Reader value);
  inline void setPosition(::kj::ArrayPtr<const double> value);
  inline  ::capnp::List<double>::Builder initPosition(unsigned int size);
  inline void adoptPosition(::capnp::Orphan< ::capnp::List<double>>&& value);
  inline ::capnp::Orphan< ::capnp::List<double>> disownPosition();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class JointState::Pipeline {
public:
  typedef JointState Pipelines;

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

inline bool JointState::Reader::hasHeader() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool JointState::Builder::hasHeader() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::gams::types::Header::Reader JointState::Reader::getHeader() const {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::gams::types::Header::Builder JointState::Builder::getHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::gams::types::Header::Pipeline JointState::Pipeline::getHeader() {
  return  ::gams::types::Header::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void JointState::Builder::setHeader( ::gams::types::Header::Reader value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::gams::types::Header::Builder JointState::Builder::initHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void JointState::Builder::adoptHeader(
    ::capnp::Orphan< ::gams::types::Header>&& value) {
  ::capnp::_::PointerHelpers< ::gams::types::Header>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::gams::types::Header> JointState::Builder::disownHeader() {
  return ::capnp::_::PointerHelpers< ::gams::types::Header>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool JointState::Reader::hasVelocity() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool JointState::Builder::hasVelocity() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List<double>::Reader JointState::Reader::getVelocity() const {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::List<double>::Builder JointState::Builder::getVelocity() {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void JointState::Builder::setVelocity( ::capnp::List<double>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List<double>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline void JointState::Builder::setVelocity(::kj::ArrayPtr<const double> value) {
  ::capnp::_::PointerHelpers< ::capnp::List<double>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List<double>::Builder JointState::Builder::initVelocity(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void JointState::Builder::adoptVelocity(
    ::capnp::Orphan< ::capnp::List<double>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List<double>>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List<double>> JointState::Builder::disownVelocity() {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool JointState::Reader::hasEffort() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool JointState::Builder::hasEffort() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List<double>::Reader JointState::Reader::getEffort() const {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::List<double>::Builder JointState::Builder::getEffort() {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void JointState::Builder::setEffort( ::capnp::List<double>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List<double>>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline void JointState::Builder::setEffort(::kj::ArrayPtr<const double> value) {
  ::capnp::_::PointerHelpers< ::capnp::List<double>>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List<double>::Builder JointState::Builder::initEffort(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void JointState::Builder::adoptEffort(
    ::capnp::Orphan< ::capnp::List<double>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List<double>>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List<double>> JointState::Builder::disownEffort() {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

inline bool JointState::Reader::hasName() const {
  return !_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline bool JointState::Builder::hasName() {
  return !_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader JointState::Reader::getName() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder JointState::Builder::getName() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline void JointState::Builder::setName( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder JointState::Builder::initName(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), size);
}
inline void JointState::Builder::adoptName(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> JointState::Builder::disownName() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}

inline bool JointState::Reader::hasPosition() const {
  return !_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline bool JointState::Builder::hasPosition() {
  return !_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List<double>::Reader JointState::Reader::getPosition() const {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::get(_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline  ::capnp::List<double>::Builder JointState::Builder::getPosition() {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::get(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline void JointState::Builder::setPosition( ::capnp::List<double>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List<double>>::set(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), value);
}
inline void JointState::Builder::setPosition(::kj::ArrayPtr<const double> value) {
  ::capnp::_::PointerHelpers< ::capnp::List<double>>::set(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List<double>::Builder JointState::Builder::initPosition(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::init(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), size);
}
inline void JointState::Builder::adoptPosition(
    ::capnp::Orphan< ::capnp::List<double>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List<double>>::adopt(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List<double>> JointState::Builder::disownPosition() {
  return ::capnp::_::PointerHelpers< ::capnp::List<double>>::disown(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_d2483cf757e1e6e1_
