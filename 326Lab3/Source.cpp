#include <iostream>
#include "Polynomial.h"

int reverseNum(int num);
int recursiveReverse(int num, int reversedNum);
void addPolynomial(Polynomial poly1, Polynomial poly2);
void Problem1();
void Problem2();
void Problem3();
void problemChoice();

int main() {


	problemChoice();


	return 0;
}

void problemChoice() {

	int choice = 0;

	do {

	std::cout << "Enter 1 to reverse a number" << std::endl;

	std::cout << "or" << std::endl;

	std::cout << "Enter 2 to recursively reverse a number" << std::endl;

	std::cout << "or" << std::endl;

	std::cout << "Enter 3 for polynomials" << std::endl;

	std::cin >> choice;

	std::cout << std::endl;

		if (choice == 1) {

			Problem1();

		}

		if (choice == 2) {

			Problem2();

		}

		if (choice == 3) {

			Problem3();

		}

	} while (choice != 1 && choice != 2 && choice != 3);
}


void Problem1() {

	int num = 0;

	std::cout << "Enter an integer:" << std::endl;
	std::cin >> num;

	std::cout << std::endl;

	std::cout << reverseNum(num);

}

void Problem2() {

	int num = 0;

	std::cout << "Enter an integer:" << std::endl;
	std::cin >> num;

	std::cout << std::endl;

	std::cout << recursiveReverse(num, 0);

}

void Problem3() {

	char choice = ' ';
	int x = 0;

	Polynomial poly;

	poly.fillArray();

	std::cout << std::endl;

	poly.printPolynomial();

	std::cout << std::endl;

	std::cout << "Enter the value of x:" << std::endl;
	std::cin >> x;

	std::cout << std::endl;

	std::cout << "Result of the polynomial is " << poly.evalPolynomial(x) << std::endl;

	std::cout << std::endl;


		std::cout << "Would you like to add two polynomials? Y/N" << std::endl;
		std::cin >> choice;

		std::cout << std::endl;

		if (choice == 'Y' || choice == 'y') {
			
			Polynomial poly1;

			std::cout << "Enter numbers for the first polynomial:" << std::endl; 
			poly1.fillArray();

			std::cout << "The first polynomial is ";
			poly1.printPolynomial();

			Polynomial poly2;

			std::cout << "Enter numbers for the second polynomial:" << std::endl;
			poly2.fillArray();


			std::cout << "The second polynomial is ";
			poly2.printPolynomial();

			addPolynomial(poly1, poly2);

		}

}

void addPolynomial(Polynomial poly1, Polynomial poly2) {

	int tempdegree1 = poly1.getDegree(), tempdegree2 = poly2.getDegree();
	int max = 0;

	if (tempdegree1 > tempdegree2) {
		
		max = tempdegree1;
	}

	else {

		max = tempdegree2;

	}

	Polynomial poly3(max);

	int i = 0;

	while (tempdegree1 >= 0 && tempdegree2 >= 0) {

		if (tempdegree1 > tempdegree2) {

			poly3.numArray(poly1.getElement(poly1.getDegree() - tempdegree1), i);

			tempdegree1--;
		}

		else if (tempdegree2 > tempdegree1) {

			poly3.numArray(poly2.getElement(poly2.getDegree() - tempdegree2), i);

			tempdegree2--;
		}

		else {

			int poly1Num = poly1.getElement(poly1.getDegree() - tempdegree1);
			int poly2Num = poly2.getElement(poly2.getDegree() - tempdegree2);
			
			poly3.numArray(poly1Num + poly2Num, i);

			tempdegree1--;
			tempdegree2--;
		}

		i++;

	}

	std::cout << std::endl;

	std::cout << "The result is:" << std::endl;

	poly3.printPolynomial();

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
