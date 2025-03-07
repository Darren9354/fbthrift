// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]

import (
  "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO

var GoUnusedProtection__ int

const MyInt int32 = 1337
const Name string = "Mark Zuckerberg"
const MultiLineString string = "This\nis a\nmulti line string.\n"
var States []map[string]int32 = []map[string]int32{
    map[string]int32{
      "San Diego": 3211000,
      "Sacramento": 479600,
      "SF": 837400,
  },
    map[string]int32{
      "New York": 8406000,
      "Albany": 98400,
  },
}
const X float64 = 1
const Y float64 = 1000000.0
const Z float64 = 1000000000
const ZeroDoubleValue float64 = 0
const LongDoubleValue float64 = 2.59961000990301e-05
const MyCompany MyCompany = Company_FACEBOOK
const Foo MyStringIdentifier = "foo"
const Bar MyIntIdentifier = 42
var Mymap MyMapIdentifier = map[string]string{
      "keys": "values",
  }
var Instagram Internship = *NewInternship().
    SetWeeks(12).
    SetTitle("Software Engineer").
    SetEmployer(Company_INSTAGRAM).
    SetCompensation(1200).
    SetSchool("Monters University")
var PartialConst Internship = *NewInternship().
    SetWeeks(8).
    SetTitle("Some Job")
var KRanges []*Range = []*Range{
    NewRange().
    SetMin(1).
    SetMax(2),
    NewRange().
    SetMin(5).
    SetMax(6),
}
var InternList []*Internship = []*Internship{
    NewInternship().
    SetWeeks(12).
    SetTitle("Software Engineer").
    SetEmployer(Company_INSTAGRAM).
    SetCompensation(1200).
    SetSchool("Monters University"),
    NewInternship().
    SetWeeks(10).
    SetTitle("Sales Intern").
    SetEmployer(Company_FACEBOOK).
    SetCompensation(1000),
}
var Pod_0 Struct1 = *NewStruct1()
var PodS_0 Struct1 = *NewStruct1()
var Pod_1 Struct1 = *NewStruct1().
    SetA(10).
    SetB("foo")
var PodS_1 Struct1 = *NewStruct1().
    SetA(10).
    SetB("foo")
var Pod_2 Struct2 = *NewStruct2().
    SetA(98).
    SetB("gaz").
    SetC(
        *NewStruct1().
    SetA(12).
    SetB("bar"),
    ).
    SetD(
        []int32{
    11,
    22,
    33,
},
    )
var PodTrailingCommas Struct2 = *NewStruct2().
    SetA(98).
    SetB("gaz").
    SetC(
        *NewStruct1().
    SetA(12).
    SetB("bar"),
    ).
    SetD(
        []int32{
    11,
    22,
    33,
},
    )
var PodS_2 Struct2 = *NewStruct2().
    SetA(98).
    SetB("gaz").
    SetC(
        *NewStruct1().
    SetA(12).
    SetB("bar"),
    ).
    SetD(
        []int32{
    11,
    22,
    33,
},
    )
var Pod_3 Struct3 = *NewStruct3().
    SetA("abc").
    SetB(456).
    SetC(
        *NewStruct2().
    SetA(888).
    SetC(
        *NewStruct1().
    SetB("gaz"),
    ).
    SetD(
        []int32{
    1,
    2,
    3,
},
    ),
    )
var PodS_3 Struct3 = *NewStruct3().
    SetA("abc").
    SetB(456).
    SetC(
        *NewStruct2().
    SetA(888).
    SetC(
        *NewStruct1().
    SetB("gaz"),
    ).
    SetD(
        []int32{
    1,
    2,
    3,
},
    ),
    )
var Pod_4 Struct4 = *NewStruct4().
    SetA(1234).
    SetB(0.333).
    SetC(25)
var U_1_1 Union1 = *NewUnion1().
    SetI(97)
var U_1_2 Union1 = *NewUnion1().
    SetD(5.6)
var U_1_3 Union1 = *NewUnion1()
var U_2_1 Union2 = *NewUnion2().
    SetI(51)
var U_2_2 Union2 = *NewUnion2().
    SetD(6.7)
var U_2_3 Union2 = *NewUnion2().
    SetS(
        *NewStruct1().
    SetA(8).
    SetB("abacabb"),
    )
var U_2_4 Union2 = *NewUnion2().
    SetU(
        *NewUnion1().
    SetI(43),
    )
var U_2_5 Union2 = *NewUnion2().
    SetU(
        *NewUnion1().
    SetD(9.8),
    )
var U_2_6 Union2 = *NewUnion2().
    SetU(
        *NewUnion1(),
    )
const Apostrophe string = "'"
const TripleApostrophe string = "'''"
const QuotationMark string = "\""
const Backslash string = "\\\\"
const EscapedA string = "\\x61"
var Char2ascii map[string]int32 = map[string]int32{
      "'": 39,
      "\"": 34,
      "\\\\": 92,
      "\\x61": 97,
  }
var EscapedStrings []string = []string{
    "\\x61",
    "\\xab",
    "\\x6a",
    "\\xa6",
    "\\x61yyy",
    "\\xabyyy",
    "\\x6ayyy",
    "\\xa6yyy",
    "zzz\\x61",
    "zzz\\xab",
    "zzz\\x6a",
    "zzz\\xa6",
    "zzz\\x61yyy",
    "zzz\\xabyyy",
    "zzz\\x6ayyy",
    "zzz\\xa6yyy",
}
const FalseC bool = false
const TrueC bool = true
const ZeroByte byte = 0
const Zero16 int16 = 0
const Zero32 int32 = 0
const Zero64 int64 = 0
const ZeroDotZero float64 = 0
const EmptyString string = ""
var EmptyIntList []int32 = []int32{
}
var EmptyStringList []string = []string{
}
var EmptyIntSet []int32 = []int32{
}
var EmptyStringSet []string = []string{
}
var EmptyIntIntMap map[int32]int32 = map[int32]int32{
  }
var EmptyIntStringMap map[int32]string = map[int32]string{
  }
var EmptyStringIntMap map[string]int32 = map[string]int32{
  }
var EmptyStringStringMap map[string]string = map[string]string{
  }
const MaxIntDec int64 = 9223372036854775807
const MaxIntOct int64 = 9223372036854775807
const MaxIntHex int64 = 9223372036854775807
const MaxIntBin int64 = 9223372036854775807
const MaxDub float64 = 1.7976931348623157e+308
const MinDub float64 = 2.2250738585072014e-308
const MinSDub float64 = 5e-324
const MaxPIntDec int64 = 9223372036854775807
const MaxPIntOct int64 = 9223372036854775807
const MaxPIntHex int64 = 9223372036854775807
const MaxPIntBin int64 = 9223372036854775807
const MaxPDub float64 = 1.7976931348623157e+308
const MinPDub float64 = 2.2250738585072014e-308
const MinPSDub float64 = 5e-324
const MinIntDec int64 = -9223372036854775808
const MinIntOct int64 = -9223372036854775808
const MinIntHex int64 = -9223372036854775808
const MinIntBin int64 = -9223372036854775808
const MaxNDub float64 = -1.7976931348623157e+308
const MinNDub float64 = -2.2250738585072014e-308
const MinNSDub float64 = -5e-324
