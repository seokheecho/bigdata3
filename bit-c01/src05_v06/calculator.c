/* ����� ������ �Լ��� ��Ƶ� ����
 */

#include <stdio.h>
#include "calculator.h"

void compute(PExpr pExpr) {
	switch (pExpr->op) {
	case '+': pExpr->result = pExpr->a + pExpr->b; break;
	case '-': pExpr->result = pExpr->a - pExpr->b; break;
	case '*': pExpr->result = pExpr->a * pExpr->b; break;
	case '/': pExpr->result = pExpr->a / (float)pExpr->b; break;
	case '%': pExpr->result = pExpr->a % pExpr->b; break;
	default:
		printf("'%c' �����ڴ� �������� �ʽ��ϴ�.", pExpr->op);
	}
}





