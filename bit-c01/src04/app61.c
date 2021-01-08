/* ����ü - ��Ʈ �ʵ�
 * => ����ü ����� ũ�⸦ �����ϰ� ������ �� ����Ѵ�.
 * => struct ����ü�� {
 *       ������Ÿ�� ������ : �ʵ� ũ��;
 *    }
 * => ������ Ÿ���� int ���� �Ѵ�.
 *    ������ ���� ������ ������ Ÿ��(signed)���� ����� �����ϴ� Ÿ��(unsigned)���� �����ϴ� ���� ����.
 * => int ũ�⸦ �Ѿ�� ���� int ũ�� ��ŭ �޸𸮰� �߰��ȴ�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main61(void) {
	struct flag {
		unsigned int c;
		unsigned int cpp;
		unsigned int java;
		unsigned int python;
	} f1;

	printf("struct flag�� ũ��=%d\n", sizeof(struct flag));
	f1.c = 1;
	f1.cpp = 1;
	f1.java = 1;
	f1.python = 1;
	printf("%d,%d,%d,%d\n", f1.c, f1.cpp, f1.java, f1.python);

	// c, cpp, java, python ���α׷��� ���� ���θ� �����ϱ� ����
	// ������ ���� int ������ �����Ͽ���.
	// ���� ���� ������ ������ �����ؾ� �Ѵ�.
	// ������1 - �޸𸮸� �ʹ� ���� ���� �Ѵ�.
	// ������2 - 1�� 0���� ǥ���Ǵ� ���� �ְ� �����Ⱑ ���ŷӴ�.

	// �̷��� ���� ���� ���� ���� �ٷ�� �޸� ���� �����ϱ� ���� ������ ������ ��Ʈ �ʵ��̴�.
	// ��Ʈ �ʵ带 ����� �� �޸� ũ���� �⺻ ������ int �̴�. int ��ŭ �����Ѵ�.
	struct flag2 {
		unsigned int c 		: 1;
		unsigned int cpp 	: 1;
		unsigned int java 	: 1;
		unsigned int python : 1;
	} f2;

	printf("struct flag2�� ũ��=%d\n", sizeof(struct flag2));
	f2.c = 1;
	f2.cpp = 1;
	f2.java = 1;
	f2.python = 1;
	printf("%d,%d,%d,%d\n", f2.c, f2.cpp, f2.java, f2.python);

	return EXIT_SUCCESS;
}







