#pragma once
#include "Employee.h"
#include <string>

Employee::Employee(int id, std::string first, std::string last, std::string department)
	: Person(id, first, last), department(department) {
	// Some initialization logic.
}

Employee::~Employee() {
	// Some deinitialization logic.
}

std::string Employee::getDepartment() {
	return this->department;
}