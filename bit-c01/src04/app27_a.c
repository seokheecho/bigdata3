/* �Լ� - .c ���Ͽ����� ����ϵ��� ������ �Լ��� �������� ����
 * => �۷ι� ������ static ���̸� �ش� .c ���Ͽ����� ���� �� �ִ�.
 * => �Լ��� static�� ���̸� .c ���Ͽ����� ���� �� �ִ�.
 *
 * => static�� ����
 *    - Ư���� .c ���Ͽ����� ���� ������ �Լ���� static�� �ٿ���.
 *      �ٸ� ���ϰ� �и��Ǿ� �����Ǳ� ������ �������� ���Ƽ� �߻��ϴ� �������� �ع�� �� �ִ�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// app27_a.c �� ����� ����
static int sum = 0;

// app27_a.c �� ���ǵ� �Լ�
void app27_plus(int value) {sum += value;}
void app27_minus(int value) {sum -= value;}

// app27_b.c �� ���ǵ� �Լ�
// => static�� ���� �Լ��� �� ���Ͽ��� ����� �� ���� ������ function prototype�� �����غ��� �ҿ����.
//void app27_multiple(int);
//void app27_divide(int);
void app27_test();

int main27(void) {
	app27_plus(100);
	app27_plus(27);
	app27_plus(37);
	app27_minus(5);
	app27_minus(6);
	printf("�հ�=%d\n", sum);

	// app27_b.c ���Ͽ��� static���� ����� �Լ��� ����� �� ����.
	//app27_divide(6); // ������ ����!
	//app27_multiple(3); // ������ ����!

	// static �� �Ⱥ��� �Լ��� �������� ����� �� �ִ�.
	app27_test();

	return EXIT_SUCCESS;
}







