/* ȭ�� ��¿� ���õ� �ڵ带 �� ���Ͽ� �д�.
 */

#include <stdio.h>
#include "calculator.h"

// app.c�� ����� �۷ι� ������ ����ϰڴٰ� �����Ѵ�.
// ��� ���Ͽ� ����ƴ��� ������ �ʿ�� ����. �ٸ� ���Ͽ� ����� �۷ι� ������ ã�� �����̴�.
extern Expr exprVal;

void prompt(char *message) {
	printf(message);
	scanf("%d %c %d", &exprVal.a, &exprVal.op, &exprVal.b);
}

void displayResult() {
	puts("---------------------------");
	printf("| %d %c %d = %.2f\n", exprVal.a, exprVal.op, exprVal.b, exprVal.result);
	puts("---------------------------");
}





