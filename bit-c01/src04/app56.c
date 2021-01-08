/* ����ü - typedef II
 * => typedef + struct + ���� ����
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct app56_point {
	int x;
	int y;
} App56Point, *PApp56Point;

/* ���� ������ Ǯ��� ������ ����.
struct app56_point {
	int x;
	int y;
};

typdef struct app56_point App56Point;
typdef struct app56_point *PApp56Point;
 */

PApp56Point app56_f2() {
	PApp56Point p = (PApp56Point) malloc(sizeof(App56Point));
	p->x = 100;
	p->y = 200;
	return p;
}

int main56(void) {

	PApp56Point p;

	p = app56_f2();

	free(p);

	printf("main() => (%d,%d)\n", p->x, p->y);


	return EXIT_SUCCESS;
}







