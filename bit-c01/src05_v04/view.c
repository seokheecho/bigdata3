/* ȭ�� ��¿� ���õ� �ڵ带 �� ���Ͽ� �д�.
 */

#include <stdio.h>

// app.c�� ����� �۷ι� ������ ����ϰڴٰ� �����Ѵ�.
// ��� ���Ͽ� ����ƴ��� ������ �ʿ�� ����. �ٸ� ���Ͽ� ����� �۷ι� ������ ã�� �����̴�.
extern int a, b;
extern char op;
extern float result;

void prompt(char *message) {
	printf(message);
	scanf("%d %c %d", &a, &op, &b);
}

void displayResult() {
	puts("---------------------------");
	printf("| %d %c %d = %.2f\n", a, op, b, result);
	puts("---------------------------");
}





