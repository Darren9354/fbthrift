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
import test.namespace_from_package_without_module_name.module.lite_types
import test.namespace_from_package_without_module_name.module.lite_metadata


class TestService(_fbthrift_py3lite_Client["TestService.Async", "TestService.Sync"]):
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.TestService"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return test.namespace_from_package_without_module_name.module.lite_metadata.gen_metadata_service_TestService()

    class Async(_fbthrift_py3lite_AsyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "module.TestService"

        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return test.namespace_from_package_without_module_name.module.lite_metadata.gen_metadata_service_TestService()

        async def init(
            self,
            int1: int
        ) -> int:
            _fbthrift_resp = await self._send_request(
                "TestService",
                "init",
                test.namespace_from_package_without_module_name.module.lite_types._fbthrift_TestService_init_args(
                    int1=int1,),
                test.namespace_from_package_without_module_name.module.lite_types._fbthrift_TestService_init_result,
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
            return "module.TestService"

        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return test.namespace_from_package_without_module_name.module.lite_metadata.gen_metadata_service_TestService()

        def init(
            self,
            int1: int
        ) -> int:
            _fbthrift_resp = self._send_request(
                "TestService",
                "init",
                test.namespace_from_package_without_module_name.module.lite_types._fbthrift_TestService_init_args(
                    int1=int1,),
                test.namespace_from_package_without_module_name.module.lite_types._fbthrift_TestService_init_result,
            )
            # shortcut to success path for non-void returns
            if _fbthrift_resp.success is not None:
                return _fbthrift_resp.success
            raise _fbthrift_py3lite_exceptions.ApplicationError(
                _fbthrift_py3lite_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )
