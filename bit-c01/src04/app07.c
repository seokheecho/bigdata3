/* ������ �������� - �迭
 * => ���� Ÿ���� �޸𸮸� ���� �� ���� �� ����Ѵ�.
 */

#include <stdio.h>
#include <stdlib.h>

int main07(void) {
	int scores[5];
	int a = 100;

	scores[0] = 100;
	scores[1] = 90;
	scores[2] = 80;
	scores[3] = 70;
	scores[4] = 60;

	printf("%d, %d, %d, %d, %d\n",
			scores[0], scores[1], scores[2], scores[3], scores[4]);

	// �迭�� ũ�⸦ �����?
	// => ������ OK.
	// => ���൵ ���� OK! �̰� ������!
	//    �޸��� ��� ������ ����� �����ϰ� ó������ �ʴ´�.
	//
	scores[5] = 50; // ���� �� �ڵ�� ������ �Ǿ�� �Ѵ�. ���� �̷��� �ڵ����� ����!
	printf("%d\n", scores[5]);

	printf("%d\n", a);

	// �迭 ����� ���ÿ� �ʱ�ȭ��Ű��
	int scores2[3] = {100, 90, 80};
	int len = sizeof(scores2) / sizeof(int);
	for (int i = 0; i < len; i++) {
		printf("%d, ", scores2[i]);
	}
	printf("\n");

	// => �迭 ����� ���ÿ� ���� �ʱ�ȭ��ų ���� �迭�� ������ �����ص� �ȴ�.
	//    �׷��� ���� ������ ���� �迭�� ������ �����ȴ�.
	int scores3[] = {100, 90, 80};
	len = sizeof(scores3) / sizeof(int);
	for (int i = 0; i < len; i++) {
		printf("%d, ", scores3[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
}



