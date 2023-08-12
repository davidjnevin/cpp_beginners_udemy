#include <iostream>
#define NEWLINE() std::cout << std::endl << "====================" << std::endl
#define LOG(x) std::cout << x << std::endl

int main() {
  // Character Arrays
  char text[] = "hello";

  for (int i = 0; i < sizeof(text); i++) {
    std::cout << i << ": " << int(text[i]) << "->" << text[i] << std::endl;
  }

  // reversing an array
  int nChars = sizeof(text) - 1;
  char *pStart = text;
  char *pEnd = text + nChars - 1;

  while (pStart < pEnd) {
    char tmp = *pStart;
    *pStart = *pEnd;
    *pEnd = tmp;

    pStart++;
    pEnd--;
  }

  LOG(text);
  return 0;
}
