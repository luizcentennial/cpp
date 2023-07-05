#pragma once

class Thing {
private:
	int number;

public:
	int getNumber() const;
	void setNumber(int number);
	Thing();
	Thing(int number);
	~Thing();
};