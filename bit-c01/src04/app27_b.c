/* �Լ� - static ������ �Լ�
 * => �۷ι� ������ �Լ� �տ� static�� ���̸�
 *    �ش� ������ �Լ��� ������ .c ���� �ȿ����� ���� �� �ִ�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// app27_b.c ������ ����� �� �ִ� ����
static int sum = 1;

// app27_b.c ������ ����� �� �ִ� �Լ�
static void app27_multiple(int value) {sum *= value;}
static void app27_divide(int value) {sum /= value;}

// static�� �Ⱥ��� �Ϲ� �Լ��� �ٸ� .c ���� ����� �� �ִ�.
void app27_test() {
	app27_multiple(20);
	app27_divide(5);
	printf("app27_b.app27_sum=%d\n", sum);
}



