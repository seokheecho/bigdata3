/* ver02
 * => ����ڷκ��� ���� �Է� �޴´�.
 * => �Է� ���� ���� ����Ͽ� ����� ����Ѵ�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	int a, b;
	char op;
	float result;

	printf("input: ");
	scanf("%d %c %d", &a, &op, &b);

	switch (op) {
	case '+': result = a + b; break;
	case '-': result = a - b; break;
	case '*': result = a * b; break;
	case '/': result = a / (float)b; break;
	case '%': result = a % b; break;
	default:
		printf("'%c' �����ڴ� �������� �ʽ��ϴ�.", op);
	}
	printf("result: %f\n", result);

	return EXIT_SUCCESS;
}







