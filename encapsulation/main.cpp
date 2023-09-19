#include <iostream>

class Frog {
 private:
  std::string name;
  std::string getName() { return name; }

 public:
  Frog(std::string name) : name(name) {}
  void info() { std::cout << "My name is: " << getName() << std::endl; }
};

int main() {
  Frog frog("Freddy");
  frog.info();
  return 0;
}
