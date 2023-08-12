#include "Cat.h"

#include <iostream>

Cat::Cat() {
  std::cout << "Cat created." << std::endl;

  happy = true;
}

Cat::~Cat() { std::cout << "Cat destroyed." << std::endl; }

void Cat::speak() {
  if (happy) {
    std::cout << "Meow!" << std::endl;
  } else {
    std::cout << "Sssss!" << std::endl;
  }
}

void Cat::makeHappy() { happy = true; }

void Cat::makeSad() { happy = false; }
