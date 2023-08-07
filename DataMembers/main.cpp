#include "Cat.h"
#include "Person.h"
#include <iostream>

int main() {
  {
    Cat jim;
    // jim.makeHappy();
    jim.speak();

    Cat bob;
    bob.makeSad();
    bob.speak();
  }

  Person person;
  std::cout << person.toString() << std::endl;

	person.setName("Bob");
  std::cout << person.toString() << std::endl;
  std::cout << person.getName() << std::endl;
  return 0;
}
