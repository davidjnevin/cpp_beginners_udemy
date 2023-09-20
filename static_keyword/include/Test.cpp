#include "Test.h"

int Test::count = 0;

int const Test::MAX = 99;

Test::Test() { id = ++count; };

int Test::getId() { return id; };

void Test::showInfo() { std::cout << "count: " << count << std::endl; };
