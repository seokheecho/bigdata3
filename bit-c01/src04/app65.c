/* scanf() - Ű���� �Է� �ޱ� III
 * => scanf(���˹��ڿ�, ���� ���� �޸��� �ּ�, ...);
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main65(void) {
	char name[50];
	int kor, eng, math, sum;
	float aver;

	printf("name kor eng math?");
	scanf("%s %d %d %d", name, &kor, &eng, &math);

	sum = kor + eng + math;
	aver = sum / 3.0;

	printf("name: %s\n", name);
	printf("total: %d\n", sum);
	printf("average: %f\n", aver);

	return EXIT_SUCCESS;
}







