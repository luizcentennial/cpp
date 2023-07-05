#pragma once
#include "Person.h"

Person::Person(int id) : personId(id) { }
Person::~Person() { }

int Person::getId() const {
	return this->personId;
}

void Person::setId(int id) {
	this->personId = id;
}

bool Person::operator==(const Person& other) const {
	return this->getId() == other.getId();
}

bool Person::operator!=(const Person& other) const {
	return this->getId() == other.getId();
}

// Overloading a free-function operator.
bool operator<(const Person& person, int id) {
	return person.getId() < id;
}