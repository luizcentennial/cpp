#pragma once

class Person {
private:
	int personId;

	// The keyword "friend" determines that this function 
	// can see private members.
	friend bool operator<(const Person& person, int id);

public:
	Person(int id);
	~Person();
	int getId() const;
	void setId(int id);
	bool operator==(const Person& other) const;
	bool operator!=(const Person& other) const;
};

// Overloading a free-function operator.
bool operator<(const Person& person, int id);