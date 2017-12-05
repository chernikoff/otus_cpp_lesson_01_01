#include <iostream>

#include "helloworld.h"

int main(int /*argc*/, char ** /*argv*/)
{
  std::cout << "My version number is " << version() << std::endl;
  return 0;
}
