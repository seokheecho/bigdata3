/* printf(), sprintf() - ������ �ִ� ���ڿ��� ���
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main69(void) {
	char name[20];
	int age = 20;
	char message[100];

	strcpy(name, "ȫ�浿");

	printf("%s(%d)�� �ݰ����ϴ�.\n", name, age); // ǥ�� ��� ��ġ�� ����Ѵ�.

	sprintf(message, "%s(%d)�� �ݰ����ϴ�.\n", name, age); // �޸𸮷� ����Ѵ�.
	puts(message);


	return EXIT_SUCCESS;
}







