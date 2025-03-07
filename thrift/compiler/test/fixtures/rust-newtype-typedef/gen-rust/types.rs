// @generated by Thrift for thrift/compiler/test/fixtures/rust-newtype-typedef/src/module.thrift
// This file is probably not the place you want to edit!

//! Thrift type definitions for `module`.

#![allow(clippy::redundant_closure)]


#[derive(Default, Clone, Debug, PartialEq)]
pub struct MapType(pub ::sorted_vector_map::SortedVectorMap);

#[derive(Default, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct BinType(pub ::smallvec::SmallVec<[u8; 16]>);

#[derive(Default, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct BytesType(pub ::fbthrift::builtin_types::Bytes);

#[derive(Clone, PartialEq)]
pub struct MyStruct {
    pub the_map: crate::types::MapType,
    pub the_bin: crate::types::BinType,
    pub inline_bin: ::smallvec::SmallVec<[u8; 32]>,
    pub the_bytes: crate::types::BytesType,
    pub inline_bytes: ::fbthrift::builtin_types::Bytes,
    // This field forces `..Default::default()` when instantiating this
    // struct, to make code future-proof against new fields added later to
    // the definition in Thrift. If you don't want this, add the annotation
    // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
    #[doc(hidden)]
    pub _dot_dot_Default_default: self::dot_dot::OtherFields,
}

impl ::fbthrift::GetTType for MapType {
    const TTYPE: ::fbthrift::TType = <::std::collections::BTreeMap<::std::primitive::i32, ::std::primitive::i32> as ::fbthrift::GetTType>::TTYPE;
}
impl<P> ::fbthrift::Serialize<P> for MapType
where
    P: ::fbthrift::ProtocolWriter,
{
    fn write(&self, p: &mut P) {
        super::r#impl::write(&self.0, p)
    }
}

impl<P> ::fbthrift::Deserialize<P> for MapType
where
    P: ::fbthrift::ProtocolReader,
{
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        super::r#impl::read(p).map(MapType)
    }
}


impl ::fbthrift::GetTType for BinType {
    const TTYPE: ::fbthrift::TType = <::std::vec::Vec<::std::primitive::u8> as ::fbthrift::GetTType>::TTYPE;
}
impl<P> ::fbthrift::Serialize<P> for BinType
where
    P: ::fbthrift::ProtocolWriter,
{
    fn write(&self, p: &mut P) {
        super::r#impl::write(&self.0, p)
    }
}

impl<P> ::fbthrift::Deserialize<P> for BinType
where
    P: ::fbthrift::ProtocolReader,
{
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        super::r#impl::read(p).map(BinType)
    }
}


impl ::fbthrift::GetTType for BytesType {
    const TTYPE: ::fbthrift::TType = <::std::vec::Vec<::std::primitive::u8> as ::fbthrift::GetTType>::TTYPE;
}

impl<P> ::fbthrift::Serialize<P> for BytesType
where
    P: ::fbthrift::ProtocolWriter,
{
    fn write(&self, p: &mut P) {
        self.0.write(p)
    }
}

impl<P> ::fbthrift::Deserialize<P> for BytesType
where
    P: ::fbthrift::ProtocolReader,
{
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::fbthrift::Deserialize::read(p).map(BytesType)
    }
}


#[allow(clippy::derivable_impls)]
impl ::std::default::Default for self::MyStruct {
    fn default() -> Self {
        Self {
            the_map: ::std::default::Default::default(),
            the_bin: ::std::default::Default::default(),
            inline_bin: ::std::default::Default::default(),
            the_bytes: ::std::default::Default::default(),
            inline_bytes: ::std::default::Default::default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        }
    }
}

impl ::std::fmt::Debug for self::MyStruct {
    fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        formatter
            .debug_struct("MyStruct")
            .field("the_map", &self.the_map)
            .field("the_bin", &self.the_bin)
            .field("inline_bin", &self.inline_bin)
            .field("the_bytes", &self.the_bytes)
            .field("inline_bytes", &self.inline_bytes)
            .finish()
    }
}

unsafe impl ::std::marker::Send for self::MyStruct {}
unsafe impl ::std::marker::Sync for self::MyStruct {}
impl ::std::marker::Unpin for self::MyStruct {}

impl ::fbthrift::GetTType for self::MyStruct {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl<P> ::fbthrift::Serialize<P> for self::MyStruct
where
    P: ::fbthrift::ProtocolWriter,
{
    fn write(&self, p: &mut P) {
        p.write_struct_begin("MyStruct");
        p.write_field_begin("the_map", ::fbthrift::TType::Map, 1);
        ::fbthrift::Serialize::write(&self.the_map, p);
        p.write_field_end();
        p.write_field_begin("the_bin", ::fbthrift::TType::String, 2);
        ::fbthrift::Serialize::write(&self.the_bin, p);
        p.write_field_end();
        p.write_field_begin("inline_bin", ::fbthrift::TType::String, 3);
        super::r#impl::write(&self.inline_bin, p);
        p.write_field_end();
        p.write_field_begin("the_bytes", ::fbthrift::TType::String, 4);
        ::fbthrift::Serialize::write(&self.the_bytes, p);
        p.write_field_end();
        p.write_field_begin("inline_bytes", ::fbthrift::TType::String, 5);
        ::fbthrift::Serialize::write(&self.inline_bytes, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for self::MyStruct
where
    P: ::fbthrift::ProtocolReader,
{
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("inline_bin", ::fbthrift::TType::String, 3),
            ::fbthrift::Field::new("inline_bytes", ::fbthrift::TType::String, 5),
            ::fbthrift::Field::new("the_bin", ::fbthrift::TType::String, 2),
            ::fbthrift::Field::new("the_bytes", ::fbthrift::TType::String, 4),
            ::fbthrift::Field::new("the_map", ::fbthrift::TType::Map, 1),
        ];
        let mut field_the_map = ::std::option::Option::None;
        let mut field_the_bin = ::std::option::Option::None;
        let mut field_inline_bin = ::std::option::Option::None;
        let mut field_the_bytes = ::std::option::Option::None;
        let mut field_inline_bytes = ::std::option::Option::None;
        let _ = p.read_struct_begin(|_| ())?;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32) {
                (::fbthrift::TType::Stop, _) => break,
                (::fbthrift::TType::Map, 1) => field_the_map = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::String, 2) => field_the_bin = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::String, 3) => field_inline_bin = ::std::option::Option::Some(super::r#impl::read(p)?),
                (::fbthrift::TType::String, 4) => field_the_bytes = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::String, 5) => field_inline_bytes = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (fty, _) => p.skip(fty)?,
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(Self {
            the_map: field_the_map.unwrap_or_default(),
            the_bin: field_the_bin.unwrap_or_default(),
            inline_bin: field_inline_bin.unwrap_or_default(),
            the_bytes: field_the_bytes.unwrap_or_default(),
            inline_bytes: field_inline_bytes.unwrap_or_default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        })
    }
}


mod dot_dot {
    #[derive(Copy, Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
    pub struct OtherFields(pub(crate) ());

    #[allow(dead_code)] // if serde isn't being used
    pub(super) fn default_for_serde_deserialize() -> OtherFields {
        OtherFields(())
    }
}
