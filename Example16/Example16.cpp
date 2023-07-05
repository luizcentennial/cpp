// FOR EACH LOOPS:

// For-each loops are an alternative syntax for For loops.

#include <iostream>
#include <string>

int main() {
	std::string words[] = { "The", "quick", "brown", "fox." };

	for (std::string word : words) {
		std::cout << word << std::endl;
	}

	return 0;
}