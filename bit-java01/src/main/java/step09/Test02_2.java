/* 클래스 메서드
 * => 특정 인스턴스에 의존하지 않는 기능을 만들 때 사용한다.
 * => 파라미터로 값을 받아 처리하거나 리턴한다.
 * => 클래스 메서드를 사용한 대표적인 클래스가 java.lang.Math이다.
 *    Math 클래스의 대부분의 메서드가 클래스 메서드이다.
 *    이유?
 *    값을 계산하는데 특정 인스턴스에 의존할 필요가 없기 때문이다.
 * => 메서드 선언 문법
 *    static 리턴타입 메서드명(파라미터, ...) {...}   
 * => 메서드 호출 문법
 *    클래스명.메서드명(아규먼트,...);
 *    
 *    만약 같은 멤버의 클래스 메서드를 호출한다면, 클래스명을 생략할 수 있다.
 *    메서드명(아규먼트, ...); 
 *    
 */
package step09;

public class Test02_2 {
  
  // x**y 제곱승을 구하는 메서드이다.
  // 특정 인스턴스의 값을 사용하지 않고, 외부에서 넘겨준 값을 가지고 동작한다.
  // 따라서 이런 경우 메서드는 보통 static을 붙여 클래스 메서드로 만든다.
  static int exp(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
      result  *= x;
    }
    return result;
  }
  
  public static void main(String[] args) {
    System.out.println(Test02_2.exp(2, 5)); //같은 멤버이기 때문에 클래스명을 생략할 수 있다.
  }
}









