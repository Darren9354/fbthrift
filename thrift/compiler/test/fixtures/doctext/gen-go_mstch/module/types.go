// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]

import (
  "fmt"

  "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)


// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = thrift.ZERO


type Lanyard = string

func NewLanyard() Lanyard {
  return ""
}

func WriteLanyard(item Lanyard, p thrift.Protocol) error {
  if err := p.WriteString(item); err != nil {
    return err
}
  return nil
}

func ReadLanyard(p thrift.Protocol) (Lanyard, error) {
  var decodeResult Lanyard
  decodeErr := func() error {
    result, err := p.ReadString()
if err != nil {
    return err
}
    decodeResult = result
    return nil
  }()
  return decodeResult, decodeErr
}

type Number = int32

func NewNumber() Number {
  return 0
}

func WriteNumber(item Number, p thrift.Protocol) error {
  if err := p.WriteI32(item); err != nil {
    return err
}
  return nil
}

func ReadNumber(p thrift.Protocol) (Number, error) {
  var decodeResult Number
  decodeErr := func() error {
    result, err := p.ReadI32()
if err != nil {
    return err
}
    decodeResult = result
    return nil
  }()
  return decodeResult, decodeErr
}

type B int32

const (
    B_HELLO B = 0
)

// Enum value maps for B
var (
    BToName = map[B]string {
        B_HELLO: "HELLO",
    }

    BToValue = map[string]B {
        "HELLO": B_HELLO,
    }

    BNames = []string{
        "HELLO",
    }

    BValues = []B{
        0,
    }
)

func (x B) String() string {
    if v, ok := BToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x B) Ptr() *B {
    return &x
}

// Deprecated: Use BToValue instead (e.g. `x, ok := BToValue["name"]`).
func BFromString(s string) (B, error) {
    if v, ok := BToValue[s]; ok {
        return v, nil
    }
    return B(0), fmt.Errorf("not a valid B string")
}

// Deprecated: Use B.Ptr() instead.
func BPtr(v B) *B {
    return &v
}


type A struct {
    UselessField int32 `thrift:"useless_field,1" json:"useless_field" db:"useless_field"`
}
// Compile time interface enforcer
var _ thrift.Struct = &A{}

func NewA() *A {
    return (&A{})
}

func (x *A) GetUselessFieldNonCompat() int32 {
    return x.UselessField
}

func (x *A) GetUselessField() int32 {
    return x.UselessField
}

func (x *A) SetUselessField(value int32) *A {
    x.UselessField = value
    return x
}


func (x *A) writeField1(p thrift.Protocol) error {  // UselessField
    if err := p.WriteFieldBegin("useless_field", thrift.I32, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetUselessFieldNonCompat()
    if err := p.WriteI32(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *A) readField1(p thrift.Protocol) error {  // UselessField
    result, err := p.ReadI32()
if err != nil {
    return err
}

    x.SetUselessField(result)
    return nil
}

func (x *A) String() string {
    return fmt.Sprintf("%+v", x)
}


// Deprecated: Use A.Set* methods instead or set the fields directly.
type ABuilder struct {
    obj *A
}

func NewABuilder() *ABuilder {
    return &ABuilder{
        obj: NewA(),
    }
}

func (x *ABuilder) UselessField(value int32) *ABuilder {
    x.obj.UselessField = value
    return x
}

func (x *ABuilder) Emit() *A {
    var objCopy A = *x.obj
    return &objCopy
}
func (x *A) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("A"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
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

func (x *A) Read(p thrift.Protocol) error {
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
        case 1:  // useless_field
            if err := x.readField1(p); err != nil {
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

type U struct {
    I *int32 `thrift:"i,1" json:"i" db:"i"`
    S *string `thrift:"s,2" json:"s" db:"s"`
}
// Compile time interface enforcer
var _ thrift.Struct = &U{}

func NewU() *U {
    return (&U{})
}

// Deprecated: Use NewU().I instead.
var U_I_DEFAULT = NewU().I

// Deprecated: Use NewU().S instead.
var U_S_DEFAULT = NewU().S

func (x *U) GetINonCompat() *int32 {
    return x.I
}

func (x *U) GetI() int32 {
    if !x.IsSetI() {
      return 0
    }

    return *x.I
}

func (x *U) GetSNonCompat() *string {
    return x.S
}

func (x *U) GetS() string {
    if !x.IsSetS() {
      return ""
    }

    return *x.S
}

func (x *U) SetI(value int32) *U {
    x.I = &value
    return x
}

func (x *U) SetS(value string) *U {
    x.S = &value
    return x
}

func (x *U) IsSetI() bool {
    return x.I != nil
}

func (x *U) IsSetS() bool {
    return x.S != nil
}

func (x *U) writeField1(p thrift.Protocol) error {  // I
    if !x.IsSetI() {
        return nil
    }

    if err := p.WriteFieldBegin("i", thrift.I32, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := *x.GetINonCompat()
    if err := p.WriteI32(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *U) writeField2(p thrift.Protocol) error {  // S
    if !x.IsSetS() {
        return nil
    }

    if err := p.WriteFieldBegin("s", thrift.STRING, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := *x.GetSNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *U) readField1(p thrift.Protocol) error {  // I
    result, err := p.ReadI32()
if err != nil {
    return err
}

    x.SetI(result)
    return nil
}

func (x *U) readField2(p thrift.Protocol) error {  // S
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetS(result)
    return nil
}

func (x *U) String() string {
    return fmt.Sprintf("%+v", x)
}


// Deprecated: Use U.Set* methods instead or set the fields directly.
type UBuilder struct {
    obj *U
}

func NewUBuilder() *UBuilder {
    return &UBuilder{
        obj: NewU(),
    }
}

func (x *UBuilder) I(value *int32) *UBuilder {
    x.obj.I = value
    return x
}

func (x *UBuilder) S(value *string) *UBuilder {
    x.obj.S = value
    return x
}

func (x *UBuilder) Emit() *U {
    var objCopy U = *x.obj
    return &objCopy
}
func (x *U) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("U"); err != nil {
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

func (x *U) Read(p thrift.Protocol) error {
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
        case 1:  // i
            if err := x.readField1(p); err != nil {
                return err
            }
        case 2:  // s
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

type Bang struct {
    Message string `thrift:"message,1" json:"message" db:"message"`
}
// Compile time interface enforcer
var _ thrift.Struct = &Bang{}

func NewBang() *Bang {
    return (&Bang{})
}

func (x *Bang) GetMessageNonCompat() string {
    return x.Message
}

func (x *Bang) GetMessage() string {
    return x.Message
}

func (x *Bang) SetMessage(value string) *Bang {
    x.Message = value
    return x
}


func (x *Bang) writeField1(p thrift.Protocol) error {  // Message
    if err := p.WriteFieldBegin("message", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMessageNonCompat()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Bang) readField1(p thrift.Protocol) error {  // Message
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetMessage(result)
    return nil
}

func (x *Bang) String() string {
    return fmt.Sprintf("%+v", x)
}

func (x *Bang) Error() string {
    return x.String()
}


// Deprecated: Use Bang.Set* methods instead or set the fields directly.
type BangBuilder struct {
    obj *Bang
}

func NewBangBuilder() *BangBuilder {
    return &BangBuilder{
        obj: NewBang(),
    }
}

func (x *BangBuilder) Message(value string) *BangBuilder {
    x.obj.Message = value
    return x
}

func (x *BangBuilder) Emit() *Bang {
    var objCopy Bang = *x.obj
    return &objCopy
}
func (x *Bang) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Bang"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
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

func (x *Bang) Read(p thrift.Protocol) error {
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
        case 1:  // message
            if err := x.readField1(p); err != nil {
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
