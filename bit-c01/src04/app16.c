/* ������ - ������ ������ �迭
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main16(void) {
	// ���� ���� 2���� �迭
	int scores[3][4] = { // 3�� 4���� �迭
			{91, 92, 93, 94},
			{81, 82, 83, 84},
			{71, 72, 73, 74}
	};

	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 4; c++) {
			printf("%d, ", scores[r][c]);
		}
		printf("\n");
	}

	// ���� ���� ���� ���� �迭 �����
	int s1[] = {91, 92, 93, 94};
	int s2[] = {81, 82, 83};
	int s3[] = {71, 72};

	// �迭�� �迭�ε�, �ּҸ� �����ϴ� �迭�̴�. �� ������ ������ �迭.
	int* p[3]; // "int*" Ÿ���� ���� 3�� ������ �迭�� �����.
	           // �� int �޸��� �ּҸ� 3�� ������ �迭�� �����.
	p[0] = s1;
	p[1] = s2;
	p[2] = s3;

	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < (4 - r); c++) {
			printf("%d, ", p[r][c]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}









