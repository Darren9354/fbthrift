#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint16_t as cuint16_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.unordered_map cimport unordered_map as cumap
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.common cimport Protocol as __Protocol
from thrift.py3.std_libcpp cimport string_view as __cstring_view
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    StructFieldsSetter as __StructFieldsSetter
)
from folly.optional cimport cOptional as __cOptional

cimport facebook.thrift.annotation.cpp.types as _facebook_thrift_annotation_cpp_types
cimport facebook.thrift.annotation.java.types as _facebook_thrift_annotation_java_types
cimport facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types

cimport apache.thrift.type.standard.types as _apache_thrift_type_standard_types



ctypedef void (*__DurationStruct_FieldsSetterFunc)(__DurationStruct_FieldsSetter, object) except *

cdef class __DurationStruct_FieldsSetter(__StructFieldsSetter):
    cdef _apache_thrift_type_standard_types.cDurationStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __DurationStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __DurationStruct_FieldsSetter _fbthrift_create(_apache_thrift_type_standard_types.cDurationStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__TimeStruct_FieldsSetterFunc)(__TimeStruct_FieldsSetter, object) except *

cdef class __TimeStruct_FieldsSetter(__StructFieldsSetter):
    cdef _apache_thrift_type_standard_types.cTimeStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __TimeStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __TimeStruct_FieldsSetter _fbthrift_create(_apache_thrift_type_standard_types.cTimeStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__FractionStruct_FieldsSetterFunc)(__FractionStruct_FieldsSetter, object) except *

cdef class __FractionStruct_FieldsSetter(__StructFieldsSetter):
    cdef _apache_thrift_type_standard_types.cFractionStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __FractionStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __FractionStruct_FieldsSetter _fbthrift_create(_apache_thrift_type_standard_types.cFractionStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__UriStruct_FieldsSetterFunc)(__UriStruct_FieldsSetter, object) except *

cdef class __UriStruct_FieldsSetter(__StructFieldsSetter):
    cdef _apache_thrift_type_standard_types.cUriStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __UriStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __UriStruct_FieldsSetter _fbthrift_create(_apache_thrift_type_standard_types.cUriStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *
    cdef void _set_field_3(self, _fbthrift_value) except *
    cdef void _set_field_4(self, _fbthrift_value) except *

