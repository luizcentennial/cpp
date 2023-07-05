// HELLO, WORLD!

// In this example, we look at the simplest C++ code possible.
// It prints the message "Hello, World!" in the console.
// 
// To be able to do that, we need to import "iostream". The
// "#include" is a direction that lets us bring that functionality
// into this file.
// 
// In C++, the convention is to have "main" return an integer,
// which is usually utilized to represent the exit code of the
// application. For example, exit code 0 means the application
// ran sucessfully, while other values may mean otherwise.
// 
// While it is possible to define main as "void", this approach
// is unusual.
// 
// The "main" function may intake arguments.
//
// std::cout is the "output" through which the message is sent.
// The << operator (insertion operator) sends the message to std::cout.


#include <iostream>

int main() {
	std::cout << "Hello, World!" << std::endl;

	return 0;
}