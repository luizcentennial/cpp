#pragma once
#include "Thing.h"

Thing::Thing() : number(0) { }
Thing::Thing(int number) : number(number) { }
Thing::~Thing() { }

int Thing::getNumber() const {
	return this->number;
}

void Thing::setNumber(int number) {
	this->number = number;
}