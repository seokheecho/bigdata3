/* ����� ������ �Լ��� ��Ƶ� ����
 */

#include <stdio.h>
#include "calculator.h"

static float plus(int, int);
static float minus(int, int);
static float multiple(int, int);
static float divide(int, int);
static float mod(int, int);

typedef float (*Func)(int, int); // Func�� ������ �ƴ϶� Ÿ���̴�.

// �����ڿ� �� ������ ó���ϴ� �Լ��� ���� ������ ������ ����ü�� �����Ѵ�.
typedef struct op_func_map {
	char op;
	Func func;
} OpFuncMap, *POpFuncMap;

static OpFuncMap opMap[] = {
		{'+', plus},
		{'-', minus},
		{'*', multiple},
		{'/', divide},
		{'%', mod}
};


void compute(PExpr pExpr) {
	int mapSize = sizeof(opMap) / sizeof(OpFuncMap); // �迭�� ũ�⸦ ����Ѵ�.

	Func func = 0; // ������ ������ �Լ� �ּҸ� ���� ����

	for (int i = 0; i < mapSize; i++) { // �ʿ��� ������ ������ ������ �Լ��� ã�´�.
		if (pExpr->op == opMap[i].op) { // ã������ func ������ �ش� �Լ��� �ּҸ� �����Ѵ�.
			func = opMap[i].func;
			break; // ã������ �ݺ����� ������.
		}
	}

	if (func == 0) { // �ش� �����ڸ� ó���� �Լ��� ã�� ���ߴٸ�,
		printf("'%c' �����ڴ� �������� �ʽ��ϴ�.", pExpr->op);
		return;
	}

	// �Լ��� ȣ���Ͽ� ����� ������ �� �� ����� �޸𸮿� ��´�.
	pExpr->result = func(pExpr->a, pExpr->b);

}

// ���� �Լ����� �� ��� �ȿ����� ����� ���̱� ������ static�� �ٿ� �ܺ��� ������ ���´�.
static float plus(int a, int b) {return a + b;}
static float minus(int a, int b) {return a - b;}
static float multiple(int a, int b) {return a * b;}
static float divide(int a, int b) {return a / (float)b;}
static float mod(int a, int b) {return a % b;}



