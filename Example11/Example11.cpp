// SWITCH STATEMENTS:

// Switch statements are conditional structures that
// allow for flow control.
// 
// Like If statements, it can specify different code blocks
// to execute based on cases.

#include <iostream>

int main() {
	int number;

	std::cout << "Please enter a number: " << std::endl;
	std::cin >> number;

	switch (number) {
	case 1:
		std::cout << "You entered 1." << std::endl;
		break;
	case 2:
		std::cout << "You entered 2." << std::endl;
		break;
	default:
		std::cout << "You entered a number other than 1 or 2." << std::endl;
	}

	// Note: The "break" keyword can be omitted, and if so, the
	// case immediate next to it will also be executed.
	// This is known as the falling-through rule.

	return 0;
}