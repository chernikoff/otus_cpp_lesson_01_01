#include <iostream>

#include "helloworld.h"

int main(int /*argc*/, char ** /*argv*/)
{
  std::cout << "Hello, World!\n";
  std::cout << "My version number is " << version() << std::endl;
  return 0;
}
