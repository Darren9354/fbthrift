/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic;

import com.facebook.thrift.type.TypeList;
import java.util.ArrayList;
import java.util.List;

public class __fbthrift_TypeList_3dfd361e implements TypeList {

  private static List<TypeMapping> list = new ArrayList<>();

  static {
    list.add(new TypeList.TypeMapping("test.dev/fixtures/basic/MyStruct", "test.fixtures.basic.MyStruct"));
    list.add(new TypeList.TypeMapping("test.dev/fixtures/basic/MyDataItem", "test.fixtures.basic.MyDataItem"));
    list.add(new TypeList.TypeMapping("test.dev/fixtures/basic/MyUnion", "test.fixtures.basic.MyUnion"));
    list.add(new TypeList.TypeMapping("test.dev/fixtures/basic/ReservedKeyword", "test.fixtures.basic.ReservedKeyword"));
    list.add(new TypeList.TypeMapping("test.dev/fixtures/basic/UnionToBeRenamed", "test.fixtures.basic.UnionToBeRenamed"));
    list.add(new TypeList.TypeMapping("test.dev/fixtures/basic/MyEnum", "test.fixtures.basic.MyEnum"));
    list.add(new TypeList.TypeMapping("test.dev/fixtures/basic/HackEnum", "test.fixtures.basic.HackEnum"));
  }

  @Override
  public List<TypeList.TypeMapping> getTypes() {
    return list;
  }
}
