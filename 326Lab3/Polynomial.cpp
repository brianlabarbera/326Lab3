#include <iostream>
#include <cmath>
#include "Polynomial.h"



Polynomial::Polynomial() {

	int degree = 0;

	std::cout << "Enter highest degree of the polynomial" << std::endl;
	std::cin >> degree;

	this->degree = degree;

	ptr = new int[degree + 1];

}

Polynomial::Polynomial(int degree) {

	this->degree = degree;

	ptr = new int[degree + 1];

}

void Polynomial::fillArray() {

	std::cout << "Enter numbers:" << std::endl;

	for (int i = 0; i <= degree; i++) {

		std::cin >> ptr[i];

	}

	std::cout << std::endl;
}

void Polynomial::printPolynomial() {

	int tempDegree = degree;

	bool firstNum = false;

	for (int j = 0; j <= degree; j++) {

		if (ptr[j] == 0) {

			tempDegree--;

			continue;
		}

		if (firstNum) {
			std::cout << " + ";
		}

		if (tempDegree > 1) {

			if (ptr[j] != 1) {

				std::cout << ptr[j];

			}

			std::cout << "x^" << tempDegree;

		}

		else if (tempDegree == 1) {

			if (ptr[j] != 1) {

				std::cout << ptr[j];

			}

			std::cout << "x";

		}

		else {

			std::cout << ptr[j];
		}

		tempDegree--;

		firstNum = true;

	}
}

int Polynomial::getDegree() {

	return degree;

}

int Polynomial::getElement(int index) {

	if (index > -1 && index <= degree) {

		return ptr[index];

	}

	else {
		return 0;
	}
}

void Polynomial::numArray(int num, int index) {

	if (index > -1 && index <= degree) {

		ptr[index] = num;

	}


}

int Polynomial::evalPolynomial(int x) {

	int result = 0;
	int tempDegree = degree;

	for (int i = 0; i <= degree; i++) {

		result += ptr[i] * pow(x, tempDegree);

		tempDegree--;
	}

	return result;

}