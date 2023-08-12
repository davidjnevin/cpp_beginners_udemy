#include <iostream>

int main() {
  int i = 0;
  std::cout << "While loop" << std::endl;

  while (i < 5) {
    std::cout << i << std::endl;
    i++;
  }

  std::cout << "Do while loop" << std::endl;
  i = 0;
  do {
    std::cout << i << std::endl;
    i++;
  } while (i < 5);

  return 0;
}
