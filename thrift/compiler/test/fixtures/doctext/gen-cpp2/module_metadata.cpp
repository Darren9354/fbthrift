/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_metadata.h"

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

void EnumMetadata<::cpp2::B>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.B", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "module.B";
  using EnumTraits = TEnumTraits<::cpp2::B>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements.emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i]);
  }
}

void StructMetadata<::cpp2::A>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.A", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_A = res.first->second;
  module_A.name = "module.A";
  module_A.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_A_fields[] = {
    std::make_tuple(1, "useless_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
  };
  for (const auto& f : module_A_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    module_A.fields.push_back(std::move(field));
  }
}

void ServiceMetadata<::cpp2::CSvIf>::gen_f(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "f";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  service.functions.push_back(std::move(func));
}

void ServiceMetadata<::cpp2::CSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_C;
  module_C.name = "module.C";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::CSvIf>::gen_f,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_C);
  }
  context.set_service_info(std::move(module_C));
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.set_name("module");
  context.set_module(std::move(module));
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
