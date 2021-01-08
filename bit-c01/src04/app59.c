/* ����ü - union II
 * => �پ��� Ÿ���� ����� �� ���� �����ϰ� ���� �� ����Ѵ�.
 * => �� ���� �޸𸮸� ����� ���� �پ��� �̸��� ������ ����ϴ� �����̴�.
 * => �� ���� �޸𸮸� ����� �پ��� Ÿ���� �����͸� �����ϴµ� ����� �� �־ �޸𸮰� ����ȴ�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main59(void) {

	// union ���� ��
	char name[20];
	int age;

	// ���� �� ������ �� Ÿ������ �����Ѵ�.
	/*
	int grade;
	float score;
	char working;
    */
	union option {
		int grade;  	// �޸� ũ�� : 4 ����Ʈ
		float score;  	// �޸� ũ�� : 4 ����Ʈ
		char working;  	// �޸� ũ�� : 1 ����Ʈ
	};

	// ���Ͽ� ���� ����
	// => �޸𸮴� ���Ͽ¿� ����� ���� ���� �߿��� ���� ū ������ ũ��� �����ȴ�.
	union option opt;
	printf("���Ͽ� Ÿ���� ũ��=%d\n", sizeof(union option));

	// �л� ������ ����
	strcpy(name, "ȫ�浿");
	age = 20;
	opt.grade = 4;
	printf("%s, %d, %d\n", name, age, opt.grade);

	// ������ ������ ����
	strcpy(name, "�Ӳ���");
	age = 30;
	opt.score = 3.7;
	printf("%s, %d, %f\n", name, age, opt.score);

	// ������ ������ ����
	strcpy(name, "������");
	age = 22;
	opt.working = 'Y';
	printf("%s, %d, %c\n", name, age, opt.working);

	return EXIT_SUCCESS;
}







