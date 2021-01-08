/* ������ �������� - ����� ����
 * => #define ��ũ�� ����� ����Ͽ� ����� �����Ѵ�.
 *    ��) #define �����  ��
 * => const �����縦 ���� ��� ���δ�.
 *    ��) const int a = 100;
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 				3.14159
#define MAX_SCORE 		100
#define MIN_SCORE 		0
#define NEWLINE 		'\n'
#define HELLO 			"hello"

int main05(void) {

	printf("%f\n", PI);
	printf("%d ~ %d\n", MIN_SCORE, MAX_SCORE);
	printf("%c\n", NEWLINE);
	printf("%s\n", HELLO);

	// ��� ���� ����
	const int a = 10;
	printf("%d\n", a);

	//a = 20; // ������ ����! ��� ������ ���� ������ �� ����.


	// ��� ������ ���� ������ �� �Ҵ��ؾ� �Ѵ�.
	// ���� �Ŀ��� ���� ���� �� ����.
	const int b;
	//b = 100; // ������ ����!
	printf("%d\n", b); // ������ ���� �ʱ�ȭ��Ű�� ���� ���¿��� ���� ����ϸ�
	                   // ��Ȱ���� �޸𸮿� ���� �ִ� ���� ��µȴ�.

	return EXIT_SUCCESS;
}



