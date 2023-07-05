// CONSTRUCTORS:

// The class definition can also define constructor declarations.
// As stated earlier, when it does so, C++ will not provide a
// default constructor. However, a constructor can be defined as default
// by using the syntax "Person() = default;".
// This is an instruction for C++ to emulate the behavior of default 
// constructors in an explicitly defined constructor.

#include "Person.h"
#include <iostream>

int main() {
	// The syntax below instantiates the Person class using
	// both constructor definitions.
	Person person1(1, "luiz", "parente");
	Person person2;

	// A Person object's public members can be accessed via the
	// dot operator ".".
	std::cout << person1.getName();

	return 0;
}