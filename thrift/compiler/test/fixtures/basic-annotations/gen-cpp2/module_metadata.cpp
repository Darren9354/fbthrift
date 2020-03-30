/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_metadata.h"

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

void EnumMetadata<::cpp2::MyEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.MyEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "module.MyEnum";
  using EnumTraits = TEnumTraits<::cpp2::MyEnum>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements.emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i]);
  }
}

void StructMetadata<::cpp2::MyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct = res.first->second;
  module_MyStruct.name = "module.MyStruct";
  module_MyStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_MyStruct_fields[] = {
    std::make_tuple(1, "major", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE)),
    std::make_tuple(2, "package", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(3, "annotation_with_quote", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(4, "class_", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : module_MyStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    module_MyStruct.fields.push_back(std::move(field));
  }
}
void StructMetadata<::cpp2::SecretStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.SecretStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SecretStruct = res.first->second;
  module_SecretStruct.name = "module.SecretStruct";
  module_SecretStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_SecretStruct_fields[] = {
    std::make_tuple(1, "id", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE)),
    std::make_tuple(2, "password", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : module_SecretStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    module_SecretStruct.fields.push_back(std::move(field));
  }
}

void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_ping(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "ping";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getRandomData(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "getRandomData";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_hasDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "hasDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_hasDataById_id_1;
  module_MyService_hasDataById_id_1.id = 1;
  module_MyService_hasDataById_id_1.name = "id";
  module_MyService_hasDataById_id_1.is_optional = false;
  auto module_MyService_hasDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_hasDataById_id_1_type->writeAndGenType(module_MyService_hasDataById_id_1.type, metadata);
  func.arguments.push_back(std::move(module_MyService_hasDataById_id_1));
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "getDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_getDataById_id_1;
  module_MyService_getDataById_id_1.id = 1;
  module_MyService_getDataById_id_1.name = "id";
  module_MyService_getDataById_id_1.is_optional = false;
  auto module_MyService_getDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_getDataById_id_1_type->writeAndGenType(module_MyService_getDataById_id_1.type, metadata);
  func.arguments.push_back(std::move(module_MyService_getDataById_id_1));
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_putDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "putDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_id_1;
  module_MyService_putDataById_id_1.id = 1;
  module_MyService_putDataById_id_1.name = "id";
  module_MyService_putDataById_id_1.is_optional = false;
  auto module_MyService_putDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_putDataById_id_1_type->writeAndGenType(module_MyService_putDataById_id_1.type, metadata);
  func.arguments.push_back(std::move(module_MyService_putDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_data_2;
  module_MyService_putDataById_data_2.id = 2;
  module_MyService_putDataById_data_2.name = "data";
  module_MyService_putDataById_data_2.is_optional = false;
  auto module_MyService_putDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyService_putDataById_data_2_type->writeAndGenType(module_MyService_putDataById_data_2.type, metadata);
  func.arguments.push_back(std::move(module_MyService_putDataById_data_2));
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_lobDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "lobDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_lobDataById_id_1;
  module_MyService_lobDataById_id_1.id = 1;
  module_MyService_lobDataById_id_1.name = "id";
  module_MyService_lobDataById_id_1.is_optional = false;
  auto module_MyService_lobDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_lobDataById_id_1_type->writeAndGenType(module_MyService_lobDataById_id_1.type, metadata);
  func.arguments.push_back(std::move(module_MyService_lobDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyService_lobDataById_data_2;
  module_MyService_lobDataById_data_2.id = 2;
  module_MyService_lobDataById_data_2.name = "data";
  module_MyService_lobDataById_data_2.is_optional = false;
  auto module_MyService_lobDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyService_lobDataById_data_2_type->writeAndGenType(module_MyService_lobDataById_data_2.type, metadata);
  func.arguments.push_back(std::move(module_MyService_lobDataById_data_2));
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_cppDoNothing(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "doNothing";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  service.functions.push_back(std::move(func));
}

void ServiceMetadata<::cpp2::MyServiceSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_MyService;
  module_MyService.name = "module.MyService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_ping,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getRandomData,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_hasDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_putDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_lobDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_cppDoNothing,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyService);
  }
  context.set_service_info(std::move(module_MyService));
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.set_name("module");
  context.set_module(std::move(module));
}
void ServiceMetadata<::cpp2::MyServicePrioParentSvIf>::gen_ping(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "ping";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServicePrioParentSvIf>::gen_pong(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "pong";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  service.functions.push_back(std::move(func));
}

void ServiceMetadata<::cpp2::MyServicePrioParentSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_MyServicePrioParent;
  module_MyServicePrioParent.name = "module.MyServicePrioParent";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::MyServicePrioParentSvIf>::gen_ping,
    ServiceMetadata<::cpp2::MyServicePrioParentSvIf>::gen_pong,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyServicePrioParent);
  }
  context.set_service_info(std::move(module_MyServicePrioParent));
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.set_name("module");
  context.set_module(std::move(module));
}
void ServiceMetadata<::cpp2::MyServicePrioChildSvIf>::gen_pang(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "pang";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  service.functions.push_back(std::move(func));
}

void ServiceMetadata<::cpp2::MyServicePrioChildSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_MyServicePrioChild;
  module_MyServicePrioChild.name = "module.MyServicePrioChild";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::MyServicePrioChildSvIf>::gen_pang,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyServicePrioChild);
  }
  module_MyServicePrioChild.set_parent("module.MyServicePrioParent");
  ThriftServiceContext module_MyServicePrioParent_parent_context;
  ServiceMetadata<::cpp2::MyServicePrioParentSvIf>::gen(metadata, module_MyServicePrioParent_parent_context);
  auto module_MyServicePrioParent_parent_name = module_MyServicePrioParent_parent_context.get_service_info().get_name();
  metadata.services.emplace(std::move(module_MyServicePrioParent_parent_name), std::move(module_MyServicePrioParent_parent_context.service_info));
  context.set_service_info(std::move(module_MyServicePrioChild));
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.set_name("module");
  context.set_module(std::move(module));
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
