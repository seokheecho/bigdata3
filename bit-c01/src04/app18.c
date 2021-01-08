/* ������ - �Լ� ������ ����(function pointer)
 * => �Լ��� �ּҸ� �����ϴ� ����
 * => ����
 *    ����Ÿ�� (*������)(�Ķ����, ...);
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiple(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int main18(void) {
	// �Լ� ������ ����
	// => �� ���� int ���� �޾Ƽ� int�� �����ϴ� �Լ��� �ּҸ� ������ ���� "f".
	int (*f)(int, int);

	// �Լ� ������ ������ �Լ��� �ּҸ� �����Ѵ�.
	// => �迭 ������ �迭�� �ּҸ� ǥ���ϵ���, �Լ��� �̸��� �Լ��� �ּҸ� ǥ���Ѵ�.
	f = plus;

	// �Լ� �����͸� �̿��Ͽ� �Լ��� ȣ���ϱ�
	// => �Լ��� �ּҸ� ���������� �� �Լ�ó�� �̿��ϸ� �ȴ�.
	printf("%d\n", f(10, 20));

	f = minus;
	printf("%d\n", f(10, 20));

	f = multiple;
	printf("%d\n", f(10, 20));

	f = divide;
	printf("%d\n", f(10, 20));

	return EXIT_SUCCESS;
}









