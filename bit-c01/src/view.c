/* ȭ�� ��¿� ���õ� �ڵ带 �� ���Ͽ� �д�.
 */

#include <stdio.h>
#include "calculator.h"

void prompt(char *message, PExpr pExpr) {
	printf(message);
	scanf("%d %c %d", &pExpr->a, &pExpr->op, &pExpr->b);
}

void displayResult(Expr expr) {
	puts("---------------------------");
	printf("| %d %c %d = %.2f\n", expr.a, expr.op, expr.b, expr.result);
	puts("---------------------------");
}





