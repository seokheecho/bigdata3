/* getc(), putc() - ���� ��ü�κ��� �� ���� ���ڸ� �а� ����
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main67(void) {
	int ch;

	// stdin - ǥ�� �Է� ��ġ(Ű����)�� FILE*
	// stdout - ǥ�� ��� ��ġ(�ܼ�)�� FILE*
	while ((ch = getc(stdin)) != EOF) { // EOF(End of File) => Ctrl + z Ű�� ������ ��!
		putc(ch, stdout);
	}

	printf("stop program!\n");
	return EXIT_SUCCESS;
}







