/* ������ - ��� ������(+, -, *, /, %)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main28(void) {
	printf("5 + 2 = %d\n", 5 + 2);
	printf("5 - 2 = %d\n", 5 - 2);
	printf("5 * 2 = %d\n", 5 * 2);
	printf("5 / 2 = %d\n", 5 / 2); // ������ ������ �������� �����̴�.
	printf("5 %% 2 = %d\n", 5 % 2);

	printf("5 / 2 = %f\n", (float)5 / 2); // �ε��Ҽ��� / ���� = �ε��Ҽ��� / �ε��Ҽ���(�Ͻ�������ȯ)
	                                      // ��� = �ε��Ҽ���

	return EXIT_SUCCESS;
}







