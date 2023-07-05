#include "Person.h"

std::string Person::getName() {
	return this->firstname + " " + this->lastname;
}