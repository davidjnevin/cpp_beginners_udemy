#include <iostream>

int main() {
  std::cout << "Hello World!";

  std::cout << std::endl;

  std::cout << "Enter your name: ";
  std::string name;
  std::cin >> name;

  std::string response = "Hello " + name + "!";
  std::cout << response;
  std::cout << std::endl;

  std::cout << "Enter a number: ";
  int x;
  std::cin >> x;

  std::cout << "Enter a float number: ";
  float y;
  std::cin >> y;

  std::cout << "Enter a double number: ";
  double z;
  std::cin >> z;

  std::cout << "Enter a char: ";
  char c;
  std::cin >> c;

  std::cout << "Enter a bool: ";
  bool b;
  std::cin >> b;

  std::cout << "The numbers entered are: " << x << ", " << y << ", " << z
            << ", " << c << ", " << b << std::endl;
  std::cout << "The size of the numbers entered are: " << sizeof(x) << ", "
            << sizeof(y) << ", " << sizeof(z) << ", " << sizeof(c) << ", "
            << sizeof(b) << std::endl;

  std::cout << std::scientific << 123456789.0 << std::endl;

  return 0;
}
