/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);

void EnumMetadata<::a::different::ns::AnEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("includes.AnEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "includes.AnEnum";
  using EnumTraits = TEnumTraits<::a::different::ns::AnEnum>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements.emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i]);
  }
}

void StructMetadata<::a::different::ns::AStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("includes.AStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& includes_AStruct = res.first->second;
  includes_AStruct.name = "includes.AStruct";
  includes_AStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  includes_AStruct_fields[] = {
    std::make_tuple(1, "FieldA", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
  };
  for (const auto& f : includes_AStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    includes_AStruct.fields.push_back(std::move(field));
  }
}
void StructMetadata<::a::different::ns::AStructB>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("includes.AStructB", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& includes_AStructB = res.first->second;
  includes_AStructB.name = "includes.AStructB";
  includes_AStructB.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  includes_AStructB_fields[] = {
    std::make_tuple(1, "FieldA", false, std::make_unique<Struct< ::a::different::ns::AStruct>>("includes.AStruct")),
  };
  for (const auto& f : includes_AStructB_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    includes_AStructB.fields.push_back(std::move(field));
  }
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
