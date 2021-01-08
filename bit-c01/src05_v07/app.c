/* v07 => ������ ó���� static �Լ��� �̿��Ͽ� �����Ѵ�.
 *        - ������ �����ϴ� �κ��� �Լ��� �и��Ѵ�.
 *        - �и��� �Լ��� calculator.c ������ ���ǵ��� static���� ������ �����Ѵ�.
 * v06 => ����ü �����͸� �̿��Ͽ� �Է� ���� ��� ���� �ٷ��.
 * v05 => ����ü�� �̿��Ͽ� �Է� ���� ��� ���� �ٷ��.
 * v04 => �Լ����� �������� �ϱ� ���� ������ ���Ϸ� �и��ϱ�.
 * v03 => �ڵ带 �Լ��� �ɰ���.
 * v02 => �Է� ���� ���� ����Ͽ� ����� ����Ѵ�.
 * v01 => ����ڷκ��� ���� �Է� �޴´�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "view.h"
#include "calculator.h"

int main(void) {
	Expr exprVal;

	prompt("input: ", &exprVal);
	compute(&exprVal);
	displayResult(exprVal); // ������ �����ϸ� �ȵǱ� ������ �Ķ���ͷ� ���� �ѱ��.

	return EXIT_SUCCESS;
}
