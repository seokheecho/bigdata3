/* �Լ� - ������ ��� ���� ���� II
 * => �۷ι� ���� :
 *    - .c ���Ͽ��� �Լ� �ٱ��� ����� ����
 *    - �� ������ ����� ���Ͽ����� ������ �� �ִ�.
 *    - �ٸ� ���Ͽ��� �� ���Ͽ� ����� �۷ι� ������ ����Ϸ��� ������ ����
 *      "�ܺ� ���Ͽ� ����� �̷��̷��� ������ ����ϰڴ�!" ��� ��������� �Ѵ�.
 *           extern ������Ÿ�� �ٸ����Ͽ�����Ⱥ�����;
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int app26_sum = 0;

// �۷ι� ������ ����ϴ� �Լ�
void app26_plus(int value) {app26_sum += value;}
void app26_minus(int value) {app26_sum -= value;}

// �ٸ� .c ���Ͽ� ����� �Լ��� ����Ϸ��� ���� function prototype�� �����ؾ� �Ѵ�.
void app26_multiple(int);
void app26_divide(int);

int main26(void) {
	app26_plus(100);
	app26_plus(27);
	app26_plus(37);
	app26_minus(5);
	app26_minus(6);

	// �ٸ� ���Ͽ� ����� �Լ� ȣ���ϱ�
	app26_divide(6);
	app26_multiple(3);

	printf("�հ�=%d\n", app26_sum);

	return EXIT_SUCCESS;
}







