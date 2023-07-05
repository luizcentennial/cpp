// PRAGMA ONCE:

// In the C and C++ programming languages, 
// #pragma once is a non-standard but widely supported 
// preprocessor directive designed to cause the current 
// source file to be included only once in a single compilation. 
// 
// Thus, #pragma once serves the same purpose as #include guards, 
// but with several advantages, including: less code, avoiding 
// name clashes, and improved compile speed.

#pragma once
#include <iostream>
#include "Person.h"
#include "Employee.h"

int main() {
	Person person(1, "Some", "One");
	Employee employee(2, "Someone", "Else", "Engineering");

	std::cout << person.getName() << std::endl;
	std::cout << employee.getName() << std::endl;

	return 0;
}