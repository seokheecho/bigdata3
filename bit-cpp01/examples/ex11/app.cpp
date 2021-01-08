/* Ŭ���� - dangling object, dangling pointer
 * => dangling object
 *    - �ּҸ� �Ҿ� ���� ����� �� ���� �ν��Ͻ�
 *    - �ڹٿ����� "garbage"�� �θ���.
 * => dangling pointer
 *    - ��ȿ���� ���� �ν��Ͻ��� ����Ű�� ������ ����
 *    - �ڹٿ����� �̷� ��찡 ����.
 *      ��? �����ڰ� ���Ƿ� ���� ������ �ν��Ͻ��� ���� �� ���� �����̴�.
 *
 */
#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
	//dangling object
	Calculator* p1 = new Calculator(); // OK!
	Calculator* p2 = new Calculator(); // OK!

	// �ν��Ͻ��� �޸� ũ��
	cout << "Calculator �ν��Ͻ� ũ��: " << sizeof(Calculator) << endl;
	cout << "p1�� �ּ�: " << p1 << endl;
	cout << "p2�� �ּ�: " << p2 << endl;
	cout << "--------------------" << endl;

	p2 = p1; // p2�� ����� �ּҸ� �Ҿ� ���ȱ� ������ �� �ּ��� ��ü�� ����� �� ����.
	         // �̷� ��ü�� "dangling object(=garbage)"�� �θ���.
	cout << "p1�� �ּ�: " << p1 << endl;
	cout << "p2�� �ּ�: " << p2 << endl;
	cout << "--------------------" << endl;

	p1->plus(10);
	p1->minus(7);
	cout << "���: " << p2->getResult() << endl;
	delete p1;

	// p1, p2�� ����Ű�� �޸𸮴� delete�� �����Ͽ� �������״�.
	// �׷��� p1, p2 ������ ����� �ּҴ� ��ȿ�ϴ�!
	// �̷��� ��ȿ�� �޸𸮸� ����Ű�� ������ ������ "dangling pointer"�� �θ���.
	// ���� �ڵ�� �߸��� �ڵ��̴�. ���� ����� �����Ѵ� �ϴ��� ���� �ۼ��ؼ��� �ȵȴ�.
	// �� "dangling pointer"�� ����ؼ��� �ȵȴ�.
	cout << "���: " << p2->getResult() << endl;

	return 0;
}




