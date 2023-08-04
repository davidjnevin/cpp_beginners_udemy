#include <iostream>

int main() {

	std::cout << "Array of ints" << std::endl;
	int values[3];

	values[0] = 88;
	values[1] = 123;
	values[2] = 7;

	std::cout << values[0] << std::endl;
	std::cout << values[1] << std::endl;
	std::cout << values[2] << std::endl;

	std::cout << "Array of doubles" << std::endl;
	double doubles[3] = {4.5, 2.3, 7.2};

	std::cout << doubles[0] << std::endl;
	std::cout << doubles[1] << std::endl;
	std::cout << doubles[2] << std::endl;

	std::cout << "Array of strings" << std::endl;
	std::string texts[3] = {"apple", "banana", "orange"};

	std::cout << texts[0] << std::endl;
	std::cout << texts[1] << std::endl;
	std::cout << texts[2] << std::endl;



	return 0;
}
