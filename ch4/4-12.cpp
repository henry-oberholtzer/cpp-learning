#include <iostream>
// This will throw an error about type conversion when attempting to compile.

void print(int x)
{
  std::cout << x << '\n';
}

int main()
{
  print(5.5);
  return 0;
}
