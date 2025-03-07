// @generated by Thrift for thrift/compiler/test/fixtures/rust-no_serde-derive/src/mod.thrift
// This file is probably not the place you want to edit!

//! Thrift type definitions for `mod`.

#![allow(clippy::redundant_closure)]


#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct NoSerde {
    pub a: ::std::primitive::bool,
    // This field forces `..Default::default()` when instantiating this
    // struct, to make code future-proof against new fields added later to
    // the definition in Thrift. If you don't want this, add the annotation
    // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
    #[doc(hidden)]
    pub _dot_dot_Default_default: self::dot_dot::OtherFields,
}

#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash, ::serde_derive::Serialize, ::serde_derive::Deserialize)]
pub struct Serde {
    #[serde(default)]
    pub a: ::std::primitive::bool,
    // This field forces `..Default::default()` when instantiating this
    // struct, to make code future-proof against new fields added later to
    // the definition in Thrift. If you don't want this, add the annotation
    // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
    #[doc(hidden)]
    #[serde(skip, default = "self::dot_dot::default_for_serde_deserialize")]
    pub _dot_dot_Default_default: self::dot_dot::OtherFields,
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for self::NoSerde {
    fn default() -> Self {
        Self {
            a: ::std::default::Default::default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        }
    }
}

impl ::std::fmt::Debug for self::NoSerde {
    fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        formatter
            .debug_struct("NoSerde")
            .field("a", &self.a)
            .finish()
    }
}

unsafe impl ::std::marker::Send for self::NoSerde {}
unsafe impl ::std::marker::Sync for self::NoSerde {}
impl ::std::marker::Unpin for self::NoSerde {}

impl ::fbthrift::GetTType for self::NoSerde {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl<P> ::fbthrift::Serialize<P> for self::NoSerde
where
    P: ::fbthrift::ProtocolWriter,
{
    fn write(&self, p: &mut P) {
        p.write_struct_begin("NoSerde");
        p.write_field_begin("a", ::fbthrift::TType::Bool, 1);
        ::fbthrift::Serialize::write(&self.a, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for self::NoSerde
where
    P: ::fbthrift::ProtocolReader,
{
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("a", ::fbthrift::TType::Bool, 1),
        ];
        let mut field_a = ::std::option::Option::None;
        let _ = p.read_struct_begin(|_| ())?;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32) {
                (::fbthrift::TType::Stop, _) => break,
                (::fbthrift::TType::Bool, 1) => field_a = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (fty, _) => p.skip(fty)?,
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(Self {
            a: field_a.unwrap_or_default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        })
    }
}


#[allow(clippy::derivable_impls)]
impl ::std::default::Default for self::Serde {
    fn default() -> Self {
        Self {
            a: ::std::default::Default::default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        }
    }
}

impl ::std::fmt::Debug for self::Serde {
    fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        formatter
            .debug_struct("Serde")
            .field("a", &self.a)
            .finish()
    }
}

unsafe impl ::std::marker::Send for self::Serde {}
unsafe impl ::std::marker::Sync for self::Serde {}
impl ::std::marker::Unpin for self::Serde {}

impl ::fbthrift::GetTType for self::Serde {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl<P> ::fbthrift::Serialize<P> for self::Serde
where
    P: ::fbthrift::ProtocolWriter,
{
    fn write(&self, p: &mut P) {
        p.write_struct_begin("Serde");
        p.write_field_begin("a", ::fbthrift::TType::Bool, 1);
        ::fbthrift::Serialize::write(&self.a, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for self::Serde
where
    P: ::fbthrift::ProtocolReader,
{
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("a", ::fbthrift::TType::Bool, 1),
        ];
        let mut field_a = ::std::option::Option::None;
        let _ = p.read_struct_begin(|_| ())?;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32) {
                (::fbthrift::TType::Stop, _) => break,
                (::fbthrift::TType::Bool, 1) => field_a = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (fty, _) => p.skip(fty)?,
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(Self {
            a: field_a.unwrap_or_default(),
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
