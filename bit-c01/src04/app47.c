/* ����ü - ���ǿ� ���
 * => ����� ������ Ÿ���� �����ϴ� �����̴�.
 *    �ٸ�, �� ������ Ÿ���� ���� �ٷ�� �����ڴ�
 *    ���� �Լ��� �����ؼ� ����ؾ� �Ѵ�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main47(void) {

	// => x, y ��ǥ ���� ǥ���� ������ Ÿ�� ����
	struct point {
		int x;
		int y;
	};

	// => ���� ������ ������ ���� �޸� �غ�
	struct point p1;
	struct point p2;

	// => ����ü �޸𸮿� ���� �ֱ�
	p1.x = 100;
	p1.y = 200;
	p2.x = 20;
	p2.y = 30;

	// => ����ü�� ���� ������
	printf("(x, y) = (%d, %d)\n", p1.x, p1.y);
	printf("(x, y) = (%d, %d)\n", p2.x, p2.y);


	return EXIT_SUCCESS;
}







