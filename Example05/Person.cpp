#include "Person.h"
#include <iostream>

Person::Person() {
	// Some initialization logic...
	this->personid = 0;

	std::cout << "Person object initialized." << std::endl;
}

Person::~Person() {
	// Some destruction logic...
	std::cout << "Person object destucted." << std::endl;
}

std::string Person::getName() {
	return this->firstname + " " + this->lastname;
}