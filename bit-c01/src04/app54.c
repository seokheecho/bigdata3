/* ����ü - ����ü �ּ� �����ϱ�
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct app54_point {
	int x;
	int y;
};

struct app54_point *app54_f1() {
	struct app54_point p;
	p.x = 100;
	p.y = 200;
	return &p; // ���� ����ü �޸𸮴� �Լ� ȣ���� ������ ������� ������ �ּҸ� �����ؼ��� �ȵȴ�.
	           // ����ü�� �ּҸ� �����ϰ� �ʹٸ� ���� f2() �Լ�ó�� �϶�!
}

struct app54_point *app54_f2() {
	// �Լ��� ���� �Ŀ� �޸��� �ּҸ� �����ϰ� �ʹٸ�
	// ������ ���� ���� �޸𸮸� �����϶�!
	printf("����üũ��: %d\n", sizeof(struct app54_point));
	struct app54_point *p = (struct app54_point *) malloc(sizeof(struct app54_point));
	p->x = 100;
	p->y = 200;
	return p;
}

int main54(void) {

	struct app54_point *p;

	//p = app54_f1(); // ������ ����! ���� ������ �ּҸ� ���� �޾Ƽ��� �ȵȴ�.
	p = app54_f2();

	// ����!
	// => �Լ��� ���� �����ڰ� ���� ����� �� ���ٸ�,
	//    �Լ��� ������ �޸��� �ּҴ� ��� �� ����ؾ� �Ѵ�.
	free(p);

	printf("main() => (%d,%d)\n", p->x, p->y);


	return EXIT_SUCCESS;
}







