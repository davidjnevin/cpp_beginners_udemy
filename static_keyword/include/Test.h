#pragma once

#include <iostream>

class Test {
 public:
  static int const MAX;

 private:
  static int count;
  int id;

 public:
  Test();
  int getId();
  static void showInfo();
};
