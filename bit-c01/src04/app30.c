/* ������ - �� ������(&&, ||, !)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main30(void) {
	// && => �� �� true �� ���� true�� �����Ѵ�.
	// || => �� �� �� ���� true�̸� true�� �����Ѵ�.
	// true => 0�̿��� ��� ���ڴ� true�̴�.
	// false => 0
	printf("5 && 2 = %d\n", 5 && 2);
	printf("5 || 2 = %d\n", 5 || 2);

	printf("5 && 0 = %d\n", 5 && 0);
	printf("5 || 0 = %d\n", 5 || 0);

	printf("-5 && 0 = %d\n", -5 && 0);
	printf("-5 || 0 = %d\n", -5 || 0);

	printf("!5 = %d\n", !5);
	printf("!-5 = %d\n", !-5);
	printf("!0 = %d\n", !0);

	return EXIT_SUCCESS;
}







