/* 부동소수점(floating point) 저장 규칙
 * => 부동소수점을 2진수화시켜서 메모리에 저장한다.
 */
package step01;

public class Test04_2 {
  public static final float xxx = 12.375f;

  public static void main(String[] args) {
    System.out.println(xxx); 
    
  }

}

/*
# 부동소수점의 비트 표현
- 어떤 값이든 2진수로 표현할 수 있다면 메모리에 비트로 저장할 수 있다.
  메모리의 각 비트는 전기의 on/off, 즉 1과 0의 값을 저장하기 때문이다.
- 부동소수점을 2진수로 변환하는 것을 "정규화(nomalized)"라 부른다.
- 자바에서 부동소수점의 정규화는 "IEEE 754-1985" 명세에 따른다.
- 메모리 크기와 비트의 구성
  => 32비트 float 타입(32-bit single-precision; 단정도)
    [부호비트(1)][지수부(8)][가수부(23)]
  => 64비트 double 타입(64-bit double-precision; 배정도)
    [부호비트(1)][지수부(11)][가수부(52)]
- 부호비트(sign bit)
  음수는 1, 양수는 0.
- 지수(exponent)
  127 bias를 사용한다. 즉 2의 지수 값에 127을 더한 결과 값을 사용한다.
- 가수(fraction/mantissa)
  1.xxxx 값에서 소수점 왼쪽에 있는 1을 제외한 나머지 수를 사용한다.
  가수부에 남는 비트가 있다면 0으로 채운다.
# 실수 값을 정규화하는 방법 = 실수 값을 32비트 2진수로 만드는 방법
- 예: 12.375(10진수)
1) 10진수를 2진수로 변환한다.
  12.375(10진수)
  = 12(10진수) + 0.375(10진수)
  = 1100(2진수) + 0.011(2진수)
  = 1100.011(2진수)
  = 1*2^3 + 1*2^2 + 0*2^1 + 0*2^0 + 0*2^-1 + 1*2^-2 + 1*2^-3
  = 1*8 + 1*4 + 0*2 + 0*1 + 0*0.5 + 1*0.25 + 1*0.125
2) 소수점의 위치를 조정하여 가수부와 지수부를 분리한다.
- IEEE 754 명세는 다음과 같은 형식으로 가수부와 지수부를 나눈다.
  1.x1x2x3x4...x23(2진수) * 2^e
  => 소수점 왼쪽에 1만 남도록 소수점을 이동한다.
  => 소수점 왼쪽은 무조건 1이기 때문에 저장하지 않고 버린다.
  => 따라서 소수점 오른쪽 수만 가수부에 놓는다.
     즉 x1, x2 등은 가수부 1번 비트부터 23번 비트까지를 의미한다.
  => 23번 비트까지 채우지 못하면 나머지 비트는 0으로 채운다.
- 예)
  1100.011(2진수)
  = 1.100011(2진수) * 2^3
  가수부 => 100011(2진수)
  지수부 => 3 + 127(bias) = 130(10진수) = 10000010(2진수)
3) 32비트로 표현하기
  [0][10000010][10001100000000000000000]
  => 0100_0001_0100_0110_0000_0000_0000_0000
  => 0x41460000
# 소수점을 2진수로 바꾸는 방법
- 소수점을 2로 곱하여 나온 결과에서 정수 부분만을 차례대로 표기한다.
- 소수 부분이 0이거나 반복되면 계산을 멈춘다.
- 예: 0.375(10진수)
  0.375 * 2 = 0.75  --> 0
  0.75 * 2  = 1.5   --> 1
  0.5 * 2   = 1.0   --> 1
  => 0.011(2진수)
*/