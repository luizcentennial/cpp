#include "Person.h"

class Employee : public Person {
private:
	std::string department;

public:
	Employee(int id, std::string first, std::string last, std::string department);
	~Employee();
	std::string getDepartment();
};