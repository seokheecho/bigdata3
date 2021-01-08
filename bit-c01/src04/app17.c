/* ������ - call by reference, call by value
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f1(int p1) {
	p1 = 100;
}

void f2(int *p1) {
	*p1 = 100;
}

int main17(void) {
	int p1 = 30;

	// call by value
	// => �Լ��� ȣ���� �� �ƱԸ�Ʈ�� ���� �ѱ��.
	f1(p1); // �� p1 ������ ��� �ִ� ���� �ѱ��.

	printf("p1=%d\n", p1);

	// call by reference
	// => �Լ��� ȣ���� �� �ƱԸ�Ʈ�� �޸��� �ּҸ� �ѱ��.
	f2(&p1);

	printf("p1=%d\n", p1);


	return EXIT_SUCCESS;
}









