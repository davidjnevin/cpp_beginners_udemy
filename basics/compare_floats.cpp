#include <iomanip>
#include <iostream>

int main() {
  float value1 = 1.1;

  if ((1.1 - value1) == 0) {
    std::cout << "equals" << std::endl;
  } else {
    std::cout << "not equal" << std::endl;
  }

  std::cout << std::setprecision(10) << value1 << std::endl;

  return 0;
}
