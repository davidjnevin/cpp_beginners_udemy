#include "Person.h"

#include <iostream>
#include <sstream>

Person::Person() { std::cout << "Person created" << std::endl; }

Person::Person(std::string newName, int newAge) {
  name = newName;
  age = newAge;
}

std::string Person::toString() {
  std::stringstream ss;
  ss << "Name: ";
  ss << name;
  ss << "; age: ";
  ss << age;
  return ss.str();
}

void Person::setName(std::string newName) { name = newName; }

void Person::setAge(int newAge) { age = newAge; }
