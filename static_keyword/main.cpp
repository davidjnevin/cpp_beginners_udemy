#include <iostream>

#include "Test.h"

int main() {
  // Access static member variable.
  Test::showInfo();
  // Access static const class variable.
  std::cout << Test::MAX << std::endl;
  Test t1;
  // Access static member function.
  std::cout << t1.getId() << std::endl;
  Test::showInfo();
  Test t2;
  std::cout << t2.getId() << std::endl;
  Test::showInfo();
  return 0;
}
