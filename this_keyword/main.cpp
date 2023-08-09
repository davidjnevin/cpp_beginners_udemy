#include "Person.h"
#include <iostream>

int main() {
  Person person;
  person.setName("George");
  person.setAge(32);
  Person person2("Susana", 42);
  std::cout << person.toString() << std::endl;
  std::cout << person2.toString() << std::endl;

  return 0;
}
