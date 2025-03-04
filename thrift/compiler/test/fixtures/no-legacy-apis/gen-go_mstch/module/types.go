// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]

import (
  "fmt"

  thrift0 "thrift/annotation/thrift"
  "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

var _ = thrift0.GoUnusedProtection__

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = thrift.ZERO


type MyEnum int32

const (
    MyEnum_MyValue1 MyEnum = 0
    MyEnum_MyValue2 MyEnum = 1
)

// Enum value maps for MyEnum
var (
    MyEnumToName = map[MyEnum]string {
        MyEnum_MyValue1: "MyValue1",
        MyEnum_MyValue2: "MyValue2",
    }

    MyEnumToValue = map[string]MyEnum {
        "MyValue1": MyEnum_MyValue1,
        "MyValue2": MyEnum_MyValue2,
    }

    MyEnumNames = []string{
        "MyValue1",
        "MyValue2",
    }

    MyEnumValues = []MyEnum{
        0,
        1,
    }
)

func (x MyEnum) String() string {
    if v, ok := MyEnumToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyEnum) Ptr() *MyEnum {
    return &x
}

// Deprecated: Use MyEnumToValue instead (e.g. `x, ok := MyEnumToValue["name"]`).
func MyEnumFromString(s string) (MyEnum, error) {
    if v, ok := MyEnumToValue[s]; ok {
        return v, nil
    }
    return MyEnum(0), fmt.Errorf("not a valid MyEnum string")
}

// Deprecated: Use MyEnum.Ptr() instead.
func MyEnumPtr(v MyEnum) *MyEnum {
    return &v
}


type MyStruct struct {
    MyIntField int64 `thrift:"myIntField,1" json:"myIntField" db:"myIntField"`
    MyStringField string `thrift:"myStringField,2" json:"myStringField" db:"myStringField"`
}
// Compile time interface enforcer
var _ thrift.Struct = &MyStruct{}

func NewMyStruct() *MyStruct {
    return (&MyStruct{})
}

func (x *MyStruct) GetMyIntFieldNonCompat() int64 {
    return x.MyIntField
}

func (x *MyStruct) GetMyIntField() int64 {
    return x.MyIntField
}

func (x *MyStruct) GetMyStringFieldNonCompat() string {
    return x.MyStringField
}

func (x *MyStruct) GetMyStringField() string {
    return x.MyStringField
}

func (x *MyStruct) SetMyIntField(value int64) *MyStruct {
    x.MyIntField = value
    return x
}

func (x *MyStruct) SetMyStringField(value string) *MyStruct {
    x.MyStringField = value
    return x
}



func (x *MyStruct) writeField1(p thrift.Protocol) error {  // MyIntField
    if err := p.WriteFieldBegin("myIntField", thrift.I64, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMyIntFieldNonCompat()
    if err := p.WriteI64(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField2(p thrift.Protocol) error {  // MyStringField
    if err := p.WriteFieldBegin("myStringField", thrift.STRING, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMyStringFieldNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) readField1(p thrift.Protocol) error {  // MyIntField
    result, err := p.ReadI64()
if err != nil {
    return err
}

    x.SetMyIntField(result)
    return nil
}

func (x *MyStruct) readField2(p thrift.Protocol) error {  // MyStringField
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetMyStringField(result)
    return nil
}

func (x *MyStruct) String() string {
    return fmt.Sprintf("%+v", x)
}


// Deprecated: Use MyStruct.Set* methods instead or set the fields directly.
type MyStructBuilder struct {
    obj *MyStruct
}

func NewMyStructBuilder() *MyStructBuilder {
    return &MyStructBuilder{
        obj: NewMyStruct(),
    }
}

func (x *MyStructBuilder) MyIntField(value int64) *MyStructBuilder {
    x.obj.MyIntField = value
    return x
}

func (x *MyStructBuilder) MyStringField(value string) *MyStructBuilder {
    x.obj.MyStringField = value
    return x
}

func (x *MyStructBuilder) Emit() *MyStruct {
    var objCopy MyStruct = *x.obj
    return &objCopy
}
func (x *MyStruct) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("MyStruct"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // myIntField
            if err := x.readField1(p); err != nil {
                return err
            }
        case 2:  // myStringField
            if err := x.readField2(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

type MyUnion struct {
    MyEnum *MyEnum `thrift:"myEnum,1" json:"myEnum" db:"myEnum"`
    MyDataItem *MyStruct `thrift:"myDataItem,2" json:"myDataItem" db:"myDataItem"`
}
// Compile time interface enforcer
var _ thrift.Struct = &MyUnion{}

func NewMyUnion() *MyUnion {
    return (&MyUnion{})
}

// Deprecated: Use NewMyUnion().MyEnum instead.
var MyUnion_MyEnum_DEFAULT = NewMyUnion().MyEnum

// Deprecated: Use NewMyUnion().MyDataItem instead.
var MyUnion_MyDataItem_DEFAULT = NewMyUnion().MyDataItem

func (x *MyUnion) GetMyEnumNonCompat() *MyEnum {
    return x.MyEnum
}

func (x *MyUnion) GetMyEnum() MyEnum {
    if !x.IsSetMyEnum() {
      return 0
    }

    return *x.MyEnum
}

func (x *MyUnion) GetMyDataItemNonCompat() *MyStruct {
    return x.MyDataItem
}

func (x *MyUnion) GetMyDataItem() *MyStruct {
    if !x.IsSetMyDataItem() {
      return NewMyStruct()
    }

    return x.MyDataItem
}

func (x *MyUnion) SetMyEnum(value MyEnum) *MyUnion {
    x.MyEnum = &value
    return x
}

func (x *MyUnion) SetMyDataItem(value MyStruct) *MyUnion {
    x.MyDataItem = &value
    return x
}

func (x *MyUnion) IsSetMyEnum() bool {
    return x.MyEnum != nil
}

func (x *MyUnion) IsSetMyDataItem() bool {
    return x.MyDataItem != nil
}

func (x *MyUnion) writeField1(p thrift.Protocol) error {  // MyEnum
    if !x.IsSetMyEnum() {
        return nil
    }

    if err := p.WriteFieldBegin("myEnum", thrift.I32, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := *x.GetMyEnumNonCompat()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyUnion) writeField2(p thrift.Protocol) error {  // MyDataItem
    if !x.IsSetMyDataItem() {
        return nil
    }

    if err := p.WriteFieldBegin("myDataItem", thrift.STRUCT, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMyDataItemNonCompat()
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyUnion) readField1(p thrift.Protocol) error {  // MyEnum
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := MyEnum(enumResult)

    x.SetMyEnum(result)
    return nil
}

func (x *MyUnion) readField2(p thrift.Protocol) error {  // MyDataItem
    result := *NewMyStruct()
err := result.Read(p)
if err != nil {
    return err
}

    x.SetMyDataItem(result)
    return nil
}

func (x *MyUnion) String() string {
    return fmt.Sprintf("%+v", x)
}


// Deprecated: Use MyUnion.Set* methods instead or set the fields directly.
type MyUnionBuilder struct {
    obj *MyUnion
}

func NewMyUnionBuilder() *MyUnionBuilder {
    return &MyUnionBuilder{
        obj: NewMyUnion(),
    }
}

func (x *MyUnionBuilder) MyEnum(value *MyEnum) *MyUnionBuilder {
    x.obj.MyEnum = value
    return x
}

func (x *MyUnionBuilder) MyDataItem(value *MyStruct) *MyUnionBuilder {
    x.obj.MyDataItem = value
    return x
}

func (x *MyUnionBuilder) Emit() *MyUnion {
    var objCopy MyUnion = *x.obj
    return &objCopy
}
func (x *MyUnion) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("MyUnion"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *MyUnion) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // myEnum
            if err := x.readField1(p); err != nil {
                return err
            }
        case 2:  // myDataItem
            if err := x.readField2(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}
