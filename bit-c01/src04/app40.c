/* ���ǹ� - switch II
 * => break ���� ������ ��� ���� case ������ �����Ѵ�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main40(void) {
	int level = 1;

	switch (level) {
	case 0: printf("�մ�\n");
	case 1: printf("ȸ��\n");
	case 2: printf("������\n");
	default: printf("��ȿ���� ���� ����Դϴ�.\n");
	}

	return EXIT_SUCCESS;
}







