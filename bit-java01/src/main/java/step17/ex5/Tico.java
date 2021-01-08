package step17.ex5;

public class Tico extends Car {
  boolean sunroof; // 썬루프 여부
  boolean autoTrans; // 자동변속장치 여부
  
  public void openSunroof() {
    System.out.println("썬루프를 연다!");
  }
  
  public void closeSunroof() {
    System.out.println("썬루프를 닫는다.");
  }
  
  // 상속 받은 run() 메서드에는 기어를 자동으로 바꾸는 기능이 없어서
  // 서브 클래스에 맞게 재정의한다. => 오버라이딩(overriding)
  public void run() {
    System.out.println("속도가 높으면 기어를 올리고 속도가 낮으면 기어를 낮춘다.");
    System.out.println("쌩쌩 달린다.");
  }
  
  // 상속 받은 start()를 가솔린차에 맞게 재정의 한다. => overring
  public void start() {
    System.out.println("연료를 분사한다.");
    System.out.println("점화플러그에 전기를 흘려 연료에 불을 붙인다.");
  }
}







