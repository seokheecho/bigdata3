/* ������ - ���� �޸� ������ ������ ����
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main19(void) {
	// ������ �޸𸮸� ����� ���
	char *p = (char*) malloc(20); // 20 ����Ʈ�� �����Ѵ�. = char p[20]

	// ����� �ʱ�ȭ��Ű��
	memset(p, 0, 20);

	// �޸𸮿� ���ڿ� ����
	strcpy(p, "Hello, world!");

	// �޸𸮿� ����� �� ���
	printf("%s\n", p);

	return EXIT_SUCCESS;
}









