/* ����ü - typedef
 * => ����ü ������ ������ �� struct Ű���带 �׻� ����ؾ� �Ѵ�.
 *    �ſ� ���ŷӰ� �����ϴ�. �̰��� �ذ��ϱ� ���� ������ ������ typedef�̴�.
 *    typedef���� ������ Ÿ���� �ǹ��ִ� �̸��� �������ϸ� ���������� ��������.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct app55_point {
	int x;
	int y;
};

typedef struct app55_point Point;
typedef struct app55_point *PPoint;

PPoint app55_f2() {
	printf("����üũ��: %d\n", sizeof(Point));
	PPoint p = (PPoint) malloc(sizeof(Point));
	p->x = 100;
	p->y = 200;
	return p;
}

int main55(void) {

	PPoint p;

	p = app55_f2();

	free(p);

	printf("main() => (%d,%d)\n", p->x, p->y);


	return EXIT_SUCCESS;
}







