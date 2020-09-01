#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.bytes cimport PyBytes_AsStringAndSize
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from libcpp.utility cimport move as cmove
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.types cimport (
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    constant_shared_ptr,
    default_inst,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
)
cimport thrift.py3.std_libcpp as std_libcpp
cimport thrift.py3.serializer as serializer
from thrift.py3.serializer import deserialize, serialize
import folly.iobuf as __iobuf
from folly.optional cimport cOptional

import sys
import itertools
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins

cimport module.types_reflection as _types_reflection



@__cython.auto_pickle(False)
cdef class InitialResponse(thrift.py3.types.Struct):

    def __init__(
        InitialResponse self, *,
        str content=None
    ):
        self._cpp_obj = __fbthrift_move(InitialResponse._make_instance(
          NULL,
          NULL,
          content,
        ))

    def __call__(
        InitialResponse self,
        content=__NOTSET
    ):
        ___NOTSET = __NOTSET  # Cheaper for larger structs
        cdef bint[1] __isNOTSET  # so make_instance is typed

        __fbthrift_changed = False
        if content is ___NOTSET:
            __isNOTSET[0] = True
            content = None
        else:
            __isNOTSET[0] = False
            __fbthrift_changed = True


        if not __fbthrift_changed:
            return self

        if content is not None:
            if not isinstance(content, str):
                raise TypeError(f'content is not a { str !r}.')

        __fbthrift_inst = <InitialResponse>InitialResponse.__new__(InitialResponse)
        __fbthrift_inst._cpp_obj = __fbthrift_move(InitialResponse._make_instance(
          self._cpp_obj.get(),
          __isNOTSET,
          content,
        ))
        return __fbthrift_inst

    @staticmethod
    cdef unique_ptr[cInitialResponse] _make_instance(
        cInitialResponse* base_instance,
        bint* __isNOTSET,
        str content 
    ) except *:
        cdef unique_ptr[cInitialResponse] c_inst
        if base_instance:
            c_inst = make_unique[cInitialResponse](deref(base_instance))
        else:
            c_inst = make_unique[cInitialResponse]()

        if base_instance:
            # Convert None's to default value. (or unset)
            if not __isNOTSET[0] and content is None:
                deref(c_inst).content_ref().assign(default_inst[cInitialResponse]().content_ref().value())
                deref(c_inst).__isset.content = False
                pass

        if content is not None:
            deref(c_inst).content_ref().assign(thrift.py3.types.move(thrift.py3.types.bytes_to_string(content.encode('utf-8'))))
            deref(c_inst).__isset.content = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return __fbthrift_move_unique(c_inst)

    cdef object __fbthrift_isset(self):
        cpp_obj = deref(self._cpp_obj)
        return thrift.py3.types._IsSet("InitialResponse", {
          "content": cpp_obj.content_ref().has_value(),
        })

    def __iter__(self):
        yield 'content', self.content

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cInitialResponse] cpp_obj):
        __fbthrift_inst = <InitialResponse>InitialResponse.__new__(InitialResponse)
        __fbthrift_inst._cpp_obj = __fbthrift_move_shared(cpp_obj)
        return __fbthrift_inst

    @property
    def content(self):

        return (<bytes>deref(self._cpp_obj).content_ref().value()).decode('UTF-8')


    def __hash__(InitialResponse self):
        if not self.__hash:
            self.__hash = hash((
            self.content,
            ))
        return self.__hash

    def __repr__(InitialResponse self):
        return f'InitialResponse(content={repr(self.content)})'
    def __copy__(InitialResponse self):
        cdef shared_ptr[cInitialResponse] cpp_obj = make_shared[cInitialResponse](
            deref(self._cpp_obj)
        )
        return InitialResponse.create(__fbthrift_move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, InitialResponse) and
                isinstance(other, InitialResponse)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cInitialResponse* cself = (<InitialResponse>self)._cpp_obj.get()
        cdef cInitialResponse* cother = (<InitialResponse>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__InitialResponse()

    cdef __iobuf.IOBuf _serialize(InitialResponse self, __Protocol proto):
        cdef __iobuf.cIOBufQueue queue = __iobuf.cIOBufQueue(__iobuf.cacheChainLength())
        cdef cInitialResponse* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                serializer.CompactSerialize[cInitialResponse](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                serializer.BinarySerialize[cInitialResponse](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                serializer.JSONSerialize[cInitialResponse](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                serializer.CompactJSONSerialize[cInitialResponse](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        return __iobuf.from_unique_ptr(queue.move())

    cdef cuint32_t _deserialize(InitialResponse self, const __iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cInitialResponse]()
        cdef cInitialResponse* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                needed = serializer.CompactDeserialize[cInitialResponse](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                needed = serializer.BinaryDeserialize[cInitialResponse](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                needed = serializer.JSONDeserialize[cInitialResponse](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                needed = serializer.CompactJSONDeserialize[cInitialResponse](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        return needed

    def __reduce__(self):
        return (deserialize, (InitialResponse, serialize(self)))


@__cython.auto_pickle(False)
cdef class FinalResponse(thrift.py3.types.Struct):

    def __init__(
        FinalResponse self, *,
        str content=None
    ):
        self._cpp_obj = __fbthrift_move(FinalResponse._make_instance(
          NULL,
          NULL,
          content,
        ))

    def __call__(
        FinalResponse self,
        content=__NOTSET
    ):
        ___NOTSET = __NOTSET  # Cheaper for larger structs
        cdef bint[1] __isNOTSET  # so make_instance is typed

        __fbthrift_changed = False
        if content is ___NOTSET:
            __isNOTSET[0] = True
            content = None
        else:
            __isNOTSET[0] = False
            __fbthrift_changed = True


        if not __fbthrift_changed:
            return self

        if content is not None:
            if not isinstance(content, str):
                raise TypeError(f'content is not a { str !r}.')

        __fbthrift_inst = <FinalResponse>FinalResponse.__new__(FinalResponse)
        __fbthrift_inst._cpp_obj = __fbthrift_move(FinalResponse._make_instance(
          self._cpp_obj.get(),
          __isNOTSET,
          content,
        ))
        return __fbthrift_inst

    @staticmethod
    cdef unique_ptr[cFinalResponse] _make_instance(
        cFinalResponse* base_instance,
        bint* __isNOTSET,
        str content 
    ) except *:
        cdef unique_ptr[cFinalResponse] c_inst
        if base_instance:
            c_inst = make_unique[cFinalResponse](deref(base_instance))
        else:
            c_inst = make_unique[cFinalResponse]()

        if base_instance:
            # Convert None's to default value. (or unset)
            if not __isNOTSET[0] and content is None:
                deref(c_inst).content_ref().assign(default_inst[cFinalResponse]().content_ref().value())
                deref(c_inst).__isset.content = False
                pass

        if content is not None:
            deref(c_inst).content_ref().assign(thrift.py3.types.move(thrift.py3.types.bytes_to_string(content.encode('utf-8'))))
            deref(c_inst).__isset.content = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return __fbthrift_move_unique(c_inst)

    cdef object __fbthrift_isset(self):
        cpp_obj = deref(self._cpp_obj)
        return thrift.py3.types._IsSet("FinalResponse", {
          "content": cpp_obj.content_ref().has_value(),
        })

    def __iter__(self):
        yield 'content', self.content

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cFinalResponse] cpp_obj):
        __fbthrift_inst = <FinalResponse>FinalResponse.__new__(FinalResponse)
        __fbthrift_inst._cpp_obj = __fbthrift_move_shared(cpp_obj)
        return __fbthrift_inst

    @property
    def content(self):

        return (<bytes>deref(self._cpp_obj).content_ref().value()).decode('UTF-8')


    def __hash__(FinalResponse self):
        if not self.__hash:
            self.__hash = hash((
            self.content,
            ))
        return self.__hash

    def __repr__(FinalResponse self):
        return f'FinalResponse(content={repr(self.content)})'
    def __copy__(FinalResponse self):
        cdef shared_ptr[cFinalResponse] cpp_obj = make_shared[cFinalResponse](
            deref(self._cpp_obj)
        )
        return FinalResponse.create(__fbthrift_move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, FinalResponse) and
                isinstance(other, FinalResponse)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cFinalResponse* cself = (<FinalResponse>self)._cpp_obj.get()
        cdef cFinalResponse* cother = (<FinalResponse>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__FinalResponse()

    cdef __iobuf.IOBuf _serialize(FinalResponse self, __Protocol proto):
        cdef __iobuf.cIOBufQueue queue = __iobuf.cIOBufQueue(__iobuf.cacheChainLength())
        cdef cFinalResponse* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                serializer.CompactSerialize[cFinalResponse](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                serializer.BinarySerialize[cFinalResponse](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                serializer.JSONSerialize[cFinalResponse](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                serializer.CompactJSONSerialize[cFinalResponse](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        return __iobuf.from_unique_ptr(queue.move())

    cdef cuint32_t _deserialize(FinalResponse self, const __iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cFinalResponse]()
        cdef cFinalResponse* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                needed = serializer.CompactDeserialize[cFinalResponse](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                needed = serializer.BinaryDeserialize[cFinalResponse](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                needed = serializer.JSONDeserialize[cFinalResponse](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                needed = serializer.CompactJSONDeserialize[cFinalResponse](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        return needed

    def __reduce__(self):
        return (deserialize, (FinalResponse, serialize(self)))


@__cython.auto_pickle(False)
cdef class SinkPayload(thrift.py3.types.Struct):

    def __init__(
        SinkPayload self, *,
        str content=None
    ):
        self._cpp_obj = __fbthrift_move(SinkPayload._make_instance(
          NULL,
          NULL,
          content,
        ))

    def __call__(
        SinkPayload self,
        content=__NOTSET
    ):
        ___NOTSET = __NOTSET  # Cheaper for larger structs
        cdef bint[1] __isNOTSET  # so make_instance is typed

        __fbthrift_changed = False
        if content is ___NOTSET:
            __isNOTSET[0] = True
            content = None
        else:
            __isNOTSET[0] = False
            __fbthrift_changed = True


        if not __fbthrift_changed:
            return self

        if content is not None:
            if not isinstance(content, str):
                raise TypeError(f'content is not a { str !r}.')

        __fbthrift_inst = <SinkPayload>SinkPayload.__new__(SinkPayload)
        __fbthrift_inst._cpp_obj = __fbthrift_move(SinkPayload._make_instance(
          self._cpp_obj.get(),
          __isNOTSET,
          content,
        ))
        return __fbthrift_inst

    @staticmethod
    cdef unique_ptr[cSinkPayload] _make_instance(
        cSinkPayload* base_instance,
        bint* __isNOTSET,
        str content 
    ) except *:
        cdef unique_ptr[cSinkPayload] c_inst
        if base_instance:
            c_inst = make_unique[cSinkPayload](deref(base_instance))
        else:
            c_inst = make_unique[cSinkPayload]()

        if base_instance:
            # Convert None's to default value. (or unset)
            if not __isNOTSET[0] and content is None:
                deref(c_inst).content_ref().assign(default_inst[cSinkPayload]().content_ref().value())
                deref(c_inst).__isset.content = False
                pass

        if content is not None:
            deref(c_inst).content_ref().assign(thrift.py3.types.move(thrift.py3.types.bytes_to_string(content.encode('utf-8'))))
            deref(c_inst).__isset.content = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return __fbthrift_move_unique(c_inst)

    cdef object __fbthrift_isset(self):
        cpp_obj = deref(self._cpp_obj)
        return thrift.py3.types._IsSet("SinkPayload", {
          "content": cpp_obj.content_ref().has_value(),
        })

    def __iter__(self):
        yield 'content', self.content

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cSinkPayload] cpp_obj):
        __fbthrift_inst = <SinkPayload>SinkPayload.__new__(SinkPayload)
        __fbthrift_inst._cpp_obj = __fbthrift_move_shared(cpp_obj)
        return __fbthrift_inst

    @property
    def content(self):

        return (<bytes>deref(self._cpp_obj).content_ref().value()).decode('UTF-8')


    def __hash__(SinkPayload self):
        if not self.__hash:
            self.__hash = hash((
            self.content,
            ))
        return self.__hash

    def __repr__(SinkPayload self):
        return f'SinkPayload(content={repr(self.content)})'
    def __copy__(SinkPayload self):
        cdef shared_ptr[cSinkPayload] cpp_obj = make_shared[cSinkPayload](
            deref(self._cpp_obj)
        )
        return SinkPayload.create(__fbthrift_move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, SinkPayload) and
                isinstance(other, SinkPayload)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cSinkPayload* cself = (<SinkPayload>self)._cpp_obj.get()
        cdef cSinkPayload* cother = (<SinkPayload>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__SinkPayload()

    cdef __iobuf.IOBuf _serialize(SinkPayload self, __Protocol proto):
        cdef __iobuf.cIOBufQueue queue = __iobuf.cIOBufQueue(__iobuf.cacheChainLength())
        cdef cSinkPayload* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                serializer.CompactSerialize[cSinkPayload](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                serializer.BinarySerialize[cSinkPayload](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                serializer.JSONSerialize[cSinkPayload](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                serializer.CompactJSONSerialize[cSinkPayload](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        return __iobuf.from_unique_ptr(queue.move())

    cdef cuint32_t _deserialize(SinkPayload self, const __iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cSinkPayload]()
        cdef cSinkPayload* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                needed = serializer.CompactDeserialize[cSinkPayload](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                needed = serializer.BinaryDeserialize[cSinkPayload](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                needed = serializer.JSONDeserialize[cSinkPayload](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                needed = serializer.CompactJSONDeserialize[cSinkPayload](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        return needed

    def __reduce__(self):
        return (deserialize, (SinkPayload, serialize(self)))


@__cython.auto_pickle(False)
cdef class CompatibleWithKeywordSink(thrift.py3.types.Struct):

    def __init__(
        CompatibleWithKeywordSink self, *,
        str sink=None
    ):
        self._cpp_obj = __fbthrift_move(CompatibleWithKeywordSink._make_instance(
          NULL,
          NULL,
          sink,
        ))

    def __call__(
        CompatibleWithKeywordSink self,
        sink=__NOTSET
    ):
        ___NOTSET = __NOTSET  # Cheaper for larger structs
        cdef bint[1] __isNOTSET  # so make_instance is typed

        __fbthrift_changed = False
        if sink is ___NOTSET:
            __isNOTSET[0] = True
            sink = None
        else:
            __isNOTSET[0] = False
            __fbthrift_changed = True


        if not __fbthrift_changed:
            return self

        if sink is not None:
            if not isinstance(sink, str):
                raise TypeError(f'sink is not a { str !r}.')

        __fbthrift_inst = <CompatibleWithKeywordSink>CompatibleWithKeywordSink.__new__(CompatibleWithKeywordSink)
        __fbthrift_inst._cpp_obj = __fbthrift_move(CompatibleWithKeywordSink._make_instance(
          self._cpp_obj.get(),
          __isNOTSET,
          sink,
        ))
        return __fbthrift_inst

    @staticmethod
    cdef unique_ptr[cCompatibleWithKeywordSink] _make_instance(
        cCompatibleWithKeywordSink* base_instance,
        bint* __isNOTSET,
        str sink 
    ) except *:
        cdef unique_ptr[cCompatibleWithKeywordSink] c_inst
        if base_instance:
            c_inst = make_unique[cCompatibleWithKeywordSink](deref(base_instance))
        else:
            c_inst = make_unique[cCompatibleWithKeywordSink]()

        if base_instance:
            # Convert None's to default value. (or unset)
            if not __isNOTSET[0] and sink is None:
                deref(c_inst).sink_ref().assign(default_inst[cCompatibleWithKeywordSink]().sink_ref().value())
                deref(c_inst).__isset.sink = False
                pass

        if sink is not None:
            deref(c_inst).sink_ref().assign(thrift.py3.types.move(thrift.py3.types.bytes_to_string(sink.encode('utf-8'))))
            deref(c_inst).__isset.sink = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return __fbthrift_move_unique(c_inst)

    cdef object __fbthrift_isset(self):
        cpp_obj = deref(self._cpp_obj)
        return thrift.py3.types._IsSet("CompatibleWithKeywordSink", {
          "sink": cpp_obj.sink_ref().has_value(),
        })

    def __iter__(self):
        yield 'sink', self.sink

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cCompatibleWithKeywordSink] cpp_obj):
        __fbthrift_inst = <CompatibleWithKeywordSink>CompatibleWithKeywordSink.__new__(CompatibleWithKeywordSink)
        __fbthrift_inst._cpp_obj = __fbthrift_move_shared(cpp_obj)
        return __fbthrift_inst

    @property
    def sink(self):

        return (<bytes>deref(self._cpp_obj).sink_ref().value()).decode('UTF-8')


    def __hash__(CompatibleWithKeywordSink self):
        if not self.__hash:
            self.__hash = hash((
            self.sink,
            ))
        return self.__hash

    def __repr__(CompatibleWithKeywordSink self):
        return f'CompatibleWithKeywordSink(sink={repr(self.sink)})'
    def __copy__(CompatibleWithKeywordSink self):
        cdef shared_ptr[cCompatibleWithKeywordSink] cpp_obj = make_shared[cCompatibleWithKeywordSink](
            deref(self._cpp_obj)
        )
        return CompatibleWithKeywordSink.create(__fbthrift_move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, CompatibleWithKeywordSink) and
                isinstance(other, CompatibleWithKeywordSink)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cCompatibleWithKeywordSink* cself = (<CompatibleWithKeywordSink>self)._cpp_obj.get()
        cdef cCompatibleWithKeywordSink* cother = (<CompatibleWithKeywordSink>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__CompatibleWithKeywordSink()

    cdef __iobuf.IOBuf _serialize(CompatibleWithKeywordSink self, __Protocol proto):
        cdef __iobuf.cIOBufQueue queue = __iobuf.cIOBufQueue(__iobuf.cacheChainLength())
        cdef cCompatibleWithKeywordSink* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                serializer.CompactSerialize[cCompatibleWithKeywordSink](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                serializer.BinarySerialize[cCompatibleWithKeywordSink](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                serializer.JSONSerialize[cCompatibleWithKeywordSink](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                serializer.CompactJSONSerialize[cCompatibleWithKeywordSink](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        return __iobuf.from_unique_ptr(queue.move())

    cdef cuint32_t _deserialize(CompatibleWithKeywordSink self, const __iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cCompatibleWithKeywordSink]()
        cdef cCompatibleWithKeywordSink* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                needed = serializer.CompactDeserialize[cCompatibleWithKeywordSink](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                needed = serializer.BinaryDeserialize[cCompatibleWithKeywordSink](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                needed = serializer.JSONDeserialize[cCompatibleWithKeywordSink](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                needed = serializer.CompactJSONDeserialize[cCompatibleWithKeywordSink](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        return needed

    def __reduce__(self):
        return (deserialize, (CompatibleWithKeywordSink, serialize(self)))


@__cython.auto_pickle(False)
cdef class InitialException(thrift.py3.exceptions.GeneratedError):

    def __init__(
        InitialException self,
        str reason=None
    ):
        self._cpp_obj = __fbthrift_move(InitialException._make_instance(
          NULL,
          NULL,
          reason,
        ))
        _builtins.Exception.__init__(self, self.reason)


    @staticmethod
    cdef unique_ptr[cInitialException] _make_instance(
        cInitialException* base_instance,
        bint* __isNOTSET,
        str reason 
    ) except *:
        cdef unique_ptr[cInitialException] c_inst
        if base_instance:
            c_inst = make_unique[cInitialException](deref(base_instance))
        else:
            c_inst = make_unique[cInitialException]()

        if reason is not None:
            deref(c_inst).reason_ref().assign(thrift.py3.types.move(thrift.py3.types.bytes_to_string(reason.encode('utf-8'))))
            deref(c_inst).__isset.reason = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return __fbthrift_move_unique(c_inst)

    cdef object __fbthrift_isset(self):
        cpp_obj = deref(self._cpp_obj)
        return thrift.py3.types._IsSet("InitialException", {
          "reason": cpp_obj.reason_ref().has_value(),
        })

    def __iter__(self):
        yield 'reason', self.reason

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cInitialException] cpp_obj):
        __fbthrift_inst = <InitialException>InitialException.__new__(InitialException, (<bytes>deref(cpp_obj).what()).decode('utf-8'))
        __fbthrift_inst._cpp_obj = __fbthrift_move_shared(cpp_obj)
        _builtins.Exception.__init__(__fbthrift_inst, __fbthrift_inst.reason)
        return __fbthrift_inst

    @property
    def reason(self):

        return (<bytes>deref(self._cpp_obj).reason_ref().value()).decode('UTF-8')


    def __hash__(InitialException self):
        return super().__hash__()

    def __repr__(InitialException self):
        return f'InitialException(reason={repr(self.reason)})'
    def __copy__(InitialException self):
        cdef shared_ptr[cInitialException] cpp_obj = make_shared[cInitialException](
            deref(self._cpp_obj)
        )
        return InitialException.create(__fbthrift_move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, InitialException) and
                isinstance(other, InitialException)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cInitialException* cself = (<InitialException>self)._cpp_obj.get()
        cdef cInitialException* cother = (<InitialException>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__InitialException()



@__cython.auto_pickle(False)
cdef class SinkException1(thrift.py3.exceptions.GeneratedError):

    def __init__(
        SinkException1 self,
        str reason=None
    ):
        self._cpp_obj = __fbthrift_move(SinkException1._make_instance(
          NULL,
          NULL,
          reason,
        ))
        _builtins.Exception.__init__(self, self.reason)


    @staticmethod
    cdef unique_ptr[cSinkException1] _make_instance(
        cSinkException1* base_instance,
        bint* __isNOTSET,
        str reason 
    ) except *:
        cdef unique_ptr[cSinkException1] c_inst
        if base_instance:
            c_inst = make_unique[cSinkException1](deref(base_instance))
        else:
            c_inst = make_unique[cSinkException1]()

        if reason is not None:
            deref(c_inst).reason_ref().assign(thrift.py3.types.move(thrift.py3.types.bytes_to_string(reason.encode('utf-8'))))
            deref(c_inst).__isset.reason = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return __fbthrift_move_unique(c_inst)

    cdef object __fbthrift_isset(self):
        cpp_obj = deref(self._cpp_obj)
        return thrift.py3.types._IsSet("SinkException1", {
          "reason": cpp_obj.reason_ref().has_value(),
        })

    def __iter__(self):
        yield 'reason', self.reason

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cSinkException1] cpp_obj):
        __fbthrift_inst = <SinkException1>SinkException1.__new__(SinkException1, (<bytes>deref(cpp_obj).what()).decode('utf-8'))
        __fbthrift_inst._cpp_obj = __fbthrift_move_shared(cpp_obj)
        _builtins.Exception.__init__(__fbthrift_inst, __fbthrift_inst.reason)
        return __fbthrift_inst

    @property
    def reason(self):

        return (<bytes>deref(self._cpp_obj).reason_ref().value()).decode('UTF-8')


    def __hash__(SinkException1 self):
        return super().__hash__()

    def __repr__(SinkException1 self):
        return f'SinkException1(reason={repr(self.reason)})'
    def __copy__(SinkException1 self):
        cdef shared_ptr[cSinkException1] cpp_obj = make_shared[cSinkException1](
            deref(self._cpp_obj)
        )
        return SinkException1.create(__fbthrift_move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, SinkException1) and
                isinstance(other, SinkException1)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cSinkException1* cself = (<SinkException1>self)._cpp_obj.get()
        cdef cSinkException1* cother = (<SinkException1>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__SinkException1()



@__cython.auto_pickle(False)
cdef class SinkException2(thrift.py3.exceptions.GeneratedError):

    def __init__(
        SinkException2 self,
        reason=None
    ):
        if reason is not None:
            if not isinstance(reason, int):
                raise TypeError(f'reason is not a { int !r}.')
            reason = <cint64_t> reason

        self._cpp_obj = __fbthrift_move(SinkException2._make_instance(
          NULL,
          NULL,
          reason,
        ))
        _builtins.Exception.__init__(self, self.reason)


    @staticmethod
    cdef unique_ptr[cSinkException2] _make_instance(
        cSinkException2* base_instance,
        bint* __isNOTSET,
        object reason 
    ) except *:
        cdef unique_ptr[cSinkException2] c_inst
        if base_instance:
            c_inst = make_unique[cSinkException2](deref(base_instance))
        else:
            c_inst = make_unique[cSinkException2]()

        if reason is not None:
            deref(c_inst).reason_ref().assign(reason)
            deref(c_inst).__isset.reason = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return __fbthrift_move_unique(c_inst)

    cdef object __fbthrift_isset(self):
        cpp_obj = deref(self._cpp_obj)
        return thrift.py3.types._IsSet("SinkException2", {
          "reason": cpp_obj.reason_ref().has_value(),
        })

    def __iter__(self):
        yield 'reason', self.reason

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cSinkException2] cpp_obj):
        __fbthrift_inst = <SinkException2>SinkException2.__new__(SinkException2, (<bytes>deref(cpp_obj).what()).decode('utf-8'))
        __fbthrift_inst._cpp_obj = __fbthrift_move_shared(cpp_obj)
        _builtins.Exception.__init__(__fbthrift_inst, __fbthrift_inst.reason)
        return __fbthrift_inst

    @property
    def reason(self):

        return deref(self._cpp_obj).reason_ref().value()


    def __hash__(SinkException2 self):
        return super().__hash__()

    def __repr__(SinkException2 self):
        return f'SinkException2(reason={repr(self.reason)})'
    def __copy__(SinkException2 self):
        cdef shared_ptr[cSinkException2] cpp_obj = make_shared[cSinkException2](
            deref(self._cpp_obj)
        )
        return SinkException2.create(__fbthrift_move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, SinkException2) and
                isinstance(other, SinkException2)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cSinkException2* cself = (<SinkException2>self)._cpp_obj.get()
        cdef cSinkException2* cother = (<SinkException2>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__SinkException2()



