/* Ŭ���� ���� - inline �Լ�
 * - Ŭ������ �����ϴ� ��� �ȿ� �Լ� �����ϴ� ��.
 *
 */
#include <iostream>
using namespace std;

class Calculator {
private:
	int result;

public:
	inline void plus(int value) {this->result += value;}
	inline void minus(int value) {result -= value;}
	inline void reset() {result = 0;}
	inline int getResult() {return result;}
};

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




