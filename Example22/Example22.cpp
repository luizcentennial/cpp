// TEMPLATE CLASSES:

// Template classes behave as generalized entities that are
// flexible to handle multiple different types.
// 
// As with template functions, to create a template class,
// only a header "template <class T>" is needed on top of 
// the class declaration.
// 
// Templates can also be specialized to types with which
// the generalization does not quite work, be it because the type
// does not implement a certain operator, or because it does not
// have a given function. The template specialization header is
// "template <>".
//
// Template classes are typically declared and implemented
// inside of its header file.

#include <iostream>
#include "Accumulated.h"
#include "Thing.h"

int main() {
	Accumulated<int> ints(1);
	ints += 4;

	std::cout << "Integer accumulator has: " << ints.getTotal() << std::endl;

	Accumulated<std::string> strings("Hello, ");
	strings += "World!";

	std::cout << "String accumulator has: " << strings.getTotal() << std::endl;

	Thing thing;
	thing.setQuantity(1);

	Thing another;
	another.setQuantity(2);

	Accumulated<Thing> things(thing);
	things += another;

	std::cout << "Thing accumulator has: " << things.getTotal() << std::endl;

	return 0;
}