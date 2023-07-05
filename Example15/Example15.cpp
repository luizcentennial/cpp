// ARRAYS:

// Arrays are data structures that are capable of
// accommodating for multiple values at the same time.

#include <iostream>
#include <string>

int main() {
	// Declaring arrays:
	std::string words[2];

	// Initializing arrays:
	words[0] = "Hello,";
	words[1] = "arrays!";

	// Declaring and initializing arrays:
	int numbers[5] = { 1, 2, 3, 4, 5 };
	char chars[] = { 'a', 'b', 'c' };

	// Retrieving array elements:
	std::cout << numbers[0] << std::endl;
}