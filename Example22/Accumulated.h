#pragma once
#include "Thing.h"

// Generalized template:
template <class T>
class Accumulated {
private:
	T total;
public:
	Accumulated(T first) : total(first) { };
	T operator+=(const T& other) { return total = total + other; } // Requires T to have an implementation for operator +.
	T getTotal() const { return this->total; }
};

// Specialized template:
template<>
class Accumulated<Thing> {
private:
	int total;
public:
	Accumulated(Thing first) : total(first.getQuantity()) { };
	int operator+=(const Thing& other) { return total = total + other.getQuantity(); }
	int getTotal() const { return this->total; }
};