// Pointers are an integer that stores a memory address.

#include <iostream>
#define NEWLINE() std::cout << std::endl << "====================" << std::endl
#define LOG(x) std::cout << x << std::endl

int main() {

  // Ponters and arrays
  std::string texts[] = {"one", "two", "three"};

  // A pointer doesn't know the size of the array it's pointing to.
  std::string *pTexts = texts;

  std::cout << sizeof(texts) << std::endl;

  std::cout << sizeof(texts) / sizeof(std::string) << std::endl;

  int length = sizeof(texts) / sizeof(std::string);

  for (int i = 0; i < length; i++) {
    // Iterate through the array using the array index
    std::cout << texts[i] << " " << std::flush;

    // Iterate through the array using a pointer index
    std::cout << pTexts[i] << " " << std::flush;
  }
  // for (int i = 0; i <= length; i++) {
  // // Iterate through the array using a pointer index beyond the array
  // std::cout << pTexts[i] << " " << std::flush;
  // }
  //
	NEWLINE();

  for (int i = 0; i < length; i++, pTexts++) {
    // Iterate through the array using a dereferencing pointer index
    std::cout << *pTexts << " " << std::flush;
  }

	NEWLINE();

	// loop through and array by comparing pointers

	// Define pointer to the first element of the array
	std::string *pElement = texts;
	// Define pointer to the last element of the array
	std::string *pEnd = &texts[length - 1];

	bool keepgoing = true;

	while(keepgoing) {
		std::cout << *pElement << " " << std::flush;

		if (pElement == pEnd) {
			keepgoing = false;
		}
		NEWLINE();
		std::cout << pElement << " " << std::flush;
		pElement++;
	}

  return 0;
}
