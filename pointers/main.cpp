// Pointers are an integer that stores a memory address.

#include <iostream>

void manipulate(double *pvalue) { // pointer to double
	std::cout << "2. Value of double in manipulate: " << *pvalue << "\n"; // dereference pointer to double
	*pvalue = 10.9; // dereference pointer to double
	std::cout << "3. Value of double in manipulate: " << *pvalue << "\n"; // dereference pointer to double
}

int main() {

  int nValue = 8; // integer value

	int *pnValue = &nValue; // pointer to address of nValue

	std::cout << "nValue: " << nValue << "\n";
	std::cout << "Memory address of nValue: " << pnValue << "\n";
	std::cout << "int value via pointer dereferencing: " << *pnValue << "\n";

	std::cout << "=============================\n";

	double dValue = 123.4; // double value

	std::cout << "1. dValue: " << dValue << "\n"; // double value
	manipulate(&dValue); // pass the address of double value
	std::cout << "4. dValue: " << dValue << "\n"; // display altered double value

  return 0;
}
