/* �Լ� - �Լ� ����
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1) ���� ���� ���� ��� void�� �����ؾ� �Ѵ�.
void app23_f1() {
	puts("f1()...");
}

// 2) �������� ���� ���� ������ ���� Ÿ���� �������� �ʾƵ� �Ǿ���!
// => �׷��� ���뿡 �ͼ��� ���� ���� ������ void�� �����ϴ� ���� �����̴�.
app23_f2() {
	puts("f2()...");
}

// 3) �Ķ���Ͱ� �ִ� �Լ�
void app23_f3(char* name, int age) {
	// %s : ���ڿ��� ��� �ִ� �޸��� �ּҸ� ��� �Ѵ�.
	//      ���ڿ��� ���� �ν� �� �� �ֵ��� ���ڿ��� ���� �ݵ�� null�� ������ �Ѵ�.
	// %d : ���� ���� 10������ ����Ѵ�. �׳� ���� ������ �����ϸ� �ȴ�.
	printf("%s(%d)�� ȯ���մϴ�!\n", name, age);
}

// 4) ���� �����ϴ� �Լ�
//    => ������ ���� Ÿ���� �����ؾ� �Ѵ�.
char* app23_f4() {
	char *buf = (char*) malloc(100);
	strcpy(buf, "Hello");
	return buf; // ���� ������ ���� return ����� ����Ѵ�.
}

// 5) �ּҸ� �ƱԸ�Ʈ�� �޴� �Լ�
void app23_f5(char* buf) {
	strcpy(buf, "Hello2");
}

// 6) �ƱԸ�Ʈ�� �޾Ƽ� ����� �� ����� �����ϴ� �Լ�
int app23_f6(int a, int b) {
	return a + b; // ���� ������ ���� return ����� ����Ѵ�.
}

int main23(void) {
	app23_f1();
	app23_f2();
	app23_f3("ȫ�浿", 24);

	char* buf = app23_f4();
	printf("%s\n", buf);
	free(buf);

	char buf2[100];
	app23_f5(buf2);
	printf("%s\n", buf2);

	printf("%d\n", app23_f6(20, 30));

	return EXIT_SUCCESS;
}










