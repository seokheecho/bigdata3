/* calculator.c�� ���ǵ� �Լ��� ������Ÿ���� �����Ѵ�.
 */

#ifndef CALCULATOR_H_
#define CALCULATOR_H_

typedef struct expr {
	int a;
	int b;
	char op;
	float result;
} Expr, *PExpr;

void compute(PExpr);

#endif /* CALCULATOR_H_ */
