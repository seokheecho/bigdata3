/* ����ü - ����ü�� call by value
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct app51_point {
	int x;
	int y;
};

void app51_f1(struct app51_point p) {
	p.x = p.x + 100;
	p.y = p.y + 100;
	printf("app51_f1() => (%d,%d)\n", p.x, p.y);
}

int main51(void) {

	struct app51_point p;
	p.x = 100;
	p.y = 200;

	app51_f1(p); // �Լ��� ȣ���� �� ����ü�� ���� �ѱ��. "call by value"

	printf("main() => (%d,%d)\n", p.x, p.y);


	return EXIT_SUCCESS;
}







