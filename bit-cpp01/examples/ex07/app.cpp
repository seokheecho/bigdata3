/* Ŭ���� - ������
 * - �ν��Ͻ��� ������ �� �ڵ����� ȣ��Ǵ� �Լ�
 * - �����ڴ� ���� Ÿ���� ����.
 */
#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
	// Ŭ���� �ν��Ͻ� ����
	Calculator c1; // �ν��Ͻ��� ���� �� �⺻ �����ڸ� �ڵ����� ȣ���Ѵ�.

	c1.plus(10);
	c1.plus(20);
	c1.plus(30);
	c1.minus(7);

	cout << "���: " << c1.getResult() << endl;


	return 0;
}




