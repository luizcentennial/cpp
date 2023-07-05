// DO-WHILE LOOPS:

// Do-While loops are looping structures that execute
// a specified code block a number of times.

#include <iostream>

int main() {
	int counter = 0;

	do {
		std::cout << counter << std::endl;

		counter++;
	} while (counter < 10);

	return 0;
}