#include <iostream>

int add(int x, int y);
/*
forward declaration,
could declare without names
but it's better practice to include names.
usually used to tell compiler about a function in a different file
*/

int undefined(int z);
// g++ doesnt care about this existing, but it ios useless.

int main()
{
  std::cout << "Oh hello" << add(3, 5) << "\n";
  return 0;
}

int add(int x, int y)
{
  return x + y;
}
