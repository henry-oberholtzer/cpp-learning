#include <iostream>

void aUselessFunction()
{
}

void print()
{
  std::cout << "Yo I don't need a return statement";
  // no need for a return statement here, it's bad practice anyhow.
}

int main()
{
  aUselessFunction();
  print(); // this guy can be called and it'll run like normal
  std::cout << "Cannot take a void function for a std::cout";
  return 0;
}
