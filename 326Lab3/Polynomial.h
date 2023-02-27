#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

class Polynomial {

public:
	Polynomial(int degree);
	void fillArray();
	void printPolynomial();
	int evalPolynomial(int x);


private:
	int degree;
	int* ptr;

};

#endif