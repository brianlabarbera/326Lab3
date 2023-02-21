#include <iostream>

int reverseNum1(int num);
void Problem1();

int main() {


	Problem1();


	return 0;
}

void Problem1() {

	int num = 0;

	std::cout << "Enter an integer:" << std::endl;
	std::cin >> num;

	std::cout << reverseNum1(num);

}

int reverseNum1(int num) {

	int reversedNum = 0;

	while (num != 0) {
		
		int tempNum = num % 10;

		reversedNum = reversedNum * 10 + tempNum;

		num /= 10;
	}

	return reversedNum;

}
