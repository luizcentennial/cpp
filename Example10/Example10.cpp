// IF STATEMENTS:

// If statements are conditional structures that
// allow for flow control.
// 
// It allows the code to test conditions,
// which are Boolean expressions. Depending on
// the Boolean value it evaluates to, the code
// may present different behavior.

#include <iostream>

int main() {
	int input;

	std::cout << "Please input a number: " << std::endl;
	std::cin >> input;

	if (input < 10) {
		std::cout << input << " is less than 10." << std::endl;
	}
	else if (input < 50) {
		std::cout << input << " is greater than 10, but less than 50." << std::endl;
	}
	else {
		std::cout << input << " is greater than or equal to 50." << std::endl;
	}

	return 0;
}