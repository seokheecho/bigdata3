/* ����ü - ����ü�� ������
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main49(void) {

	struct point {
		int x;
		int y;
	};

	struct point p1;
	p1.x = 100; p1.y = 200;
	printf("(x, y) = (%d, %d)\n", p1.x, p1.y);

	struct point *p2;
	p2 = &p1;

	// ������ ������ ���� ����ü�� ����� ������ ���� ��(.) ��ſ� ȭ��ǥ(->)�� ����ؾ� �Ѵ�.
	p2->x = 500;
	printf("(x, y) = (%d, %d)\n", p1.x, p1.y);

	return EXIT_SUCCESS;
}







