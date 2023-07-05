// OPERATOR OVERLOADING:

// Operator overloading is a technique that can be used to
// redefine the function of an operator, so that it can present
// different behavior that is more appropriate for a given context.
// 
// Overator overloading is usually present in member functions, 
// but it can be done in free functions as well. Free functions can
// also be declared as "friends" of a certain type, and as such,
// are able to access private members.
// 
// ALL operators can be overloaded.

#include <iostream>
#include "Person.h"

int main() {
	Person person(1);
	Person another(1);

	if (person == another)
		std::cout << "Same person.";
	else
		std::cout << "Not the same person.";

	return 0;
}