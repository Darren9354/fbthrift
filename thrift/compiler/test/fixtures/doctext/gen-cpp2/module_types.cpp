/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::B>::size;
folly::Range<::cpp2::B const*> const TEnumTraits<::cpp2::B>::values = folly::range(TEnumDataStorage<::cpp2::B>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::B>::names = folly::range(TEnumDataStorage<::cpp2::B>::names);

char const* TEnumTraits<::cpp2::B>::findName(type value) {
  using factory = ::cpp2::_B_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::B>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_B_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {
#ifndef ANDROID
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _B_EnumMapFactory::ValuesToNamesMapType _B_VALUES_TO_NAMES = _B_EnumMapFactory::makeValuesToNamesMap();
const _B_EnumMapFactory::NamesToValuesMapType _B_NAMES_TO_VALUES = _B_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING
#endif
} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::A>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::A>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {


A::A(apache::thrift::FragileConstructor, ::std::int32_t useless_field__arg) :
    __fbthrift_field_useless_field(std::move(useless_field__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void A::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_useless_field = ::std::int32_t();
  __isset = {};
}

bool A::__fbthrift_is_empty() const {
  return false;
}

bool A::operator==(const A& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.useless_field_ref() == rhs.useless_field_ref())) {
    return false;
  }
  return true;
}

bool A::operator<(const A& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.useless_field_ref() == rhs.useless_field_ref())) {
    return lhs.useless_field_ref() < rhs.useless_field_ref();
  }
  return false;
}


void swap(A& a, A& b) {
  using ::std::swap;
  swap(a.useless_field_ref().value(), b.useless_field_ref().value());
  swap(a.__isset, b.__isset);
}

template void A::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t A::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t A::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t A::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void A::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t A::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t A::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t A::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::U>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::U>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::U::Type>::size;
folly::Range<::cpp2::U::Type const*> const TEnumTraits<::cpp2::U::Type>::values = folly::range(TEnumDataStorage<::cpp2::U::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::U::Type>::names = folly::range(TEnumDataStorage<::cpp2::U::Type>::names);

char const* TEnumTraits<::cpp2::U::Type>::findName(type value) {
  using factory = detail::TEnumMapFactory<::cpp2::U::Type>;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::U::Type>::findValue(char const* name, type* out) {
  using factory = detail::TEnumMapFactory<::cpp2::U::Type>;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}
}} // apache::thrift
namespace cpp2 {

void U::__fbthrift_clear() {
  // clear all fields
  if (type_ == Type::__EMPTY__) { return; }
  switch(type_) {
    case Type::i:
      destruct(value_.i);
      break;
    case Type::s:
      destruct(value_.s);
      break;
    default:
      assert(false);
      break;
  }
  type_ = Type::__EMPTY__;
}

bool U::operator==(const U& rhs) const {
  if (type_ != rhs.type_) { return false; }
  switch(type_) {
    case Type::i:
      return value_.i == rhs.value_.i;
    case Type::s:
      return value_.s == rhs.value_.s;
    default:
      return true;
  }
}

bool U::operator<(const U& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.type_ != rhs.type_) {
    return lhs.type_ < rhs.type_;
  }
  switch (lhs.type_) {
    case Type::i:
      return lhs.value_.i < rhs.value_.i;
    case Type::s:
      return lhs.value_.s < rhs.value_.s;
    default:
      return false;
  }
}

void swap(U& a, U& b) {
  U temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void U::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t U::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t U::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t U::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void U::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t U::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t U::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t U::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Bang>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Bang>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

Bang::Bang(const Bang&) = default;
Bang& Bang::operator=(const Bang&) = default;
Bang::Bang() {
}


Bang::~Bang() {}

Bang::Bang(Bang&& other) noexcept  :
    message(std::move(other.message)),
    __isset(other.__isset) {
}

Bang& Bang::operator=(FOLLY_MAYBE_UNUSED Bang&& other) noexcept {
    this->message = std::move(other.message);
    __isset = other.__isset;
    return *this;
}


Bang::Bang(apache::thrift::FragileConstructor, ::std::string message__arg) :
    message(std::move(message__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void Bang::__fbthrift_clear() {
  // clear all fields
  this->message = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

bool Bang::__fbthrift_is_empty() const {
  return false;
}

bool Bang::operator==(const Bang& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.message_ref() == rhs.message_ref())) {
    return false;
  }
  return true;
}

bool Bang::operator<(const Bang& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.message_ref() == rhs.message_ref())) {
    return lhs.message_ref() < rhs.message_ref();
  }
  return false;
}


void swap(Bang& a, Bang& b) {
  using ::std::swap;
  swap(a.message_ref().value(), b.message_ref().value());
  swap(a.__isset, b.__isset);
}

template void Bang::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Bang::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Bang::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Bang::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Bang::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Bang::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Bang::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Bang::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
