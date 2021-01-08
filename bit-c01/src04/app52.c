/* ����ü - ����ü�� call by reference
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct app52_point {
	int x;
	int y;
};

void app52_f1(struct app52_point *p) {
	p->x = p->x + 100;
	p->y = p->y + 100;
	printf("app52_f1() => (%d,%d)\n", p->x, p->y);
}

int main52(void) {

	struct app52_point p;
	p.x = 100;
	p.y = 200;

	app52_f1(&p); // �Լ��� ȣ���� �� ����ü�� �ּҸ� �ѱ��. "call by reference" //

	printf("main() => (%d,%d)\n", p.x, p.y);


	return EXIT_SUCCESS;
}







