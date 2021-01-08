/* static nested class 응용 II - 패키지 멤버 클래스를 사용할 때
 * => 클래스가 작은 경우 패키지 멤버로 만들기 보다 
 *    다른 클래스에 내장하는 것이 
 *    소스 코드 관리에 편리할 경우가 있다.
 * 
 */
package step15.ex2;

import step15.ex2.other.ClassRoom;
import step15.ex2.other.Location;

public class Test03_1 {
  public static void main(String[] args) {
    // 패키지 멤버 클래스를 사용한 예:
    Location loc1 = new Location("강남교육센터", "111-1111");
    Location loc2 = new Location("부산교육센터", "111-1112");
    Location loc3 = new Location("대전교육센터", "111-1113");
    
    ClassRoom room1 = new ClassRoom("701", 30);
    ClassRoom room2 = new ClassRoom("702", 35);
    ClassRoom room3 = new ClassRoom("601", 25);
  }
}
