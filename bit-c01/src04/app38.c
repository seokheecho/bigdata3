/* ���ǹ� - else�� �Ҽ�
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main38(void) {
	int age = 9;

	if (age > 13)
		if (age > 18)
			printf("����\n");
	else // else�� �׻� ���� �����̿� �ִ� if�� ���δ�. ���� �� else ���� �ٷ� �� if (age > 1*)���� ���δ�.
		printf("���\n");

	printf("--------------------------\n");

	if (age > 13) {
		if (age > 18)
			printf("����\n");
	}
	else
		printf("���\n");

	return EXIT_SUCCESS;
}







