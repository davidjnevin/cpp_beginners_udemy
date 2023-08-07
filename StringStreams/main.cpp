#include <iostream>
#include <sstream>

int main() {

	std::string name = "Bob";
	int age = 32;
	// Below we get an error since we cannot concat a string and an int
	// std::cout << "hello, " << name << ". You are " + age << "!" << std::endl;

	// We can use a stringstream to convert the out put into a string stream
	std::stringstream ss;
	ss << "hello, " << name << ". You are " << age << "!" << std::endl;
	std::string info = ss.str();

	// Now we can print the stream as a string
	std::cout << info << std::endl;
	return 0;
}
