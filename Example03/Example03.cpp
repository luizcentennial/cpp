// CLASSES:

// C++ is an object-oriented programming language.
// As such, it supports the implementation of custom types,
// much like languages such as C#, or Java.
//
// However, C++ has a unique approach to it.
// Creating classes in C++ is much like taking an
// interface-driven approach with a language like C#.
//
// In C++, one would declare a header file (*.h) containing all
// the class definitions (like a C# interface would), 
// and then a source file (*.cpp) that implements that contract.
//
// During the compilation process, all *.cpp and *.h files are compiled
// separately as *.obj files. This is first task is performed by the compiler.
// However, compilation is a two-step process. After compiling the *.obj files,
// the linker unifies these files in one single file that the computer can run,
// typically, a *.exe, if compiling for a Windows environment.

#include "Person.h"

int main() {
	// The class Person can be instantiated with a syntax as
	// simple as the example below.
	// Note that Person.h does not declare a constructor.
	// C++, generous as it is, provides you with a default
	// constructor, so that your objects can be instantiated.

	Person person1;
	Person person2;

	return 0;
}