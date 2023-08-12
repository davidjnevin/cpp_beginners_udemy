#include <iostream>  // for operator<<, basic_ostream, char_traits, endl, cout
#include <string>    // for basic_string

#include "Person.h"  // for Person

int main() {
  Person person1;
  Person person2("Susana", 42);
  std::cout << person1.toString() << std::endl;
  std::cout << person2.toString() << std::endl;

  return 0;
}
