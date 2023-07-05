#include <string>

class Person {
private:
	int personid;
	std::string firstname;
	std::string lastname;
public:
	Person();
	~Person();
	std::string getName();
};