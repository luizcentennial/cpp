// THE "NEW" KEYWORD:

// The keyword "new" allocates resources for a new object,
// returning a pointer to the allocated object.

#pragma once
#include <iostream>
#include "Thing.h"

int main() {
	// The usual way of instantiating classes:
	Thing thing;
	Thing another(5); 

	std::cout << "thing's number is " << thing.getNumber() << std::endl;
	std::cout << "another's number is " << another.getNumber() << std::endl;

	// Using keyword "new":
	Thing* pLast = new Thing(3);

	// pLast's getNumber must be called with the "points to" operator.
	std::cout << "pLast's number is " << pLast->getNumber() << std::endl;

	// Retrieving the memory address a pointer points to:
	std::cout << "pLast points to memory address " << pLast << std::endl;

	// Retrieving the value a pointer points to:
	Thing obj = *pLast;
	obj.setNumber(1);

	std::cout << "obj's number is " << obj.getNumber() << std::endl;

	return 0;
}