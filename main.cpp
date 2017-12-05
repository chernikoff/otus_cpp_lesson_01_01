#include <iostream>

#include "version.h"

int main(int /*argc*/, char ** /*argv*/)
{
  std::cout << "Hello World " << PROJECT_VERSION_PATCH << std::endl;
  return 0;
}
