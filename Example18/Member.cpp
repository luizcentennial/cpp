#pragma once
#include "Member.h"

int Member::getNumber() const {
	return this->number;
}

void Member::setNumber(int number) {
	this->number = number;
}