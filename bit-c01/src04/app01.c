/* ������ �������� - �⺻ ������ Ÿ��
 */

#include <stdio.h>
#include <stdlib.h>



int main01(void) {
	char c; // 1 ����Ʈ ���� �ڵ带 ������ �� ����ϴ� ����
	int i; // ���� �� ����. ������ ����(16��Ʈ, 32��Ʈ, 64��Ʈ) ũ�Ⱑ �����ȴ�.
	float f; // ������(32��Ʈ) �ε� �Ҽ���. ��ȿ�ڸ��� 7�ڸ�.
	double d; // ������(64��Ʈ) �ε� �Ҽ���. ��ȿ�ڸ��� 15�ڸ�.

	printf("char=%d\n", sizeof(char)); // 1 ����Ʈ
	printf("int=%d\n", sizeof(int)); // 4����Ʈ
	printf("float=%d\n", sizeof(float)); // 4����Ʈ
	printf("double=%d\n", sizeof(double)); // 8����Ʈ

	return EXIT_SUCCESS;
}
