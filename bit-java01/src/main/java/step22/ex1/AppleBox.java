package step22.ex1;

public class AppleBox {
  Apple[] arr;
  int cursor; 
  
  public AppleBox(int size) {
    arr = new Apple[size];
  }
  
  public int add(Apple apple) {
    // 예외처리 문법이 없던 시절에는
    // 다음과 같이 예외 상황이 발생했을 때 리턴 값으로 호출자에게 
    // 예외 상황에 대해 알렸다.
    if (cursor == arr.length) // 상자에 더이상 담을 수 없다면 -1을 리턴.
      return -1;
    arr[cursor++] = apple; // 현재 커서가 가리키는 곳에 사과를 담고 커서의 위치를 증가시킨다.
    return 0;
  }
  
  public Apple[] toArray() {
    Apple[] newArr = new Apple[cursor];
    
    for (int i = 0; i < cursor; i++) {
      newArr[i] = arr[i];
    }
    
    return newArr;
  }
  
}
