/* ������ - ������ ������ �迭 II
 * => ������ ������ �ּҿ� ���� ����� ������ �� �ִ�.
 *    �̸� ���� �޸𸮸� ���ƴٴϴ� ���� ���� �����ϴ�.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main14(void) {
	int a1[] = {101, 102, 103, 104, 105};

	int *p = a1;

	// �����͸� �迭ó�� ����ϱ�
	for (int i = 0; i < 5; i++) {
		printf("%d,", p[i]);
	}
	printf("\n");

	// �������� �ּҸ� ����Ͽ� �迭�� �׸��� ã��
	// => int Ÿ���� ��� �ּҿ� ���ϴ� ������ 4����Ʈ�̴�.
	for (int i = 0; i < 5; i++) {
		printf("%d,", *(p + i)); // �� p�� ����� �ּҿ� 4����Ʈ ������ ���Ѵ�.
	}
	printf("\n");


	// �ٸ� Ÿ���� ��
	// => char Ÿ���� ��� �ּҿ� ���ϴ� ������ 1����Ʈ�̴�.
	char str[] = "Hello";
	char *p2 = str;
	for (int i = 0; i < strlen(str); i++) {
		printf("%c,", p2[i]);
	}
	printf("\n");

	for (int i = 0; i < strlen(str); i++) {
		printf("%c,", *(p2 + i));
	}
	printf("\n");


	return EXIT_SUCCESS;
}









