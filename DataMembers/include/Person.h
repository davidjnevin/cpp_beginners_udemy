#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

class Person {
private:
	std::string name;

public:
	Person();
	~Person();
	std::string toString();
	void setName(std::string newName);
	std::string getName();
};

#endif /* PERSON_H_ */
