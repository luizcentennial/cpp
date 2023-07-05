// REFERENCE VALUES:

// C++ allows for passing values into functions by value, or by reference.
// 
// When passing an object by value, a copy of that object is created for
// the receiving function. Altering that copy does not alter the original object.
// 
// However, when passing by reference, a copy is not created. That means,
// altering the reference alters the original value. Passing by reference
// behaves as if the original object was passed into the function. And in a way,
// it was.
// 
// There are times in which the intention of passing an object by reference is
// to alter the original object. At times, the intention aims resource optimization.
// 
// If our intention is to pass an object by reference, but do not allow that function
// to alter the argument, then we can mark that argument as const, too.
// 
// For functions that return objects, always return by value. Never return by reference.

#include <iostream>
#include "Functions.h"

int main() {
	int number = 5;
	std::cout << "Original value: " << number << std::endl << std::endl;

	int doubled = doubleByValue(number);
	std::cout << "Doubled by value: " << doubled << std::endl;
	std::cout << "Original value: " << number << std::endl << std::endl;

	doubled = doubleByReference(number);
	std::cout << "Doubled by reference: " << doubled << std::endl;
	std::cout << "Original value: " << number << std::endl << std::endl;

	return 0;
}