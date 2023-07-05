#pragma once
#include "Person.h"
#include <string>

Person::Person(int id, std::string first, std::string last)
	: personid(id), firstname(first), lastname(last) {
	// Some initialization logic.
}

Person::~Person() {
	// Some deinitialization logic.
}

std::string Person::getName() {
	return this->firstname + " " + this->lastname;
}