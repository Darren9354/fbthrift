/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basicannotations;

import com.facebook.thrift.type.TypeList;
import java.util.ArrayList;
import java.util.List;

public class __fbthrift_TypeList_f8a22d2a implements TypeList {

  private static List<TypeMapping> list = new ArrayList<>();

  static {
    list.add(new TypeList.TypeMapping("facebook.com/thrift/compiler/test/fixtures/basic-annotations/src/module/MyStruct", "test.fixtures.basicannotations.MyStruct"));
  }

  @Override
  public List<TypeList.TypeMapping> getTypes() {
    return list;
  }
}
