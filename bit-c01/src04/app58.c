/* ����ü - union
 * => �پ��� Ÿ���� ����� �� ���� �����ϰ� ���� �� ����Ѵ�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main58(void) {

	// union ���� ��
	char name[20];
	int age;

	// ���� �� ������ �����Ϸ��� �����Ϳ� ���� ��뿩�ΰ� �����ȴ�.
	// => �׷����� �ұ��ϰ� �ϴ� ���� �� ���� ������ ��� �غ��ؾ� �Ѵ�.
	int grade;
	float score;
	char working;

	// �л� ������ ����
	strcpy(name, "ȫ�浿");
	age = 20;
	grade = 4;
	printf("%s, %d, %d\n", name, age, grade);

	// ������ ������ ����
	strcpy(name, "�Ӳ���");
	age = 30;
	score = 3.7;
	printf("%s, %d, %f\n", name, age, score);

	// ������ ������ ����
	strcpy(name, "������");
	age = 22;
	working = 'Y';
	printf("%s, %d, %c\n", name, age, working);

	return EXIT_SUCCESS;
}







