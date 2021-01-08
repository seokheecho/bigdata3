/* ������ �������� - �⺻ ������ Ÿ�Կ� ������(qualifier) ���̱�
 * => ������(qualifier)?
 *    - ��� ������ ���ϱ� ���� ���̴� Ư���� Ű�����̴�.
 * => short : ���� Ÿ�� Ÿ�Ժ��� ���� ũ���� �޸𸮸� �����
 * => long : ���� Ÿ�Ժ��� ū ũ���� �޸𸮸� �����
 *
 */

#include <stdio.h>
#include <stdlib.h>



int main02(void) {
	// Ÿ�� �տ� ���̴� ������(qualifier; �����ϴ� ��ɾ�)
	short int si; // �޸��� �ִ� ũ�⸦ int ���Ϸ� �϶�! ���� 16��Ʈ ũ�⸦ ���´�.
	long int li; // �޸��� �ּ� ũ�⸦ int �̻����� �϶�! ���� 32��Ʈ ũ�⸦ ���´�.
	//long float lf; // ������ ����! float �տ� long�� ���� �� ����.
	long double; // double ũ�� ���� �� ū ũ�⸦ ���´�.

	printf("short int=%d\n", sizeof(short int)); // 2����Ʈ
	printf("long int=%d\n", sizeof(long int)); // 8����Ʈ
	printf("long double=%d\n", sizeof(long double)); // 16����Ʈ

	// Ÿ�� �տ� �����縦 ���̴� ��� ���� int�� ������ �� �ִ�.
	short s;
	long l;
	printf("short=%d\n", sizeof(short)); // 2����Ʈ
	printf("long=%d\n", sizeof(long)); // 8����Ʈ


	return EXIT_SUCCESS;
}
