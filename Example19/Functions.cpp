#pragma once
#include "Functions.h"

int doubleByValue(int number) {
	number *= 2;

	return number;
}

int doubleByReference(int& number) {
	number *= 2;

	return number;
}

int cantDoubleByReference(const int& number) {
	//number *= 2; <- This line errors, as number is marked as const.

	return number;
}