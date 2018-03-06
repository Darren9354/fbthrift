/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "src/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/ProtocolReaderStructReadState.h>

namespace cpp2 {

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
void MyStruct::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_MyIntField:
  {
    iprot->readI64(this->MyIntField);
    this->__isset.MyIntField = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_MyStringField:
  {
    iprot->readString(this->MyStringField);
    this->__isset.MyStringField = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    this->translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I64)) {
        goto _readField_MyIntField;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRING)) {
        goto _readField_MyStringField;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t MyStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  xfer += prot_->serializedFieldSize("MyIntField", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->MyIntField);
  xfer += prot_->serializedFieldSize("MyStringField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->MyStringField);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  xfer += prot_->serializedFieldSize("MyIntField", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->MyIntField);
  xfer += prot_->serializedFieldSize("MyStringField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->MyStringField);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyStruct");
  xfer += prot_->writeFieldBegin("MyIntField", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->writeI64(this->MyIntField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("MyStringField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->MyStringField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
