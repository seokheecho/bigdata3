/* Ŭ���� - ������ �����ε��� ������ ȣ�� ���
 * - ��ü���� ���α׷� ����� �⺻ Ư¡�� �����ε��� �����ڿ� ������ �� �ִ�.
 */
#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
	// �ν��Ͻ��� ������ �� �⺻ �����ڸ� ȣ���Ѵ�.
	Calculator c1; // �� ��ȣ�� ġ�� �ȵȴ�.
	c1.plus(10);
	c1.minus(7);
	cout << "���: " << c1.getResult() << endl;

	// �ν��Ͻ��� ������ �� int ���� ���� �޴� �����ڸ� ȣ���Ѵ�.
	Calculator c2(100);
	c2.plus(10);
	c2.minus(7);
	cout << "���: " << c2.getResult() << endl;

	Calculator c3(); // Calculator�� �ν��Ͻ� ���� �����ϴ� c3() �Լ��� �ǹ��Ѵ�.
	                 // �⺻ �����ڸ� ȣ���ϴ� ������ �ƴϴ�.
	// c3�� �Լ��̱� ������ ���� ������ ������ ������ �߻���Ų��.
	//c3.plus(10);
	//c3.minus(7);
	//cout << "���: " << c3.getResult() << endl;

	// �ν��Ͻ��� ������ �� int ���� ���� �޴� �����ڸ� ȣ���Ѵ�.
	Calculator c4 = Calculator(300);
	c4.plus(10);
	c4.minus(7);
	cout << "���: " << c4.getResult() << endl;

	// �ν��Ͻ��� ������ �� �⺻ �����ڸ� ȣ���Ѵ�.
	Calculator c5 = Calculator();
	c5.plus(10);
	c5.minus(7);
	cout << "���: " << c5.getResult() << endl;

	return 0;
}




