#include "Calculator.h"

// Ŭ������ �Լ� ����
void Calculator::plus(int value) {
	result += value;
}

void Calculator::minus(int value) {
	result -= value;
}

void Calculator::reset() {
	result = 0;
}

int Calculator::getResult() {
	return result;
}
