#ifndef CALCULATOR_H_
#define CALCULATOR_H_

class Calculator {
private:
	int result;

public:
	Calculator();
	Calculator(int);
	void plus(int);
	void minus(int);
	void reset();
	int getResult();
};

#endif /* CALCULATOR_H_ */
