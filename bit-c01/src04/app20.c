/* ������ - ���� �޸� ������ ������ ���� II
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main20(void) {
	// int �迭 �޸𸮸� �����.
	// => char�� 1����Ʈ�� �׳� ũ�⸦ �����ϸ� ������,
	//    �ٸ� Ÿ���� ũ�Ⱑ �ٸ��� ������ sizeof(Ÿ��)�� ����ؼ�
	//    �� Ÿ���� ũ�⸦ �˾Ƴ� ���� �� ���� �޸𸮸� ���� �� �� ���� ���϶�!
	//    �̷��� ����ؼ� ������ �޸��� ũ�⸦ �����ؾ� �Ѵ�.
	int *p = (int*) malloc(sizeof(int) * 5); // 20 ����Ʈ�� �����Ѵ�. = int p[20]

	// int �޸𸮿� �� ����
	for (int i = 0; i < 5; i++) {
		p[i] = 100 + i;
	}

	// �޸𸮿� ����� �� ���
	for (int i = 0; i < 5; i++) {
		printf("%d,", p[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
}









