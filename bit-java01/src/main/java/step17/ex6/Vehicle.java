package step17.ex6;

// Vehicle 클래스를 추상 클래스로 만들어 직접 인스턴스를 생성하지 못하도록 한다.
// 서브 클래스를 정의할 때 사용될 뿐이다.
public abstract class Vehicle {
  int capacity;
  
  // 서브 클래스에서 오버라이딩 할 수도 있고, 그대로 사용할 수도 있는 메서드는 일반 메서드로 만들라!
  public void breaking() {
    System.out.println("속도를 늦춘다.");
  }

  // 서브 클래스에서 어차피 오버라이딩 할 메서드라면 수퍼 클래스에서 구현하지 말라!
  // 구현하지 말라? 
  // => 메서드는 선언하되 몸체를 만들지 말라는 의미다.
  // => 몸체가 없는 메서드는 abstract로 선언해야 한다.
  public abstract void start();
  public abstract void stop();
  public abstract void run();
  
  
  public int getCapacity() {
    return capacity;
  }

  public void setCapacity(int capacity) {
    this.capacity = capacity;
  }
}