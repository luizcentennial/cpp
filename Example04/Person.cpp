#include "Person.h"

Person::Person(int id, std::string first, std::string last) 
		: personid(id), firstname(first), lastname(last) { }

std::string Person::getName() {
	return this->firstname + " " + this->lastname;
}