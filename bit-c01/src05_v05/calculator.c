/* ����� ������ �Լ��� ��Ƶ� ����
 */

#include <stdio.h>
#include "calculator.h"

// app.c���� ������ �۷ι� ������ ����
extern Expr exprVal;

void compute() {
	switch (exprVal.op) {
	case '+': exprVal.result = exprVal.a + exprVal.b; break;
	case '-': exprVal.result = exprVal.a - exprVal.b; break;
	case '*': exprVal.result = exprVal.a * exprVal.b; break;
	case '/': exprVal.result = exprVal.a / (float)exprVal.b; break;
	case '%': exprVal.result = exprVal.a % exprVal.b; break;
	default:
		printf("'%c' �����ڴ� �������� �ʽ��ϴ�.", exprVal.op);
	}
}





