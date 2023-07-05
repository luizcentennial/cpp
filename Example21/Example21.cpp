// TEMPLATE FUNCTIONS:

// Generalization is possible in C++, and are typically referred 
// to as "templates".
// 
// Generalization allows for the definition of classes and functions
// that can be written only once, and utilized with multiple different 
// types without the need for added code.
//
// To create a template, we simply add "template <class T>" as a header
// to the function or class we are generalizing.

#include <iostream>

template <class T>
T max(const T& t1, const T& t2) {
	return t1 < t2 ? t2 : t1;
}

int main() {
	int number1 = 5;
	int number2 = 10;

	std::cout << "The greater number between" << number1 << " and " << number2 << " is: " << max(number1, number2) << std::endl;
	
	return 0;
}