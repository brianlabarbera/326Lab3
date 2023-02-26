#include <iostream>

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

	std::cout << "Enter highest degree of the polynomial" << std::endl;
	std::cin >> degree;

	int* ptr = new int[degree + 1];

	std::cout << "Enter numbers:" << std::endl;
 
	for (int i = 0; i <= degree; i++) {

		std::cin >> ptr[i];

	}

	std::cout << std::endl;

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
