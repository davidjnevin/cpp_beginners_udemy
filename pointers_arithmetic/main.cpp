// Pointers are an integer that stores a memory address.

#include <iostream>
#define NEWLINE() std::cout << std::endl << "====================" << std::endl
#define LOG(x) std::cout << x << std::endl

int main() {

  // Ponters and arrays
  std::string texts[] = {"one", "two", "three", "four", "five"};

  const int LENGTH = sizeof(texts) / sizeof(std::string);

	std::string *pTexts = texts;

	pTexts += 3;

	LOG(*pTexts);
	LOG(pTexts);

	pTexts -= 2;

	LOG(*pTexts);
	LOG(pTexts);

  return 0;
}
