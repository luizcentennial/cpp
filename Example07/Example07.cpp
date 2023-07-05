// INHERITANCE:

// Inheritance is a vital OOP concept, and is also viable
// in C++, as the language can be be approached with an oop strategy.
// 
// Unlike C# or Java, C++ does support multiple inheritance.
//
// Notice below, how an include to "Person.h" was not added.
// That is because there is an include for "Employee.h",
// which includes "Person.h" already.
// 
// For the same reason, some files do not have an include directive
// for "<string>", as it had already been added by one of the other files.
// 
// If we added an include for "Person.h", the compiler would
// throw errors due to type redefinition. An include is, in
// a nutshell, a copy-paste of code defined in another file. Hence
// the redefinition error. This error can be circumvented with the
// use of "pragma once".

#include <iostream>
#include "Employee.h"

int main() {
	Person person(1, "Some", "One");
	Employee employee(2, "Someone", "Else", "Engineering");

	// Person objects have a getName method.
	std::cout << person.getName() << std::endl;

	// And so do Employee objects, via inheritance.
	std::cout << employee.getName() << std::endl;

	return 0;
}