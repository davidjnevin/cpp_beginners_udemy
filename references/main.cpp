#include <iostream>
#define LOG(x) std::cout << x << std::endl

// Pass by reference
void addOne(int& value) { value++; }

int main() {
  int value1 = 5;
  int& value2 = value1;

  LOG(value1);
  LOG(value2);

  int value3 = 10;
  LOG(value3);
  addOne(value3);
  LOG(value3);
  return 0;
}
