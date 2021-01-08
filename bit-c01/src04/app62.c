/* enum - ��� ���� ������ �� ���� ����Ѵ�.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����� ���� �ϴ� ���
// 1) ��ũ�� ����ϱ�
#define C 		0
#define CPP 	1
#define JAVA 	2
#define PYTHON 	3

// 2) enum�� �̿��ϴ� ���
// => ��� ���� ������ ����� ������� 0���� �����ϴ� �����̴�.
enum language {
	LANG_C, LANG_CPP, LANG_JAVA, LANG_PYTHON
};

// => enum�� �̸��� ���û����̴�. �������� �ʾƵ� �ȴ�.
enum {
	LANG2_C, LANG2_CPP, LANG2_JAVA, LANG2_PYTHON
};

// => Ư�� ������ �����ϰ� �ʹٸ� = �����ڸ� ����Ͽ� ���� �����϶�!
enum {
	LANG3_C = 100, LANG3_CPP = 200, LANG3_JAVA = 300, LANG3_PYTHON = 400
};

int main62(void) {
	printf("%d\n", JAVA);
	printf("%d\n", LANG_JAVA);
	printf("%d\n", LANG2_JAVA);
	printf("%d\n", LANG3_JAVA);

	return EXIT_SUCCESS;
}







