/* Ŭ���� - �ν��Ͻ��� �� ����
 * => �ν��Ͻ��� �� ���縦 �⺻���� �����Ѵ�.
 *
 */
#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
	Calculator p1;
	p1.plus(100);
	p1.minus(77);
	cout << "p1 ���: " << p1.getResult() << endl;

	Calculator p2; // p1�� �ٸ� �� �ν��Ͻ�
	p2 = p1; // p1�� ���� p2 �ν��Ͻ��� �����ϴ� ���̴�.
	p2.plus(100);
	p2.minus(77);
	cout << "p2 ���: " << p2.getResult() << endl;

	cout << "p1 ���: " << p1.getResult() << endl;


	return 0;
}




