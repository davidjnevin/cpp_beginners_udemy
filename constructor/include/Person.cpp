#include "Person.h"

#include <iostream>
#include <sstream>

Person::Person() : name(""), age(0) {
  std::cout << "Person created" << std::endl;
}

Person::Person(std::string name, int age) : name(name), age(age) {
  std::cout << "Person with paramaters created" << std::endl;
}

std::string Person::toString() {
  std::stringstream ss;
  ss << "Name: ";
  ss << name;
  ss << "; age: ";
  ss << age;
  return ss.str();
}

void Person::setName(std::string name) { this->name = name; }

void Person::setAge(int age) { this->age = age; }
