/* Ŭ���� - �ν��Ͻ� �ʱ�ȭ ���
 * => �ν��Ͻ��� ������ �� ������ ó�� �ʱ�ȭ��Ű�� ���
 *
 */
#include <iostream>
#include <cstring> // c���� ǥ�� ���̺귯���� string.h�� c �� �°� ��ȯ�� �������.
#include "Calculator.h"

using namespace std;

int main() {
	// �迭 �ʱ�ȭ ��:
	int arr[] = {10, 20, 30};
	cout << "�迭 ��: " << arr[0] << "," << arr[1] << "," << arr[2] << endl;

	// ����ü �ʱ�ȭ ��:
	struct student {
		char* pName;
		int age;
	};
	struct student s1 = {new char[20], 20};
	strcpy(s1.pName, "ȫ�浿");
    cout << "����ü ��: " << s1.pName << "," << s1.age << endl;

    // Ŭ������ �ν��Ͻ� �ʱ�ȭ ��:
	Calculator p1 = Calculator {100}; // OK
	//Calculator p1 {100}; // �� ������ ���� ����
	p1.plus(100);
	p1.minus(77);
	cout << "���: " << p1.getResult() << endl;


	return 0;
}




