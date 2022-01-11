/**
 * Autogenerated by Thrift for src/simple.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/emptiable/gen-cpp2/simple_types.h"
#include "thrift/compiler/test/fixtures/emptiable/gen-cpp2/simple_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/emptiable/gen-cpp2/simple_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::apache::thrift::test::MyEnum>::size;
folly::Range<::apache::thrift::test::MyEnum const*> const TEnumTraits<::apache::thrift::test::MyEnum>::values = folly::range(TEnumDataStorage<::apache::thrift::test::MyEnum>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::apache::thrift::test::MyEnum>::names = folly::range(TEnumDataStorage<::apache::thrift::test::MyEnum>::names);

char const* TEnumTraits<::apache::thrift::test::MyEnum>::findName(type value) {
  using factory = ::apache::thrift::test::_MyEnum_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::apache::thrift::test::MyEnum>::findValue(char const* name, type* out) {
  using factory = ::apache::thrift::test::_MyEnum_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace apache { namespace thrift { namespace test {
#ifndef ANDROID
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES = _MyEnum_EnumMapFactory::makeValuesToNamesMap();
const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES = _MyEnum_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING
#endif
}}} // apache::thrift::test

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::MyStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::MyStruct>;
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

namespace apache { namespace thrift { namespace test {


MyStruct::MyStruct(apache::thrift::FragileConstructor) {}


void MyStruct::__fbthrift_clear() {
  // clear all fields
}

bool MyStruct::__fbthrift_is_empty() const {
  return true;
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  return true;
}

bool MyStruct::operator<(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  return false;
}


void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  (void)a;
  (void)b;
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



}}} // apache::thrift::test

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::EmptiableStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::EmptiableStruct>;
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

namespace apache { namespace thrift { namespace test {

EmptiableStruct::EmptiableStruct(const EmptiableStruct&) = default;
EmptiableStruct& EmptiableStruct::operator=(const EmptiableStruct&) = default;
EmptiableStruct::EmptiableStruct() :
      __fbthrift_field_bool_field(),
      __fbthrift_field_byte_field(),
      __fbthrift_field_short_field(),
      __fbthrift_field_int_field(),
      __fbthrift_field_long_field(),
      __fbthrift_field_float_field(),
      __fbthrift_field_double_field(),
      __fbthrift_field_MyEnum() {
}


EmptiableStruct::~EmptiableStruct() {}

EmptiableStruct::EmptiableStruct(EmptiableStruct&& other) noexcept  :
    __fbthrift_field_bool_field(std::move(other.__fbthrift_field_bool_field)),
    __fbthrift_field_byte_field(std::move(other.__fbthrift_field_byte_field)),
    __fbthrift_field_short_field(std::move(other.__fbthrift_field_short_field)),
    __fbthrift_field_int_field(std::move(other.__fbthrift_field_int_field)),
    __fbthrift_field_long_field(std::move(other.__fbthrift_field_long_field)),
    __fbthrift_field_float_field(std::move(other.__fbthrift_field_float_field)),
    __fbthrift_field_double_field(std::move(other.__fbthrift_field_double_field)),
    __fbthrift_field_string_field(std::move(other.__fbthrift_field_string_field)),
    __fbthrift_field_binary_field(std::move(other.__fbthrift_field_binary_field)),
    __fbthrift_field_MyEnum(std::move(other.__fbthrift_field_MyEnum)),
    __fbthrift_field_list_field(std::move(other.__fbthrift_field_list_field)),
    __fbthrift_field_set_field(std::move(other.__fbthrift_field_set_field)),
    __fbthrift_field_map_field(std::move(other.__fbthrift_field_map_field)),
    __fbthrift_field_struct_field(std::move(other.__fbthrift_field_struct_field)),
    __isset(other.__isset) {
}

EmptiableStruct& EmptiableStruct::operator=(FOLLY_MAYBE_UNUSED EmptiableStruct&& other) noexcept {
    this->__fbthrift_field_bool_field = std::move(other.__fbthrift_field_bool_field);
    this->__fbthrift_field_byte_field = std::move(other.__fbthrift_field_byte_field);
    this->__fbthrift_field_short_field = std::move(other.__fbthrift_field_short_field);
    this->__fbthrift_field_int_field = std::move(other.__fbthrift_field_int_field);
    this->__fbthrift_field_long_field = std::move(other.__fbthrift_field_long_field);
    this->__fbthrift_field_float_field = std::move(other.__fbthrift_field_float_field);
    this->__fbthrift_field_double_field = std::move(other.__fbthrift_field_double_field);
    this->__fbthrift_field_string_field = std::move(other.__fbthrift_field_string_field);
    this->__fbthrift_field_binary_field = std::move(other.__fbthrift_field_binary_field);
    this->__fbthrift_field_MyEnum = std::move(other.__fbthrift_field_MyEnum);
    this->__fbthrift_field_list_field = std::move(other.__fbthrift_field_list_field);
    this->__fbthrift_field_set_field = std::move(other.__fbthrift_field_set_field);
    this->__fbthrift_field_map_field = std::move(other.__fbthrift_field_map_field);
    this->__fbthrift_field_struct_field = std::move(other.__fbthrift_field_struct_field);
    __isset = other.__isset;
    return *this;
}


EmptiableStruct::EmptiableStruct(apache::thrift::FragileConstructor, bool bool_field__arg, ::std::int8_t byte_field__arg, ::std::int16_t short_field__arg, ::std::int32_t int_field__arg, ::std::int64_t long_field__arg, float float_field__arg, double double_field__arg, ::std::string string_field__arg, ::std::string binary_field__arg, ::apache::thrift::test::MyEnum MyEnum__arg, ::std::vector<::std::int16_t> list_field__arg, ::std::set<::std::int16_t> set_field__arg, ::std::map<::std::int16_t, ::std::int16_t> map_field__arg, ::apache::thrift::test::MyStruct struct_field__arg) :
    __fbthrift_field_bool_field(std::move(bool_field__arg)),
    __fbthrift_field_byte_field(std::move(byte_field__arg)),
    __fbthrift_field_short_field(std::move(short_field__arg)),
    __fbthrift_field_int_field(std::move(int_field__arg)),
    __fbthrift_field_long_field(std::move(long_field__arg)),
    __fbthrift_field_float_field(std::move(float_field__arg)),
    __fbthrift_field_double_field(std::move(double_field__arg)),
    __fbthrift_field_string_field(std::move(string_field__arg)),
    __fbthrift_field_binary_field(std::move(binary_field__arg)),
    __fbthrift_field_MyEnum(std::move(MyEnum__arg)),
    __fbthrift_field_list_field(std::move(list_field__arg)),
    __fbthrift_field_set_field(std::move(set_field__arg)),
    __fbthrift_field_map_field(std::move(map_field__arg)),
    __fbthrift_field_struct_field(std::move(struct_field__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
  __isset.set(folly::index_constant<4>(), true);
  __isset.set(folly::index_constant<5>(), true);
  __isset.set(folly::index_constant<6>(), true);
  __isset.set(folly::index_constant<7>(), true);
  __isset.set(folly::index_constant<8>(), true);
  __isset.set(folly::index_constant<9>(), true);
  __isset.set(folly::index_constant<10>(), true);
  __isset.set(folly::index_constant<11>(), true);
  __isset.set(folly::index_constant<12>(), true);
  __isset.set(folly::index_constant<13>(), true);
}


void EmptiableStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_bool_field = bool();
  this->__fbthrift_field_byte_field = ::std::int8_t();
  this->__fbthrift_field_short_field = ::std::int16_t();
  this->__fbthrift_field_int_field = ::std::int32_t();
  this->__fbthrift_field_long_field = ::std::int64_t();
  this->__fbthrift_field_float_field = float();
  this->__fbthrift_field_double_field = double();
  this->__fbthrift_field_string_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_binary_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_MyEnum = ::apache::thrift::test::MyEnum();
  this->__fbthrift_field_list_field.clear();
  this->__fbthrift_field_set_field.clear();
  this->__fbthrift_field_map_field.clear();
  __isset = {};
}

bool EmptiableStruct::__fbthrift_is_empty() const {
  return !(this->__isset.get(0)) &&
 !(this->__isset.get(1)) &&
 !(this->__isset.get(2)) &&
 !(this->__isset.get(3)) &&
 !(this->__isset.get(4)) &&
 !(this->__isset.get(5)) &&
 !(this->__isset.get(6)) &&
 !(this->__isset.get(7)) &&
 !(this->__isset.get(8)) &&
 !(this->__isset.get(9)) &&
 !(this->__isset.get(10)) &&
 !(this->__isset.get(11)) &&
 !(this->__isset.get(12)) &&
 !(this->__isset.get(13));
}

bool EmptiableStruct::operator==(const EmptiableStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.bool_field_ref() == rhs.bool_field_ref())) {
    return false;
  }
  if (!(lhs.byte_field_ref() == rhs.byte_field_ref())) {
    return false;
  }
  if (!(lhs.short_field_ref() == rhs.short_field_ref())) {
    return false;
  }
  if (!(lhs.int_field_ref() == rhs.int_field_ref())) {
    return false;
  }
  if (!(lhs.long_field_ref() == rhs.long_field_ref())) {
    return false;
  }
  if (!(lhs.float_field_ref() == rhs.float_field_ref())) {
    return false;
  }
  if (!(lhs.double_field_ref() == rhs.double_field_ref())) {
    return false;
  }
  if (!(lhs.string_field_ref() == rhs.string_field_ref())) {
    return false;
  }
  if (lhs.binary_field_ref().has_value() != rhs.binary_field_ref().has_value() || (lhs.binary_field_ref().has_value() && !apache::thrift::StringTraits<std::string>::isEqual(lhs.__fbthrift_field_binary_field, rhs.__fbthrift_field_binary_field))) {
    return false;
  }
  if (!(lhs.MyEnum_ref() == rhs.MyEnum_ref())) {
    return false;
  }
  if (!(lhs.list_field_ref() == rhs.list_field_ref())) {
    return false;
  }
  if (!(lhs.set_field_ref() == rhs.set_field_ref())) {
    return false;
  }
  if (!(lhs.map_field_ref() == rhs.map_field_ref())) {
    return false;
  }
  if (!(lhs.struct_field_ref() == rhs.struct_field_ref())) {
    return false;
  }
  return true;
}

bool EmptiableStruct::operator<(const EmptiableStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.bool_field_ref() == rhs.bool_field_ref())) {
    return lhs.bool_field_ref() < rhs.bool_field_ref();
  }
  if (!(lhs.byte_field_ref() == rhs.byte_field_ref())) {
    return lhs.byte_field_ref() < rhs.byte_field_ref();
  }
  if (!(lhs.short_field_ref() == rhs.short_field_ref())) {
    return lhs.short_field_ref() < rhs.short_field_ref();
  }
  if (!(lhs.int_field_ref() == rhs.int_field_ref())) {
    return lhs.int_field_ref() < rhs.int_field_ref();
  }
  if (!(lhs.long_field_ref() == rhs.long_field_ref())) {
    return lhs.long_field_ref() < rhs.long_field_ref();
  }
  if (!(lhs.float_field_ref() == rhs.float_field_ref())) {
    return lhs.float_field_ref() < rhs.float_field_ref();
  }
  if (!(lhs.double_field_ref() == rhs.double_field_ref())) {
    return lhs.double_field_ref() < rhs.double_field_ref();
  }
  if (!(lhs.string_field_ref() == rhs.string_field_ref())) {
    return lhs.string_field_ref() < rhs.string_field_ref();
  }
  if (lhs.binary_field_ref().has_value() != rhs.binary_field_ref().has_value() || (lhs.binary_field_ref().has_value() && !apache::thrift::StringTraits<std::string>::isEqual(lhs.__fbthrift_field_binary_field, rhs.__fbthrift_field_binary_field))) {
    return !lhs.binary_field_ref().has_value() || (rhs.binary_field_ref().has_value() && apache::thrift::StringTraits<std::string>::isLess(lhs.__fbthrift_field_binary_field, rhs.__fbthrift_field_binary_field));
  }
  if (!(lhs.MyEnum_ref() == rhs.MyEnum_ref())) {
    return lhs.MyEnum_ref() < rhs.MyEnum_ref();
  }
  if (!(lhs.list_field_ref() == rhs.list_field_ref())) {
    return lhs.list_field_ref() < rhs.list_field_ref();
  }
  if (!(lhs.set_field_ref() == rhs.set_field_ref())) {
    return lhs.set_field_ref() < rhs.set_field_ref();
  }
  if (!(lhs.map_field_ref() == rhs.map_field_ref())) {
    return lhs.map_field_ref() < rhs.map_field_ref();
  }
  if (!(lhs.struct_field_ref() == rhs.struct_field_ref())) {
    return lhs.struct_field_ref() < rhs.struct_field_ref();
  }
  return false;
}

const ::std::vector<::std::int16_t>* EmptiableStruct::get_list_field() const& {
  return list_field_ref().has_value() ? std::addressof(__fbthrift_field_list_field) : nullptr;
}

::std::vector<::std::int16_t>* EmptiableStruct::get_list_field() & {
  return list_field_ref().has_value() ? std::addressof(__fbthrift_field_list_field) : nullptr;
}

const ::std::set<::std::int16_t>* EmptiableStruct::get_set_field() const& {
  return set_field_ref().has_value() ? std::addressof(__fbthrift_field_set_field) : nullptr;
}

::std::set<::std::int16_t>* EmptiableStruct::get_set_field() & {
  return set_field_ref().has_value() ? std::addressof(__fbthrift_field_set_field) : nullptr;
}

const ::std::map<::std::int16_t, ::std::int16_t>* EmptiableStruct::get_map_field() const& {
  return map_field_ref().has_value() ? std::addressof(__fbthrift_field_map_field) : nullptr;
}

::std::map<::std::int16_t, ::std::int16_t>* EmptiableStruct::get_map_field() & {
  return map_field_ref().has_value() ? std::addressof(__fbthrift_field_map_field) : nullptr;
}

const ::apache::thrift::test::MyStruct* EmptiableStruct::get_struct_field() const& {
  return struct_field_ref().has_value() ? std::addressof(__fbthrift_field_struct_field) : nullptr;
}

::apache::thrift::test::MyStruct* EmptiableStruct::get_struct_field() & {
  return struct_field_ref().has_value() ? std::addressof(__fbthrift_field_struct_field) : nullptr;
}


void swap(EmptiableStruct& a, EmptiableStruct& b) {
  using ::std::swap;
  swap(a.bool_field_ref().value_unchecked(), b.bool_field_ref().value_unchecked());
  swap(a.byte_field_ref().value_unchecked(), b.byte_field_ref().value_unchecked());
  swap(a.short_field_ref().value_unchecked(), b.short_field_ref().value_unchecked());
  swap(a.int_field_ref().value_unchecked(), b.int_field_ref().value_unchecked());
  swap(a.long_field_ref().value_unchecked(), b.long_field_ref().value_unchecked());
  swap(a.float_field_ref().value_unchecked(), b.float_field_ref().value_unchecked());
  swap(a.double_field_ref().value_unchecked(), b.double_field_ref().value_unchecked());
  swap(a.string_field_ref().value_unchecked(), b.string_field_ref().value_unchecked());
  swap(a.binary_field_ref().value_unchecked(), b.binary_field_ref().value_unchecked());
  swap(a.MyEnum_ref().value_unchecked(), b.MyEnum_ref().value_unchecked());
  swap(a.list_field_ref().value_unchecked(), b.list_field_ref().value_unchecked());
  swap(a.set_field_ref().value_unchecked(), b.set_field_ref().value_unchecked());
  swap(a.map_field_ref().value_unchecked(), b.map_field_ref().value_unchecked());
  swap(a.struct_field_ref().value_unchecked(), b.struct_field_ref().value_unchecked());
  swap(a.__isset, b.__isset);
}

template void EmptiableStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t EmptiableStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t EmptiableStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t EmptiableStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void EmptiableStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t EmptiableStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t EmptiableStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t EmptiableStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        EmptiableStruct,
        ::apache::thrift::type_class::structure,
        ::apache::thrift::test::MyStruct>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        EmptiableStruct,
        ::apache::thrift::type_class::structure,
        ::apache::thrift::test::MyStruct>,
    "inconsistent use of nimble option");

}}} // apache::thrift::test

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::NotEmptiableStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::NotEmptiableStruct>;
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

namespace apache { namespace thrift { namespace test {

NotEmptiableStruct::NotEmptiableStruct(const NotEmptiableStruct&) = default;
NotEmptiableStruct& NotEmptiableStruct::operator=(const NotEmptiableStruct&) = default;
NotEmptiableStruct::NotEmptiableStruct() :
      __fbthrift_field_bool_field(),
      __fbthrift_field_byte_field(),
      __fbthrift_field_short_field(),
      __fbthrift_field_int_field(),
      __fbthrift_field_long_field(),
      __fbthrift_field_float_field(),
      __fbthrift_field_double_field(),
      __fbthrift_field_MyEnum() {
}


NotEmptiableStruct::~NotEmptiableStruct() {}

NotEmptiableStruct::NotEmptiableStruct(NotEmptiableStruct&& other) noexcept  :
    __fbthrift_field_bool_field(std::move(other.__fbthrift_field_bool_field)),
    __fbthrift_field_byte_field(std::move(other.__fbthrift_field_byte_field)),
    __fbthrift_field_short_field(std::move(other.__fbthrift_field_short_field)),
    __fbthrift_field_int_field(std::move(other.__fbthrift_field_int_field)),
    __fbthrift_field_long_field(std::move(other.__fbthrift_field_long_field)),
    __fbthrift_field_float_field(std::move(other.__fbthrift_field_float_field)),
    __fbthrift_field_double_field(std::move(other.__fbthrift_field_double_field)),
    __fbthrift_field_string_field(std::move(other.__fbthrift_field_string_field)),
    __fbthrift_field_binary_field(std::move(other.__fbthrift_field_binary_field)),
    __fbthrift_field_MyEnum(std::move(other.__fbthrift_field_MyEnum)),
    __fbthrift_field_list_field(std::move(other.__fbthrift_field_list_field)),
    __fbthrift_field_set_field(std::move(other.__fbthrift_field_set_field)),
    __fbthrift_field_map_field(std::move(other.__fbthrift_field_map_field)),
    __fbthrift_field_struct_field(std::move(other.__fbthrift_field_struct_field)),
    __isset(other.__isset) {
}

NotEmptiableStruct& NotEmptiableStruct::operator=(FOLLY_MAYBE_UNUSED NotEmptiableStruct&& other) noexcept {
    this->__fbthrift_field_bool_field = std::move(other.__fbthrift_field_bool_field);
    this->__fbthrift_field_byte_field = std::move(other.__fbthrift_field_byte_field);
    this->__fbthrift_field_short_field = std::move(other.__fbthrift_field_short_field);
    this->__fbthrift_field_int_field = std::move(other.__fbthrift_field_int_field);
    this->__fbthrift_field_long_field = std::move(other.__fbthrift_field_long_field);
    this->__fbthrift_field_float_field = std::move(other.__fbthrift_field_float_field);
    this->__fbthrift_field_double_field = std::move(other.__fbthrift_field_double_field);
    this->__fbthrift_field_string_field = std::move(other.__fbthrift_field_string_field);
    this->__fbthrift_field_binary_field = std::move(other.__fbthrift_field_binary_field);
    this->__fbthrift_field_MyEnum = std::move(other.__fbthrift_field_MyEnum);
    this->__fbthrift_field_list_field = std::move(other.__fbthrift_field_list_field);
    this->__fbthrift_field_set_field = std::move(other.__fbthrift_field_set_field);
    this->__fbthrift_field_map_field = std::move(other.__fbthrift_field_map_field);
    this->__fbthrift_field_struct_field = std::move(other.__fbthrift_field_struct_field);
    __isset = other.__isset;
    return *this;
}


NotEmptiableStruct::NotEmptiableStruct(apache::thrift::FragileConstructor, bool bool_field__arg, ::std::int8_t byte_field__arg, ::std::int16_t short_field__arg, ::std::int32_t int_field__arg, ::std::int64_t long_field__arg, float float_field__arg, double double_field__arg, ::std::string string_field__arg, ::std::string binary_field__arg, ::apache::thrift::test::MyEnum MyEnum__arg, ::std::vector<::std::int16_t> list_field__arg, ::std::set<::std::int16_t> set_field__arg, ::std::map<::std::int16_t, ::std::int16_t> map_field__arg, ::apache::thrift::test::MyStruct struct_field__arg) :
    __fbthrift_field_bool_field(std::move(bool_field__arg)),
    __fbthrift_field_byte_field(std::move(byte_field__arg)),
    __fbthrift_field_short_field(std::move(short_field__arg)),
    __fbthrift_field_int_field(std::move(int_field__arg)),
    __fbthrift_field_long_field(std::move(long_field__arg)),
    __fbthrift_field_float_field(std::move(float_field__arg)),
    __fbthrift_field_double_field(std::move(double_field__arg)),
    __fbthrift_field_string_field(std::move(string_field__arg)),
    __fbthrift_field_binary_field(std::move(binary_field__arg)),
    __fbthrift_field_MyEnum(std::move(MyEnum__arg)),
    __fbthrift_field_list_field(std::move(list_field__arg)),
    __fbthrift_field_set_field(std::move(set_field__arg)),
    __fbthrift_field_map_field(std::move(map_field__arg)),
    __fbthrift_field_struct_field(std::move(struct_field__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
  __isset.set(folly::index_constant<4>(), true);
  __isset.set(folly::index_constant<5>(), true);
  __isset.set(folly::index_constant<6>(), true);
  __isset.set(folly::index_constant<7>(), true);
  __isset.set(folly::index_constant<8>(), true);
  __isset.set(folly::index_constant<9>(), true);
  __isset.set(folly::index_constant<10>(), true);
  __isset.set(folly::index_constant<11>(), true);
  __isset.set(folly::index_constant<12>(), true);
  __isset.set(folly::index_constant<13>(), true);
}


void NotEmptiableStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_bool_field = bool();
  this->__fbthrift_field_byte_field = ::std::int8_t();
  this->__fbthrift_field_short_field = ::std::int16_t();
  this->__fbthrift_field_int_field = ::std::int32_t();
  this->__fbthrift_field_long_field = ::std::int64_t();
  this->__fbthrift_field_float_field = float();
  this->__fbthrift_field_double_field = double();
  this->__fbthrift_field_string_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_binary_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_MyEnum = ::apache::thrift::test::MyEnum();
  this->__fbthrift_field_list_field.clear();
  this->__fbthrift_field_set_field.clear();
  this->__fbthrift_field_map_field.clear();
  __isset = {};
}

bool NotEmptiableStruct::__fbthrift_is_empty() const {
  return false;
}

bool NotEmptiableStruct::operator==(const NotEmptiableStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.bool_field_ref() == rhs.bool_field_ref())) {
    return false;
  }
  if (!(lhs.byte_field_ref() == rhs.byte_field_ref())) {
    return false;
  }
  if (!(lhs.short_field_ref() == rhs.short_field_ref())) {
    return false;
  }
  if (!(lhs.int_field_ref() == rhs.int_field_ref())) {
    return false;
  }
  if (!(lhs.long_field_ref() == rhs.long_field_ref())) {
    return false;
  }
  if (!(lhs.float_field_ref() == rhs.float_field_ref())) {
    return false;
  }
  if (!(lhs.double_field_ref() == rhs.double_field_ref())) {
    return false;
  }
  if (!(lhs.string_field_ref() == rhs.string_field_ref())) {
    return false;
  }
  if (lhs.binary_field_ref().has_value() != rhs.binary_field_ref().has_value() || (lhs.binary_field_ref().has_value() && !apache::thrift::StringTraits<std::string>::isEqual(lhs.__fbthrift_field_binary_field, rhs.__fbthrift_field_binary_field))) {
    return false;
  }
  if (!(lhs.MyEnum_ref() == rhs.MyEnum_ref())) {
    return false;
  }
  if (!(lhs.list_field_ref() == rhs.list_field_ref())) {
    return false;
  }
  if (!(lhs.set_field_ref() == rhs.set_field_ref())) {
    return false;
  }
  if (!(lhs.map_field_ref() == rhs.map_field_ref())) {
    return false;
  }
  if (!(lhs.struct_field_ref() == rhs.struct_field_ref())) {
    return false;
  }
  return true;
}

bool NotEmptiableStruct::operator<(const NotEmptiableStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.bool_field_ref() == rhs.bool_field_ref())) {
    return lhs.bool_field_ref() < rhs.bool_field_ref();
  }
  if (!(lhs.byte_field_ref() == rhs.byte_field_ref())) {
    return lhs.byte_field_ref() < rhs.byte_field_ref();
  }
  if (!(lhs.short_field_ref() == rhs.short_field_ref())) {
    return lhs.short_field_ref() < rhs.short_field_ref();
  }
  if (!(lhs.int_field_ref() == rhs.int_field_ref())) {
    return lhs.int_field_ref() < rhs.int_field_ref();
  }
  if (!(lhs.long_field_ref() == rhs.long_field_ref())) {
    return lhs.long_field_ref() < rhs.long_field_ref();
  }
  if (!(lhs.float_field_ref() == rhs.float_field_ref())) {
    return lhs.float_field_ref() < rhs.float_field_ref();
  }
  if (!(lhs.double_field_ref() == rhs.double_field_ref())) {
    return lhs.double_field_ref() < rhs.double_field_ref();
  }
  if (!(lhs.string_field_ref() == rhs.string_field_ref())) {
    return lhs.string_field_ref() < rhs.string_field_ref();
  }
  if (lhs.binary_field_ref().has_value() != rhs.binary_field_ref().has_value() || (lhs.binary_field_ref().has_value() && !apache::thrift::StringTraits<std::string>::isEqual(lhs.__fbthrift_field_binary_field, rhs.__fbthrift_field_binary_field))) {
    return !lhs.binary_field_ref().has_value() || (rhs.binary_field_ref().has_value() && apache::thrift::StringTraits<std::string>::isLess(lhs.__fbthrift_field_binary_field, rhs.__fbthrift_field_binary_field));
  }
  if (!(lhs.MyEnum_ref() == rhs.MyEnum_ref())) {
    return lhs.MyEnum_ref() < rhs.MyEnum_ref();
  }
  if (!(lhs.list_field_ref() == rhs.list_field_ref())) {
    return lhs.list_field_ref() < rhs.list_field_ref();
  }
  if (!(lhs.set_field_ref() == rhs.set_field_ref())) {
    return lhs.set_field_ref() < rhs.set_field_ref();
  }
  if (!(lhs.map_field_ref() == rhs.map_field_ref())) {
    return lhs.map_field_ref() < rhs.map_field_ref();
  }
  if (!(lhs.struct_field_ref() == rhs.struct_field_ref())) {
    return lhs.struct_field_ref() < rhs.struct_field_ref();
  }
  return false;
}

const ::std::vector<::std::int16_t>* NotEmptiableStruct::get_list_field() const& {
  return list_field_ref().has_value() ? std::addressof(__fbthrift_field_list_field) : nullptr;
}

::std::vector<::std::int16_t>* NotEmptiableStruct::get_list_field() & {
  return list_field_ref().has_value() ? std::addressof(__fbthrift_field_list_field) : nullptr;
}

const ::std::set<::std::int16_t>* NotEmptiableStruct::get_set_field() const& {
  return set_field_ref().has_value() ? std::addressof(__fbthrift_field_set_field) : nullptr;
}

::std::set<::std::int16_t>* NotEmptiableStruct::get_set_field() & {
  return set_field_ref().has_value() ? std::addressof(__fbthrift_field_set_field) : nullptr;
}

const ::std::map<::std::int16_t, ::std::int16_t>* NotEmptiableStruct::get_map_field() const& {
  return map_field_ref().has_value() ? std::addressof(__fbthrift_field_map_field) : nullptr;
}

::std::map<::std::int16_t, ::std::int16_t>* NotEmptiableStruct::get_map_field() & {
  return map_field_ref().has_value() ? std::addressof(__fbthrift_field_map_field) : nullptr;
}

const ::apache::thrift::test::MyStruct* NotEmptiableStruct::get_struct_field() const& {
  return struct_field_ref().has_value() ? std::addressof(__fbthrift_field_struct_field) : nullptr;
}

::apache::thrift::test::MyStruct* NotEmptiableStruct::get_struct_field() & {
  return struct_field_ref().has_value() ? std::addressof(__fbthrift_field_struct_field) : nullptr;
}


void swap(NotEmptiableStruct& a, NotEmptiableStruct& b) {
  using ::std::swap;
  swap(a.bool_field_ref().value(), b.bool_field_ref().value());
  swap(a.byte_field_ref().value_unchecked(), b.byte_field_ref().value_unchecked());
  swap(a.short_field_ref().value_unchecked(), b.short_field_ref().value_unchecked());
  swap(a.int_field_ref().value_unchecked(), b.int_field_ref().value_unchecked());
  swap(a.long_field_ref().value_unchecked(), b.long_field_ref().value_unchecked());
  swap(a.float_field_ref().value_unchecked(), b.float_field_ref().value_unchecked());
  swap(a.double_field_ref().value_unchecked(), b.double_field_ref().value_unchecked());
  swap(a.string_field_ref().value_unchecked(), b.string_field_ref().value_unchecked());
  swap(a.binary_field_ref().value_unchecked(), b.binary_field_ref().value_unchecked());
  swap(a.MyEnum_ref().value_unchecked(), b.MyEnum_ref().value_unchecked());
  swap(a.list_field_ref().value_unchecked(), b.list_field_ref().value_unchecked());
  swap(a.set_field_ref().value_unchecked(), b.set_field_ref().value_unchecked());
  swap(a.map_field_ref().value_unchecked(), b.map_field_ref().value_unchecked());
  swap(a.struct_field_ref().value_unchecked(), b.struct_field_ref().value_unchecked());
  swap(a.__isset, b.__isset);
}

template void NotEmptiableStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t NotEmptiableStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t NotEmptiableStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t NotEmptiableStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void NotEmptiableStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t NotEmptiableStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t NotEmptiableStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t NotEmptiableStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        NotEmptiableStruct,
        ::apache::thrift::type_class::structure,
        ::apache::thrift::test::MyStruct>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        NotEmptiableStruct,
        ::apache::thrift::type_class::structure,
        ::apache::thrift::test::MyStruct>,
    "inconsistent use of nimble option");

}}} // apache::thrift::test

namespace apache { namespace thrift { namespace test { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}}}} // apache::thrift::test
