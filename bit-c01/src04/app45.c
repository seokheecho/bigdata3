/* �ݺ��� - break�� continue
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main45(void) {

	for (int i = 2; i < 10; i++) {
		if (i == 5)
			continue; // ���� ������ �������� �ʰ� for�� ����/���� ������ ������.
		for (int j = 1; j < 10; j++) {
			if ((i * j) > 50)
				break; // ���� ����� ������.
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}







