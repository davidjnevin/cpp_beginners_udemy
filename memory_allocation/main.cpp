#include <iostream>
#define NEWLINE() std::cout << std::endl << "====================" << std::endl
#define LOG(x) std::cout << x << std::endl

class Animal{
	private:
		std::string name;
	public:
		Animal() {
		LOG("Animal created.");
		}
		Animal(const Animal& other): name(other.name) {
		LOG("Animal created by copying.");
		}
		~Animal() {
		LOG("Destructor called.");
		}
		void setName(std::string name) {
		this->name = name;
		}
		void speak() const {
		LOG("My name is: " << name);
		}
	};

// creates an Animal object on the heap using new,
// sets its name to "Bertie", and returns a pointer
// to the object.
Animal *createAnimal() {
	Animal *pAnimal = new Animal();
	pAnimal->setName("Bertie");
	return pAnimal;
}
int main(){

	int *pint = new int; // create an int on the heap
	*pint = 8; // assign a value to the heap int
	LOG(*pint); // print the heap int
	delete pint; // delete the heap int

	NEWLINE();

	Animal *panimal = new Animal[26]; // create an array of 10 Animals on the heap
	char name = 'a'; // create a char on the stack
	// create a pointer to a char on the stack
	for (int i = 0; i < 26; i++) {
		panimal[i].setName(std::string(1, name)); // set the name of the Animal
		panimal[i].speak(); // call the speak() method of the Animal
		name++; // increment the value of name
	}

	// panimal[5].setName("George"); // set the name of the 6th Animal in the array
	// panimal[5].speak(); // call the speak() method of the 6th Animal in the array

	// delete the array of Animals from the heap
	delete [] panimal;

	NEWLINE();

	char *pMem = new char[1000]; // create 1000 bytes of memory on the heap
	// delete the memory
	// delete pMem; // this will only delete the first byte
	delete [] pMem; // this will delete the whole array

	// // Create an Animal object on the heap and return
	// // a pointer to it. The pointer is stored in the
	// // pfrog variable.
	// Animal *pfrog = createAnimal();
	// (*pfrog).speak(); // dereference the pointer, then call speak()
	// pfrog->speak(); // same as above, but using the -> operator
	// // to dereference the pointer and call speak()
	// delete pfrog; // delete the object from the heap

	return 0;
}
