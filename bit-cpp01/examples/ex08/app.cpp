/* Ŭ���� - �Ķ���Ͱ� �ִ� ������
 * - �Ķ���� �ִ� �����ڸ� ȣ���Ϸ��� �ν��Ͻ��� ���� �� ���� �����ؾ� �Ѵ�.
 */
#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
	// Ŭ���� �ν��Ͻ� ����
	//Calculator c1; // ������ ����! �Ķ���Ͱ� �ִ� �����ڸ� ȣ���Ϸ��� �ݵ�� ���� �Ѱ���� �Ѵ�.
	Calculator c1(100); // ������ ���� �Լ�ó�� �Ķ���͸� �����ϸ� �ȴ�.

	c1.plus(10);
	c1.plus(20);
	c1.plus(30);
	c1.minus(7);

	cout << "���: " << c1.getResult() << endl;


	return 0;
}




