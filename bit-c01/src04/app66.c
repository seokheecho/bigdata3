/* getchar(), putchar() - Ű���� �Է� �ޱ�
 * => �� ���ڸ� �Է� �ް� �� ���ڸ� ����� �� ����Ѵ�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main66(void) {
	int ch;

	while ((ch = getchar()) != EOF) { // EOF(End of File) => Ctrl + z Ű�� ������ ��!
		putchar(ch);
	}

	printf("stop program!\n");
	printf("%d\n", EOF);
	return EXIT_SUCCESS;
}







