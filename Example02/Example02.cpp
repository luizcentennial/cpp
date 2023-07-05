// FUNDAMENTAL TYPES:

// C++ offers many of the same data types offered by
// languages like C#, out of the box.
// 
// C++ is strongly-typed, like C#.
// 
// When declaring local variables, they can be declared
// and initialized with the same synax observed in C#, too.
// However, it won't always give the same errors we would
// usually see in C#.

// Useful resources:
// https://learn.microsoft.com/en-us/cpp/cpp/fundamental-types-cpp?view=msvc-170
// https://learn.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170

#include <iostream>

int main() {
	// Declaring an int:
	int number;

	// Initializing an int:
	number = 1;

	// We can also declare and initialize in the same line:
	double pi = 3.14;

	// There are also alternative syntax options:
	double euler(2.71827);
	int one{ 1 };

	bool flag = false; // Prints as 0.

	// The syntax below would throw an error in C#.
	// C++ accepts it, but truncates the value to 2.
	int integer = 2.5;

	// The line below would also run without issues,
	// except for the truncating. This can be an issue...
	integer = euler;

	// So, instead, when deliberately truncating a number,
	// we should be explicit about our intentions.
	// We do that through static casting, which will also
	// supress compiler warnings regarding potential data losses.
	integer = static_cast<int>(euler);

	// The syntax below would also throw an error in C#.
	// C++ accepts it, and converts all non-zero values to true (1).
	bool boolean = 5.25;

	// Like C#, chars use single-quotes.
	char character = 'a';

	// And strings use double-quotes.
	std::string text = "C++ is awesome!";

	// C++ can infer types with the "auto" keyword, 
	// like C# can with "var".
	auto letter = 'L';

	// Chars can also store integers. However, this is
	// only recommended when working with ASCII character representation.
	
	// Signed chars range from -128 to 127.
	signed char char1 = 127;

	// Unsigned chars range from 0 to 255.
	unsigned char char2 = 255;

	// Signed and unsigned are modifiers that we can use with 
	// any integral type except bool. 
	
	// Note that char, signed char, and unsigned char are three 
	// distinct types for the purposes of mechanisms like overloading 
	// and templates.

	// The int and unsigned int types have a size of four bytes.
	// However, portable code should not depend on the size of int 
	// because the language standard allows this to be implementation-specific.

	// Numeric types are signed by default, so the modifier "signed" is 
	// implicitly inferred.

	unsigned long bignumber = 18'446'744'073'709'551'615;

	// When assignment of a value bigger than the supported range for a
	// given data type, no compilation errors, nor runtime errors, are
	// thrown. Instead, only warnings are shown.

	// And, we can also have some fun with fancy declarations:
	auto fancy1 = 1'000'000'000;
	auto fancy2 = 0xFF; // 255
	auto fancy3 = 0b111; // 7
	auto fancy4 = 3L; // 3, but as long rather than int.

	// Mathematical operations are obviously possible, too:
	double number1 = 3.14;
	double number2 = 1.5;

	double addition = number1 + number2;
	double subtraction = number1 - number2;
	double multiplication = number1 * number2;
	double division = number1 / number2;
	double power = std::pow(number1, number2);
	double log = std::log(number1);
	double mod = 14 % 6;

	// And comparisons:
	bool isEqual = number1 == number2;
	bool isDifferent = number1 != number2;
	bool isGreater = number1 > number2;
	bool isGreaterOrEqual = number1 >= number2;
	bool isLower = number1 < number2;
	bool isLowerOrEqual = number1 <= number2;

	// So is Boolean arithmetic:
	bool boolean1 = true;
	bool boolean2 = false;

	bool orResult = boolean1 || boolean2;
	bool andResult = boolean1 && boolean2;

	// And also string manipulation:

	std::string text = "C++ is an amazing programming language.";

	std::cout << "Length: " << text.length() << std::endl;
	std::cout << "Character at index 2: " << text.at(2) << std::endl;
	std::cout << "Maximum size: " << text.max_size() << std::endl;
	std::cout << "Compare: " << text.compare("C++ is an amazing programming language.") << std::endl;
	std::cout << "Uppercase 'a': " << (char)std::toupper('a') << std::endl;
	std::cout << "Lowercase 'A': " << (char)std::tolower('A') << std::endl;

	// Note: There is no native tolower or toupper methods in C++,
	// like there is in C#. For that sort of manipulation, we should
	// either use external libraries, or build our own.

	return 0;
}