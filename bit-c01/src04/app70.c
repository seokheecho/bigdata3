/* scanf(), sscanf() - ���Ŀ� ���� ���ڿ� �Է�
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main70(void) {
	char name[20];
	int age = 20;
	char message[] = "hongkildong 30";

	scanf("%s %d", name, &age);// Ű����κ��� ������ �ִ� ���ڿ��� �Է� �޾Ƽ� ������ �����Ѵ�.
	printf("=> %s(%d)\n", name, age);

	sscanf(message, "%s %d", name, &age);// �޸𸮷κ��� ������ �ִ� ���ڿ��� �Է� �޾Ƽ� ������ �����Ѵ�.
	printf("=> %s(%d)\n", name, age);

	return EXIT_SUCCESS;
}







