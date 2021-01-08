/* ����ü - union III
 * => ����ü�� ���Ͽ�
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct member {
	char name[50];
	int age;
	union option { // 4����Ʈ �޸𸮸� �� �� ����� ����, int �Ǵ� float �Ǵ� char ������ ����ϰڴ�!
		int grade;
		float score;
		char working;
	} opt;
} Member, *PMember;

int main60(void) {

	printf("struct member�� ũ��=%d\n", sizeof(Member));

	// �л� ������ ����
	Member m1;
	strcpy(m1.name, "ȫ�浿");
	m1.age = 20;
	m1.opt.grade = 4;
	printf("%s, %d, %d\n", m1.name, m1.age, m1.opt.grade);

	// ������ ������ ����
	Member m2;
	strcpy(m2.name, "�Ӳ���");
	m2.age = 30;
	m2.opt.score = 3.7;
	printf("%s, %d, %f\n", m2.name, m2.age, m2.opt.score);

	// ������ ������ ����
	Member m3;
	strcpy(m3.name, "������");
	m3.age = 22;
	m3.opt.working = 'Y';
	printf("%s, %d, %c\n", m3.name, m3.age, m3.opt.working);

	return EXIT_SUCCESS;
}







