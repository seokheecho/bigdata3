/* v04 => �Լ����� �������� �ϱ� ���� ������ ���Ϸ� �и��ϱ�.
 * v03 => �ڵ带 �Լ��� �ɰ���.
 * v02 => �Է� ���� ���� ����Ͽ� ����� ����Ѵ�.
 * v01 => ����ڷκ��� ���� �Է� �޴´�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "view.h"
#include "calculator.h"

// ���� �Լ����� ����� �� �ֵ��� �۷ι� ������ �����.
int a, b;
char op;
float result;

int main(void) {

	prompt("input: ");
	compute();
	displayResult();

	return EXIT_SUCCESS;
}
