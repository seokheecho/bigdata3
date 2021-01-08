/* ����� ������ �Լ��� ��Ƶ� ����
 */

#include <stdio.h>
#include "calculator.h"

static float plus(int, int);
static float minus(int, int);
static float multiple(int, int);
static float divide(int, int);
static float mod(int, int);

void compute(PExpr pExpr) {
	switch (pExpr->op) {
	case '+': pExpr->result = plus(pExpr->a, pExpr->b); break;
	case '-': pExpr->result = minus(pExpr->a, pExpr->b); break;
	case '*': pExpr->result = multiple(pExpr->a, pExpr->b); break;
	case '/': pExpr->result = divide(pExpr->a, pExpr->b); break;
	case '%': pExpr->result = mod(pExpr->a, pExpr->b); break;
	default:
		printf("'%c' �����ڴ� �������� �ʽ��ϴ�.", pExpr->op);
	}
}

// ���� �Լ����� �� ��� �ȿ����� ����� ���̱� ������ static�� �ٿ� �ܺ��� ������ ���´�.
static float plus(int a, int b) {return a + b;}
static float minus(int a, int b) {return a - b;}
static float multiple(int a, int b) {return a * b;}
static float divide(int a, int b) {return a / (float)b;}
static float mod(int a, int b) {return a % b;}



