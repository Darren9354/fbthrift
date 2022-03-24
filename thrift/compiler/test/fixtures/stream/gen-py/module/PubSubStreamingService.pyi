#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
import typing as __T

from thrift import Thrift
from thrift.protocol.TProtocol import TProtocolBase

from module.ttypes import *


class Iface:  # PubSubStreamingService

class Client(Iface, __T.ContextManager[Client]):  # PubSubStreamingService
    def __init__(self, iprot: __T.Optional[TProtocolBase], oprot: __T.Optional[TProtocolBase] = None, cpp_transport: __T.Optional[__T.TypeVar("SyncClient")] = None) -> None: ...
    def set_persistent_header(self, key: str, value: str) -> None: ...
    def get_persistent_headers(self) -> __T.Mapping[str, str]: ...
    def clear_persistent_headers(self) -> None: ...
    def set_onetime_header(self, key: str, value: str) -> None: ...

class Processor(Iface, Thrift.TProcessor):  # PubSubStreamingService
    def __init__(self, handler: Iface) -> None:
        self._handler: Iface
        self._onewayMethods: __T.Sequence[__T.Callable]
        self._processMap: __T.Dict[str, __T.Callable]

    def process_main(self, iprot: TProtocolBase, oprot: TProtocolBase, server_ctx: __T.Any = ...) -> __T.Optional[bool]: ...
    def onewayMethods(self) -> __T.Tuple[__T.Callable]: ...
