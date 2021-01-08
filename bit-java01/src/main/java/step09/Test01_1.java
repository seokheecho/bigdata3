/* 클래스 로딩과 메모리 영역
 * => 클래스를 실행하려면 먼저 외부 장치에 저장된 .class 파일을
 *    내부 저장소(램)으로 읽어 들여야 한다.
 *    이것을 "클래스 로딩"이라 부른다.
 * => 로딩된 클래스는 Method Area라 부르는 메모리 영역에 놓여진다.
 * 
 * JVM의 메모리 관리
 * => JVM은 크게 3개의 영역으로 나눠 메모리를 관리한다.
 * 1) Method Area
 *    - 클래스 파일을 읽어서 클래스 정보를 이 메모리에 둔다.
 *    - 클래스 변수를 둔다.
 * 2) Stack 
 *    - 메서드가 호출되면 "프레임(frame)"이라 불리는 메모리가 준비되고,
 *      프레임 메모리 안에 로컬 변수와 파라미터 변수, 내장 변수, 리턴 값 등을 보관한다.
 *    - 스택은 스레드 마다 존재한다.
 * 3) Heap
 *    - new 명령으로 만든 배열이나 클래스의 인스턴스 변수를 둔다.
 *    - 가비지 컬렉터가 관리하는 영역이다.
 *      즉 가비지가 되었을 때, 메모리가 부족하거나 CPU가 한가하면 가비지 컬렉터가 실행되어
 *      가비지 메모리를 재 사용할 수 있도록 해제시킨다.
 *    - 물론 JVM을 종료할 때까지 메모리가 부족할 일이 없거나 짧게 실행하는 경우에는 
 *      가비지 컬렉터가 실행되지 않고 JVM이 종료될 수 있다.
 *    - JVM이 종료되면 가비지 컬렉터의 실행 여부와 상관없이 
 *      JVM이 사용했던 모든 메모리가 OS에 반납된다.
 *      
 */
package step09;

public class Test01_1 {
  
  static void hello(String name) {
    System.out.printf("안녕하세요, %s님!", name);
  }
  
  public static void main(String[] args) {
    hello("홍길동");
  }
}

/* Test01_1 클래스 실행 과정
 * > java -cp bin step09.Test01_1
 * 
 * 1) JVM은 현재 폴더 밑에 있는 bin 폴더에서 step09 폴더를 찾는다.
 * 2) step09 폴더에서 Test01_1.class 파일을 찾는다.
 * 3) Test01_1.class 파일을 메모리로 로딩한다.
 *    => 바이트코드 유효성 검사한다.
 *    => 클래스를 Method Area 메모리 영역으로 로딩한다.
 *    => 클래스 변수가 있다면 생성한다.
 *    => 스태틱 블록이 있다면 실행한다.
 * 4) 로딩된 코드에서 main() 메서드를 호출한다.
 *    => public static void main(String[] args) 형식으로 된 메서드가 있는지 검사한다.
 *    => 있으면 실행한다.
 *    => 없으면 오류를 출력한 후 JVM을 종료한다.
 * 5) main()
 *    => Stack 영역에 프레임을 만든 후, 로컬 변수(args)를 생성한다.
 *    => hello() 호출한다.
 * 6) hello()
 *    => Stack 영역에 프레임을 만든 후, 로컬 변수(name)을 생성한다.
 *    => name에 저장된 값을 출력한다.
 *    => 호출 끝나면, Stack 영역에서 프레임을 제거한다.
 * 7) main() 메서드 호출이 끝나면 Stack 영역에서 프레임을 제거한다.
 * 8) JVM을 종료하고, JVM이 사용한 모든 메모리를 OS에 반납한다.
 */









