/* 인터페이스 사용 전 
 * => CarTester는 오직 Engine을 단 자동차만 테스트할 수 있다.
 */
package step18.ex1;

public class Test01 {

  public static void main(String[] args) {
    // 자동차 객체 준비
    Tico tico = new Tico();
    Truck truck = new Truck();
    
    // 자동차 시험소에서 자동차를 테스트한다.
    CarTester.test(tico);
    CarTester.test(truck);
    
    // 전기 자동차를 준비
    Tesla tesla = new Tesla();
    
    // 자동차 시험소에서 전기 자동차를 테스트 할 수 있을까?
    // test(Engine) 메서드는 오직 Engine을 갖고 있는 객체만 파라미터로 받을 수 있다.
    // Tesla 객체는 Engine의 서브 클래스가 아니다. Motor의 서브 클래스이다. 
    // 그래서 현재의 CarTester에서는 Tesla를 테스트 할 수 없다.
    //CarTester.test(tesla); // 컴파일 오류!
    
    // 새로운 요구!
    // => CarTester가 Motor를 갖고 있는(상속 받은) 전기 자동차도 테스트 하고 싶다!
    // => 해결책? 다음 패키지를 보라!
  }

}







