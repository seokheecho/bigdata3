/* scanf() - Ű���� �Է� �ޱ�
 * => scanf(���˹��ڿ�, ���� ���� �޸��� �ּ�, ...);
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main63(void) {
	char name[50];
	int age;

	printf("name: ");
	scanf("%s", name);

	printf("age: ");
	scanf("%d", &age);

	printf("%s, %d\n", name, age);

	return EXIT_SUCCESS;
}







