#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import apache.thrift.metadata.lite_types as _fbthrift_metadata
import folly.iobuf as _fbthrift_iobuf
from thrift.python.client import (
    AsyncClient as _fbthrift_py3lite_AsyncClient,
    SyncClient as _fbthrift_py3lite_SyncClient,
    Client as _fbthrift_py3lite_Client,
)
import thrift.python.exceptions as _fbthrift_py3lite_exceptions
import thrift.python.types as _fbthrift_py3lite_types
import module.lite_types
import module.lite_metadata
import facebook.thrift.annotation.cpp.lite_types
import facebook.thrift.annotation.hack.lite_types
import facebook.thrift.annotation.python.lite_types
import facebook.thrift.annotation.thrift.lite_types


class Service(_fbthrift_py3lite_Client["Service.Async", "Service.Sync"]):
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Service"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return module.lite_metadata.gen_metadata_service_Service()

    class Async(_fbthrift_py3lite_AsyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "module.Service"

        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return module.lite_metadata.gen_metadata_service_Service()

        async def func(
            self,
            arg1: str,
            arg2: str,
            arg3: module.lite_types.Foo
        ) -> int:
            _fbthrift_resp = await self._send_request(
                "Service",
                "func",
                module.lite_types._fbthrift_Service_func_args(
                    arg1=arg1,
                    arg2=arg2,
                    arg3=arg3,),
                module.lite_types._fbthrift_Service_func_result,
            )
            # shortcut to success path for non-void returns
            if _fbthrift_resp.success is not None:
                return _fbthrift_resp.success
            raise _fbthrift_py3lite_exceptions.ApplicationError(
                _fbthrift_py3lite_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )

    class Sync(_fbthrift_py3lite_SyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "module.Service"

        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return module.lite_metadata.gen_metadata_service_Service()

        def func(
            self,
            arg1: str,
            arg2: str,
            arg3: module.lite_types.Foo
        ) -> int:
            _fbthrift_resp = self._send_request(
                "Service",
                "func",
                module.lite_types._fbthrift_Service_func_args(
                    arg1=arg1,
                    arg2=arg2,
                    arg3=arg3,),
                module.lite_types._fbthrift_Service_func_result,
            )
            # shortcut to success path for non-void returns
            if _fbthrift_resp.success is not None:
                return _fbthrift_resp.success
            raise _fbthrift_py3lite_exceptions.ApplicationError(
                _fbthrift_py3lite_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )
