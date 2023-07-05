#pragma once
#include "Free.h"

bool isPrime(int number) {
	bool result = true;

	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			result = false;

			break;
		}
	}

	return result;
}