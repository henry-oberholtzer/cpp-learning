#include <iostream>

#define PRINT_NO_NAME
#define MY_NAME "Henry"

int main()
{
#ifdef PRINT_NAME
  std::cout << "My name is" << MY_NAME << '\n';
#endif

#ifndef I_WAS_NOT_DEFINED
  std::cout << "I am the result of an undefined conditional\n";
#endif

#ifdef PRINT_NO_NAME
  std::cout << "You have no name\n";
#endif

  return 0;
}
