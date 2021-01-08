// 상속 불가 클래스 만들기
package step16.other;

// 클래스 앞에 final을 붙이면 서브 클래스를 만들 수 없다.
// public과 final은 순서를 바꿔도 된다.
// => 클래스를 원래 만든대로 사용하도록 기능을 변경하지 않도록
//    강제시킨다.
public final class MyClass2 {
  public void m1() {
    System.out.println("Hello!");
  }
  
  public void m2() {
    System.out.println("Hello2!");
  }

}
