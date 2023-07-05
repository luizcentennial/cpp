// DESTRUCTORS:

// Much like constructors can be used for initialization logic,
// destructors can be used for deinitialization logic.
// 
// Like the constructor can be used to allocate resources, the
// destructor can be used to deallocate resources.

#include "Person.h"

int main() {
	// By running this app, we will see in the console when
	// object "person1" is initialized and deinitialized.
	Person person1;

	return 0;
}