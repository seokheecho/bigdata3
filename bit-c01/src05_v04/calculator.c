/* ����� ������ �Լ��� ��Ƶ� ����
 */

#include <stdio.h>

// app.c���� ������ �۷ι� ������ ����
extern int a, b;
extern char op;
extern float result;

void compute() {
	switch (op) {
	case '+': result = a + b; break;
	case '-': result = a - b; break;
	case '*': result = a * b; break;
	case '/': result = a / (float)b; break;
	case '%': result = a % b; break;
	default:
		printf("'%c' �����ڴ� �������� �ʽ��ϴ�.", op);
	}
}





