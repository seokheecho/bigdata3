/* ���ǹ� - if ~ else if ~ else if ~ else
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main37(void) {
	int age = 18;

	if (age < 8)
		printf("�Ƶ�\n");
	else if (age >= 8 && age < 14)
		printf("���\n");
	else if (age >= 14 && age < 19)
		printf("û�ҳ�\n");
	else
		printf("����\n");

	return EXIT_SUCCESS;
}







