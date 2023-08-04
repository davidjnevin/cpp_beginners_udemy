#include <iostream>


void switch_statement() {
	int value = 5;
	switch(value){
		case 4:
			std::cout << "Value is 4." << std::endl;
			break;
		case 5:
		  std::cout << "Value is 5." << std::endl;
			break;
		default:
			std::cout << "Unrecognized value." << std::endl;

	}
}

int main() {
	switch_statement();

	return 0;
}
