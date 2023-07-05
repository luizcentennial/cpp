// FUNCTIONS:

// In C++, there are two types of functions:
// - Free functions, and
// - Member functions.
// 
// A free function is one that exists by itself - outside of a class. 
// A member function is one that lives inside of a class. 
// 
// Member functions can be marked with the keyword "const".
// Constant member functions are denied permission to change the values of 
// the data members of their class. To make a member function constant, 
// the keyword “const” is appended to the function's definition and implementation.
// ALWAYS mark functions as const when that function is not supposed to change class members.
// 
// Regardless of type, by convention, declarations are always made in *.h files,
// while implementations go in a corresponding *.cpp file. This is not set on stone,
// but that is how it has been traditionally done.

#include <iostream>
#include "Free.h"
#include "Member.h"

int main() {
	int number = 53;
	
	if (isPrime(number)) {
		std::cout << number << " is prime." << std::endl;
	}
	else {
		std::cout << number << " is not prime." << std::endl;
	}

	Member member;
	member.setNumber(3);

	std::cout << "Member's number is " << member.getNumber() << std::endl;

	return 0;
}