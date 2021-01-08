/* ����ü - typedef III
 * => �Լ� �������� typedef
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int app57_plus(int a, int b) {return a + b;}
int app57_minus(int a, int b) {return a - b;}
int app57_multiple(int a, int b) {return a * b;}
int app57_divide(int a, int b) {return a / b;}

// �Լ� ������ Ÿ���� �����ϴ� ���
typedef int (*Func)(int, int);

int main57(void) {

	// �Լ� �����͸� ����Ͽ� �Լ� �ּҸ� �ޱ�
	int (*f)(int, int); // OK!
	Func f2;

	// �Լ� �ּ� ����
	f = app57_multiple;
	f2 = app57_minus;

	// �Լ� ȣ��
	printf("%d\n", f(5, 7));
	printf("%d\n", f2(5, 7));

	return EXIT_SUCCESS;
}







