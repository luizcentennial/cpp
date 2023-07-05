// BREAK AND CONTINUE:

// Flow control can be further altered by
// using the keywords "break" and "continue".

#include <iostream>

int main() {
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			continue; // Skips to the next iteration.
		}

		if (i == 8) {
			break; // Breaks out of the loop.
		}

		std::cout << i << std::endl;
	}

	return 0;
}