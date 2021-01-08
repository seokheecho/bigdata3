/* Ŭ���� - �ν��Ͻ� ����(reference) II
 * => �Լ��� �Ķ���Ϳ��� ������ ����ϱ�
 *
 */
#include <iostream>
#include "Calculator.h"

using namespace std;

void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int* a, int* b) { // ������ �ּҸ� �޴� �Ķ����
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap3(int& a, int& b) { // ������ �߰��� �̸��� ���̴� �Ķ����
	// �Ķ���ͷ� ���۷����� ����ϰ� �Ǹ� ������ �������� �ڵ带 �ۼ��ϱⰡ ���ϴ�.
	// ������ ������ �ٷ� ���� �׻� * ��ȣ�� ����ؾ� �ߴ�.
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 20;

	swap1(a, b);
	cout << "a=" << a << "," << "b=" << b << endl;

	a = 10, b = 20;
	swap2(&a, &b);
	cout << "a=" << a << "," << "b=" << b << endl;

	a = 10, b = 20;
	swap3(a, b);
	cout << "a=" << a << "," << "b=" << b << endl;

	return 0;
}




