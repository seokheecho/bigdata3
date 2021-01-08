package step19.ex1;

public class AppleBox {
  Apple[] arr = new Apple[100];
  int cursor; // 사과를 담을 위치(인덱스)를 가리킨다. 0 ~ 99
  
  public int add(Apple apple) {
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
