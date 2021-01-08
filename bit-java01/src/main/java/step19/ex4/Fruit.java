package step19.ex4;

/* 이 클래스의 목적은 다른 과일 클래스를 만들 때 공통 기능을 상속해 주는 용도이기 때문에
 * 직접 인스턴스를 만들지 못하게 막아야 한다. 그래서 abstract 클래스로 선언한다.
 * 주의!
 * => 보통 초보 개발자들이 많이 오해하는 게 
 *    "추상 클래스는 반드시 추상 메서드를 가져야 한다"는 것이다.
 * => 아니다. 추상 클래스가 추상 메서드를 반드시 가질 필요는 없다.
 *    다시 말하지만, 자식 클래스에게 공통 변수와 메서드를 상속해주는 용도이며,
 *    자기 자신은 인스턴스를 생성하지 말아야 할 경우에 "추상 클래스"로 선언한다.
 */
public abstract class Fruit {
  protected int weight; // 다른 패키지라도 자식 클래스라면 접근 가능!

  public Fruit(int weight) {
    super();
    this.weight = weight;
  };
}









