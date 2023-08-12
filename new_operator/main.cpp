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

// Animal createAnimal() {
// 	Animal a;
// 	a.setName("Bertie");
// 	return a;
// }

// creates an Animal object on the heap using new,
// sets its name to "Bertie", and returns a pointer
// to the object.
Animal *createAnimal() {
	Animal *pAnimal = new Animal();
	pAnimal->setName("Bertie");
	return pAnimal;
}
int main(){

	// Animal cat;
	// cat.setName("Freddy");
	// cat.speak();

	// Animal *pCat1 = new Animal();
	// pCat1->setName("Freddy");
	// pCat1->speak();
	// delete pCat1;

	// Animal frog = createAnimal();
	// frog.speak();

	// Create an Animal object on the heap and return
	// a pointer to it. The pointer is stored in the
	// pfrog variable.
	Animal *pfrog = createAnimal();
	(*pfrog).speak(); // dereference the pointer, then call speak()
	pfrog->speak(); // same as above, but using the -> operator
	// to dereference the pointer and call speak()
	delete pfrog; // delete the object from the heap

	return 0;
}
