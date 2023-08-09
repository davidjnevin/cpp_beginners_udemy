#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <sstream>

class Person {
private:
  int age;
  std::string name;

public:
  Person();

  Person(std::string name, int age);

  void setName(std::string name);
  void setAge(int newAge);

  std::string toString();
};

#endif // PERSON_H
