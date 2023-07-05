#include <string>

class Person {
private:
	int personid;
	std::string firstname;
	std::string lastname;

public:
	Person() = default;
	Person(int personid, std::string firstname, std::string lastname);
	std::string getName();
};