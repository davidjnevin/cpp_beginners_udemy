#include <iostream>

int main() {
  int values[] = {4, 7, 3, 4};

  std::cout << "sizeof(int): " << sizeof(values) << std::endl;

  // Step through the array using the array address, incremented by the size of
  // each element
  for (unsigned int i = 0; i < sizeof(values) / sizeof(int); i++) {
    std::cout << values[i] << " " << std::flush;
  }

  double doubles[] = {4.9, 7.8, 3.4, 4.3};

  std::cout << "sizeof doubles: " << sizeof(doubles) << std::endl;

  // Step through the array using the array address, incremented by the size of
  // each element
  for (unsigned int i = 0; i < sizeof(doubles) / sizeof(double); i++) {
    std::cout << doubles[i] << " " << std::endl;
  }

  // Using sizeof for a string
  std::cout << "A string" << std::endl;
  std::string texts = "apple";
  std::cout << "sizeof texts: " << sizeof(texts) << std::endl;

  // Using sizeof for a multidimensional array
  std::cout << "Array of strings" << std::endl;
  std::string animals[2][3] = {{"fox", "dog", "cat"},
                               {"mouse", "squirrel", "parrot"}};

  std::cout << "sizeof animals: " << sizeof(animals) << std::endl;

  // Using a for loop and size of to output a multidimensional array
  for (unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) {
    for (unsigned int j = 0; j < sizeof(animals[0]) / sizeof(animals[0][0]);
         j++) {
      std::cout << animals[i][j] << " " << std::flush;
    }
    std::cout << std::endl;
  }

  // Using sizeof for a multidimensional array
  std::cout << "Array of long strings" << std::endl;
  // what happens if I use a very every long string in the array,
  // does this affect the size of the array for fox for example: fox

  std::string long_animals[2][3] = {
      {"what happens if I use a very every long string in teh array, does this "
       "affect the size of the array for fox for example: fox",
       "dog", "cat"},
      {"mouse", "squirrel", "parrot"}};

  std::cout << "sizeof long_animals: " << sizeof(long_animals) << std::endl;
  // no it doesn't

  // And what about the individual elements of the array?
  std::cout << "sizeof long_animals[0][0]: " << sizeof(long_animals[0][0])
            << std::endl;
  std::cout << "sizeof long_animals[1][0]: " << sizeof(long_animals[1][0])
            << std::endl;
  // the size of the individual elements is the same regardles of the contents
  // of the array this is because the size of the individual elements is
  // determined by the type of the array and not the contents of the array

  return 0;
}
