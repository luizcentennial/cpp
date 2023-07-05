#include <string>

class Person {
private:
	int personid;
	std::string firstname;
	std::string lastname;

public:
	Person(int id, std::string first, std::string last);
	~Person();
	std::string getName();
};