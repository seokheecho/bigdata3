/* ����ü - ����ü�� ������ II
 * => ����ü ���ǿ� ������ ���� �� �Ϲ� ���� ������ �� ���� �ϱ�
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main50(void) {

	struct point {
		int x;
		int y;
	} p1, *p2;


	p1.x = 100; p1.y = 200;
	printf("(x, y) = (%d, %d)\n", p1.x, p1.y);

	p2 = &p1;

	p2->x = 500;
	printf("(x, y) = (%d, %d)\n", p1.x, p1.y);

	return EXIT_SUCCESS;
}







