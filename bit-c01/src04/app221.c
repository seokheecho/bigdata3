/* 포인터 - 포인터 변수와 메모리 타입
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main221(void) {
	char arr1[10];
	int arr2[10];
	float arr3[10];

	// 메모리의 주소를 저장할 때는 그 타입의 포인터 변수에 저장해야 한다.
    char *p1 = arr1;
	int *p2 = arr2;
	float *p3 = arr3;

	// 물론, 다음과 같이 다른 타입의 포인터 변수에 저장하더라도 에러 발생하는 것은 아니다.
	char *p4 = arr3;

	// 다만 값을 저장할 때 제대로 선언된 포인터 변수를 사용해야만 값이 제대로 들어간다.
	// float 메모리의 주소를 float* 포인터 변수에 제대로 저장한 후
	// 그 포인터 변수를 사용한다면 정상적으로 사용할 수 있다.
	p3[0] = 3.14;
	printf("%f\n", p3[0]);

	// 그러나 다음과 같이 float 메모리의 주소를 char* 포인터 변수에 저장한 후
	// 그 포인터 변수를 사용하려 한다면 정상적으로 사용할 수 없다.
	p4[0] = 3.14;
	printf("%f\n", p4[0]);

	// float 메모리의 주소를 char* 포인터 변수에 저장한 후
	// char 메모리 처럼 사용한다면? 제대로 수행된다.
	p4[0] = 'A';
	printf("%c\n", p4[0]);


	/* 결론!
	 * => 메모리의 타입과 다른 포인터 변수에 주소를 저장하더라도 컴파일 오류나 실행 오류가 발생하지 않는다.
	 * => 하지만 이것을 그냥 이용하게 되면 다른 개발자가 코드를 이해하기 어렵고 유지보수가 힘들어 진다.
	 * => 설사 컴파일러가 허용을 한다고 하더라도, 가능한 타입을 맞춰서 포인터 변수를 사용하라!
	 *
	 */

	return EXIT_SUCCESS;
}










