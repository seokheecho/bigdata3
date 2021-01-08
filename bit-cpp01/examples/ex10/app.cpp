/* Ŭ���� - ��(heap)�� �ν��Ͻ� �����ϱ�
 * - �� �޸� ������ �ν��Ͻ��� �����ϸ�,
 *   delete���� �����ϰų� ���α׷��� ����� ������ �����ȴ�.
 * - �ν��Ͻ� ����
 *   Ŭ���� * �����ͺ��� = new Ŭ������();
 * - �ν��Ͻ� ����
 *   delete �����ͺ���;
 *
 */
#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
	//Calculator* p1 = new Calculator; // OK!
	Calculator* p1 = new Calculator(); // OK!
	p1->plus(10);
	p1->minus(7);
	cout << "���: " << p1->getResult() << endl;
	delete p1; // ��� �� �������� ������ ���α׷��� ����� ������ ���� ��� �����Ѵ�.
	           // �̷��� ���� ���������� ���� ���� �ʿ䰡 ������,
			   // ���� ���α׷�ó�� 24�ð� 365�� ���� �����ϴ� ���
			   // �޸𸮰� ��� �����Ǵ� ġ������ ������ ���� �� �ִ�.

	Calculator* p2 = new Calculator(100); // OK!
	p2->plus(10);
	p2->minus(7);
	cout << "���: " << p2->getResult() << endl;
	delete p2;

	return 0;
}




