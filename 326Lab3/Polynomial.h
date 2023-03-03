#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

class Polynomial {

public:
	Polynomial();
	Polynomial(int degree);
	void fillArray();
	void printPolynomial();
	void numArray(int num, int index);
	int getDegree();
	int getElement(int index);
	int evalPolynomial(int x);

private:
	int degree;
	int* ptr;

};

#endif