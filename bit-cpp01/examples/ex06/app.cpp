/* Ŭ���� ���� - ��� ���ϰ� �ҽ� ����
 * - ������� : Ŭ������ �����ϴ� �ڵ带 �д�.
 * - �ҽ����� : Ŭ������ �Լ��� �����ϴ� �ڵ带 �д�.
 */
#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
	// Ŭ���� �ν��Ͻ� ����
	Calculator c1;

	c1.reset();
	c1.plus(10);
	c1.plus(20);
	c1.plus(30);
	c1.minus(7);

	cout << "���: " << c1.getResult() << endl;


	return 0;
}




