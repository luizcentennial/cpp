// INDIRECTION (References and Pointers):

// A "reference" is an alias for something else. When changing 
// a reference, the original value is modified.
// 
// A "pointer" is also an alias for something else, but a pointer
// has extra features that references don't. For example, a pointer can
// point nowhere, and can be reassigned to point to something else,
// while references cannot do either.

#include <iostream>

int main() {
	int number = 5;
	std::cout << "number equals " << number << std::endl; // 5

	// Objects are allocated in memory. The "address to" operator
	// return the memory address in which the object is stored.
	std::cout << "number is allocated in " << &number << std::endl;

	// Below, the "&" operator, called "reference operator", creates a
	// reference to the object that initializes it.
	int& refNumber = number;

	// Changing the reference changes the original object (number).
	refNumber = 10;
	std::cout << "number equals " << number << std::endl; // 10

	// References cannot just be declared. They need to be initialized right away.
	// The line below throws an error.
	//int& badReference;

	// Below, a pointer is declared and initialized with the address of "number".
	// The asterisk "*" (read "pointer") is always used when declaring a pointer.
	// The ampersand "&" (read "address") is always used when initializing a pointer.
	int* pNumber = &number;

	// Changing the pointer changes the original object (number).
	// Note: The syntax for pointers will include the asterisk "*"...
	*pNumber = 5;
	std::cout << "number equals " << number << std::endl; // 5

	// ... Unless the pointer is being reassigned.
	int another = 7;
	pNumber = &another;

	(*pNumber)++;
	std::cout << "number equals " << number << std::endl; // 5
	std::cout << "another equals " << another << std::endl; // 8

	// Pointers can be just declared, but the keyword "nullptr" is needed in order
	// to specify the pointer is intentionally null at declaration time.

	int* pSomething = nullptr;
	
	// Always check that a pointer isn't null before dereferencing it.
	if (pSomething) {
		*pSomething = 3;
		std::cout << "*pSomething equals " << *pSomething << std::endl;
	}


	// Side note for constant objects:
	const int constant = 1;

	// A reference to a const object cannot be created, unless
	// the reference itself is declared as const.
	//int& refConstant = constant; // Throws an error.
	const int& refConstant = constant;

	// A pointer to a const object cannot de created, unless
	// the pointer itself is declared as const.
	//int* pConstant = &constant; // Throws an error.
	const int* pConstant = &constant;

	// Both lines below throw an error, since these are interpreted as
	// an attempt to change a const object.
	//refConstant = 5;
	//*pConstant = 5;

	return 0;
}