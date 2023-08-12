#include <iostream>

int main() {
  std::cout << "1.\tOption 1" << std::endl;
  std::cout << "2.\tOption 2" << std::endl;
  std::cout << "3.\tOption 3" << std::endl;
  std::cout << "4.\tOption 4" << std::endl;

  std::cout << "Enter your selection > " << std::endl;

  int choice;
  std::cin >> choice;

  if (choice == 1) {
    std::cout << "You selected 1" << std::endl;
  } else if (choice == 2) {
    std::cout << "You selected 2" << std::endl;
  } else if (choice == 3) {
    std::cout << "You selected 3" << std::endl;
  } else if (choice == 4) {
    std::cout << "You selected 4" << std::endl;
  } else {
    std::cout << "Invalid selection" << std::endl;
  }

  return 0;
}
