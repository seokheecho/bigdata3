/* Ŭ���� ����
 *
 */
#include <iostream>
using namespace std;

// class ����
// - ������ ����
// - �Լ��� ������Ÿ�� ����
class Calculator {
private:
	int result;

public:
	void plus(int);
	void minus(int);
	void reset();
	int getResult();
};

// Ŭ������ �Լ� ����
void Calculator::plus(int value) {
	this->result += value;
}

void Calculator::minus(int value) {
	result -= value; // this-> �� ������ �� �ִ�.
}

void Calculator::reset() {
	result = 0;
}

int Calculator::getResult() {
	return result;
}

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




