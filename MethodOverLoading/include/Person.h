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
  Person(std::string newName, int newAge);

  void setName(std::string newName);
  void setAge(int newAge);

  std::string toString();
};

#endif  // PERSON_H
