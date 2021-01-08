/* Ŭ���� - �ν��Ͻ� ����(reference)
 * => �ν��Ͻ��� ������ �߰��ϴ� ���
 *
 */
#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
	Calculator obj;
	obj.plus(100);
	obj.minus(77);
	cout << "p1 ���: " << obj.getResult() << endl;

	Calculator& r1 = obj; // obj �ν��Ͻ��� r1��� �̸��� �߰��Ѵ�.
	                     // r1 �� �޸𸮰� �ƴ϶� ���̴�.

	Calculator* p1 = &obj; // obj �ν��Ͻ��� �ּҸ� p1 ������ ������ �߰��Ѵ�.
						   // p1�� �ּҸ� �����ϰ� �ִ� �и��� �޸��̴�.

	// ����! �� ������ �ּҸ� ����غ���!
	cout << &obj << "," << &r1 << "," << &p1 << endl;

	// ����) ���۷����� ������ �ƴϱ� ������ �ٸ� �ν��Ͻ��� �ּҸ� ���� �� ����.
	Calculator obj2;
	r1 = obj2; // �� ����� ���õȴ�.
			   // ���۷����� ������ �� �ʱ�ȭ���Ѿ� �ϰ�, ������ �� ����.
	           // �̿� ���� ���߿� ���� ���� �Ҵ��Ϸ��ϸ� ���õǰų� ������ ������ �߻��Ѵ�.
	r1.plus(100);
	cout << r1.getResult() << "," << obj.getResult()
		 << "," << obj2.getResult() << endl;

	// ����) �����ʹ� �����̱� ������ �������� �ٸ� �ν��Ͻ��� �ּҸ� ���� �� �ִ�.
	p1 = &obj2;
	p1->plus(300);
	cout << obj.getResult() << ","
	     << r1.getResult() << ","
		 << obj2.getResult() << ","
		 << p1->getResult() << endl;

	return 0;
}




