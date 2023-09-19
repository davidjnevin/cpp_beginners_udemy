#include <iostream>

class Machine {
 private:
  int id;
  std::string name;

 public:
  Machine() : id(0), name("machine") {
    std::cout << "Machine constructor called." << std::endl;
  }
  // This constructor is called when we create a new object of type Machine
  // but is not called when we create a new object of type Vehicle or Car.
  Machine(int id) : id(id), name("machine") {
    std::cout << "Machine constructor called with parameter." << std::endl;
  }
  int getId() { return id; }
  std::string getName() { return name; }
};

class Vehicle : public Machine {
 public:
  // We can set a subclass to run a specific constructor of the superclass
  // by using the constructor initialization list.
  Vehicle(int id) : Machine(id) {
    std::cout << "Vehicle constructor called." << std::endl;
  }
  Vehicle() { std::cout << "Vehicle constructor called." << std::endl; }
};

class Car : public Vehicle {
 public:
  Car() { std::cout << "Car constructor called." << std::endl; }
};

int main() {
  Machine machine(123);
  std::cout << machine.getId() << std::endl;
  std::cout << machine.getName() << std::endl;

  Vehicle vehicle(321);
  std::cout << vehicle.getId() << std::endl;
  std::cout << vehicle.getName() << std::endl;

  Car car;
  std::cout << car.getId() << std::endl;
  std::cout << car.getName() << std::endl;
  return 0;
}
