/* atoi(), atof(), atol() - ���ڿ��� �ٸ� ���� Ÿ���� ������ ��ȯ�ϱ�
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int i = atoi("1250");
	float f = atof("3.14");
	long l = atol("123456");

	printf("%d, %f, %d\n", i, f, l);

	return EXIT_SUCCESS;
}







