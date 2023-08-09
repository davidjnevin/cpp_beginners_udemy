#include "Person.h"
#include <iostream>

int main() {
  Person person1;
  Person person2("Susana", 42);
  std::cout << person1.toString() << std::endl;
  std::cout << person2.toString() << std::endl;

  return 0;
}
