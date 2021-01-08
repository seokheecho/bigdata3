/* 클래스 
 * => 다른 종류의 메모리를 연속해서 여러 개 만드는 명령
 * 
 * 데이터 타입
 * => 데이터 종류(정수,부동소수점,논리값,문자)와 크기에 따라 자바는 8 종류의 메모리 타입을 제공한다.
 *    - 정수(byte,short,int,long), 부동소수점(float,double), 논리값(boolean), 문자(char)
 * => 그런데 실제 애플리케이션을 개발하다 보면 단순한 형태의 값이 아닌 
 *    여러 종류의 값을 묶어서 한 데이터로 다루는 경우가 흔하다.
 *    예1) 학생데이터(이름,나이,전화,이메일,주소,...)
 *    예2) 도서데이터(제목,출판사,페이지,ISBN,저자,...)
 *    예3) 제품데이터(제품명,제조사,가격,국적,설명,...)
 *    예4) 주문데이터(제품번호,가격,결제방법,우편번호,주소,전화번호,...)
 *    예5) 강좌데이터(강의명,강사명,교실,국비지원여부,...)
 *    이렇게 여러 종류의 값으로 구성된 복합 데이터를 주로 다룬다.
 * => 문제는 복합 데이터의 종류가 무한하기 때문에 자바에서 이런 모든 경우를 고려하여
 *    데이터 타입을 미리 정의할 수 없다.
 * => 그래서 자바는 개발자가 상황에 맞춰 데이터 타입을 정의할 수 있는 문법을 제공하는데,
 *    그 문법의 이름이 "클래스"이다.
 *       
 * 클래스 문법의 용도
 * 1) 사용자 정의 데이터 타입을 만들 때 사용한다.
 *    - 여러 종류의 메모리로 구성된 새로운 데이터 타입을 만들 때 사용한다.
 * 2) 서로 관련된 기능(함수,메서드)들을 사용하기 쉽게 묶을 때 사용한다.
 *    - 이것을 "캡슐화 한다"라고도 말한다.  
 * 
 * 문법:
 * class 새데이터타입명 {
 *   메모리 종류...
 *   메모리를 다루는 기능들....
 * }
 * 
 * 메모리 준비
 * 예) StudentScore score = new StudentScore();
 * => score : StudentScore의 메모리 주소를 저장하는 변수. "reference"라고 부른다.
 * => new StudentScore() : 이 명령을 통해 만든 메모리를 "인스턴스(instance)"라고 부른다. 
 *                         개발자들이 일반적으로 "객체(object)"라고도 부른다.
 * => StudentScore : 메모리를 만들 때 사용하는 설계도. "클래스(class)"라 부른다.
 */
package step03;

public class Test03_1 {
  public static void main(String[] args) {
    // 문제: 이름, 국어, 영어, 수학, 합계, 평균을 저장할 변수를 만들어라!
    
    // 1) 학생의 성적 데이터를 저장할 새로운 메모리 타입을 정의한다.
    class StudentScore {
      String name;
      int kor;
      int eng;
      int math;
      int sum;
      float aver;
    }

    // 2) 새로 만든 메모리를 사용하려면 그 주소를 보관해야 한다.
    //    주소를 보관할 레퍼런스 변수(줄여서 그냥 레퍼런스라고 한다)를 선언한다.
    StudentScore score;  // score 주소를 담는 레퍼런스이다.

    // 3) 새 타입(사용자 정의 데이터 타입)에 맞춰 메모리를 만든다.
    // => new 새데이터타입();
    // => 이렇게 만든 메모리(인스턴스)의 주소를 레퍼런스에 보관해 두어야 한다.
    score = new StudentScore();
    
    // 4) 메모리에 값을 넣는다.
    // => 메모리의주소.변수명 = 값
    score.name = "홍길동";
    score.kor = 100;
    score.eng = 100;
    score.math = 100;
    score.sum = score.kor + score.eng + score.math;
    score.aver = score.sum / 3f;
    
    // 5) 다른 변수에 메모리 주소를 복사해보자!
    // => score에 저장된 것은 주소라는 것을 보여주기 위해서이다.
    StudentScore score2 = score;
    
    // 6) 메모리가 새로 생성되어 복사된 게 아니라는 것을 증명하기 위해
    score.name = "임꺽정";
    
    System.out.printf("%s: %d, %d, %d, %d, %f\n", 
        score2.name, score2.kor, score2.eng, score2.math, score2.sum, score2.aver);
    
    
  }
}






