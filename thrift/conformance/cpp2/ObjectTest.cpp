/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/conformance/cpp2/Object.h>

#include <set>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace ::testing;

namespace apache::thrift::conformance {
namespace {

TEST(ObjectTest, TypeEnforced) {
  // Always a bool when bool_t is used, without ambiguity.
  // Pointers implicitly converts to bools.
  Value value = asValueStruct<type::bool_t>("");
  ASSERT_EQ(value.getType(), Value::boolValue);
  EXPECT_TRUE(value.get_boolValue());
}

TEST(ObjectTest, Bool) {
  Value value = asValueStruct<type::bool_t>(20);
  ASSERT_EQ(value.getType(), Value::boolValue);
  EXPECT_TRUE(value.get_boolValue());

  value = asValueStruct<type::bool_t>(0);
  ASSERT_EQ(value.getType(), Value::boolValue);
  EXPECT_FALSE(value.get_boolValue());
}

TEST(ObjectTest, Byte) {
  Value value = asValueStruct<type::byte_t>(7u);
  ASSERT_EQ(value.getType(), Value::byteValue);
  EXPECT_EQ(value.get_byteValue(), 7);
}

TEST(ObjectTest, I16) {
  Value value = asValueStruct<type::i16_t>(7u);
  ASSERT_EQ(value.getType(), Value::i16Value);
  EXPECT_EQ(value.get_i16Value(), 7);
}

TEST(ObjectTest, I32) {
  Value value = asValueStruct<type::i32_t>(7u);
  ASSERT_EQ(value.getType(), Value::i32Value);
  EXPECT_EQ(value.get_i32Value(), 7);
}

TEST(ObjectTest, I64) {
  Value value = asValueStruct<type::i64_t>(7u);
  ASSERT_EQ(value.getType(), Value::i64Value);
  EXPECT_EQ(value.get_i64Value(), 7);
}

TEST(ObjectTest, Enum) {
  enum class MyEnum { kValue = 7 };
  Value value = asValueStruct<type::enum_t>(MyEnum::kValue);
  ASSERT_EQ(value.getType(), Value::i32Value);
  EXPECT_EQ(value.get_i32Value(), 7);

  value = asValueStruct<type::enum_t>(static_cast<MyEnum>(2));
  ASSERT_EQ(value.getType(), Value::i32Value);
  EXPECT_EQ(value.get_i32Value(), 2);

  value = asValueStruct<type::enum_t>(21u);
  ASSERT_EQ(value.getType(), Value::i32Value);
  EXPECT_EQ(value.get_i32Value(), 21);
}

TEST(ObjectTest, Float) {
  Value value = asValueStruct<type::float_t>(1.5);
  ASSERT_EQ(value.getType(), Value::floatValue);
  EXPECT_EQ(value.get_floatValue(), 1.5f);
}

TEST(ObjectTest, Double) {
  Value value = asValueStruct<type::double_t>(1.5f);
  ASSERT_EQ(value.getType(), Value::doubleValue);
  EXPECT_EQ(value.get_doubleValue(), 1.5);
}

TEST(ObjectTest, String) {
  Value value = asValueStruct<type::string_t>("hi");
  ASSERT_EQ(value.getType(), Value::stringValue);
  EXPECT_EQ(value.get_stringValue(), "hi");
}

TEST(ObjectTest, Binary) {
  Value value = asValueStruct<type::binary_t>("hi");
  ASSERT_EQ(value.getType(), Value::binaryValue);
  EXPECT_EQ(value.get_binaryValue(), "hi");
}

TEST(ObjectTest, List) {
  std::vector<int> data = {1, 4, 2};
  Value value = asValueStruct<type::list<type::i16_t>>(data);
  ASSERT_EQ(value.getType(), Value::listValue);
  ASSERT_EQ(value.get_listValue().size(), data.size());
  for (size_t i = 0; i < data.size(); ++i) {
    EXPECT_EQ(value.get_listValue()[i], asValueStruct<type::i16_t>(data[i]));
  }

  // Works with other containers
  value = asValueStruct<type::list<type::i16_t>>(
      std::set<int>(data.begin(), data.end()));
  std::sort(data.begin(), data.end());
  ASSERT_EQ(value.getType(), Value::listValue);
  ASSERT_EQ(value.get_listValue().size(), data.size());
  for (size_t i = 0; i < data.size(); ++i) {
    EXPECT_EQ(value.get_listValue()[i], asValueStruct<type::i16_t>(data[i]));
  }
}

TEST(ObjectTest, List_Move) {
  // Validate the premise of the test.
  std::string s1 = "hi";
  std::string s2 = std::move(s1);
  EXPECT_EQ(s1, "");
  EXPECT_EQ(s2, "hi");

  std::vector<std::string> data;
  data.emplace_back("hi");
  data.emplace_back("bye");

  Value value = asValueStruct<type::list<type::string_t>>(data);
  // The strings are unchanged
  EXPECT_THAT(data, ::testing::ElementsAre("hi", "bye"));
  ASSERT_EQ(value.getType(), Value::listValue);
  ASSERT_EQ(value.get_listValue().size(), 2);
  EXPECT_EQ(value.get_listValue()[0].get_stringValue(), "hi");
  EXPECT_EQ(value.get_listValue()[1].get_stringValue(), "bye");

  value = asValueStruct<type::list<type::string_t>>(std::move(data));

  // The strings have been moved.
  EXPECT_THAT(data, ::testing::ElementsAre("", ""));
  ASSERT_EQ(value.getType(), Value::listValue);
  ASSERT_EQ(value.get_listValue().size(), 2);
  EXPECT_EQ(value.get_listValue()[0].get_stringValue(), "hi");
  EXPECT_EQ(value.get_listValue()[1].get_stringValue(), "bye");
}

} // namespace
} // namespace apache::thrift::conformance
