#include <iostream>

void showMenu() {

  // show the menu
  std::cout << "1. Search" << std::endl;
  std::cout << "2. View Record" << std::endl;
  std::cout << "3. Quit" << std::endl;
}

int getInput() {
  // Get Input
  std::cout << "Enter your selection > " << std::endl;
  int value;
  std::cin >> value;
  return value;
}

void processInput(int value) {

  // Make a decision based on the input using switch
  switch (value) {
  case 1:
    std::cout << "Searching ..." << std::endl;
    break;
  case 2:
    std::cout << "Viewing ..." << std::endl;
    break;
  case 3:
    std::cout << "Quitting ..." << std::endl;
    break;
  default:
    std::cout << "Invalid option." << std::endl;
  }
}

int main() {
  showMenu();
  int input = getInput();
	processInput(input);

  return 0;
}
