#include <iostream>

class Animal {
 public:
  void speak() { std::cout << "grrr" << std::endl; }
};

class Cat : public Animal {
 public:
  void jump() { std::cout << "cat jumping!" << std::endl; }
};

class Tiger : public Cat {
 public:
  void attackAntelope() { std::cout << "attacking!" << std::endl; }
};

int main() {
  Animal a;
  Cat cat;
  Tiger tiger;
  a.speak();
  cat.speak();
  cat.jump();
  tiger.speak();
  tiger.jump();
  tiger.attackAntelope();
  return 0;
}
