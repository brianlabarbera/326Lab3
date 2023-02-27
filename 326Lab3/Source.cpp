#include <iostream>
#include "Polynomial.h"

int reverseNum(int num);
int recursiveReverse(int num, int reversedNum);
void Problem1();
void Problem2();
void Problem3();

int main() {


	Problem3();


	return 0;
}

void Problem1() {

	int num = 0;

	std::cout << "Enter an integer:" << std::endl;
	std::cin >> num;

	std::cout << reverseNum(num);

}

void Problem2() {

	int num = 0;

	std::cout << "Enter an integer:" << std::endl;
	std::cin >> num;

	std::cout << recursiveReverse(num, 0);

}

void Problem3() {

	int degree = 0;
	int x = 0;

	std::cout << "Enter highest degree of the polynomial" << std::endl;
	std::cin >> degree;

	Polynomial poly(degree);

	poly.fillArray();
	poly.printPolynomial();

	std::cout << std::endl;

	std::cout << "Enter the value of x:" << std::endl;
	std::cin >> x;

	std::cout << std::endl;

	std::cout << poly.evalPolynomial(x);
}

int reverseNum(int num) {

	int reversedNum = 0;

	while (num != 0) {
		
		int tempNum = num % 10;

		reversedNum = reversedNum * 10 + tempNum;

		num /= 10;
	}

	return reversedNum;

}

int recursiveReverse(int num, int reversedNum) {

	if (num == 0) {
		return reversedNum;
	}

	int tempNum = num % 10;

	reversedNum = reversedNum * 10 + tempNum;

	num /= 10;

	return recursiveReverse(num, reversedNum);

}
