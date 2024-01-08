#include <iostream>

void doA()
{
  std::cout << "I'm function doA()\n";
}

void doPrint()
{
  std::cout << "In doPrint()\n";
  doA();
}

int main()
{
  std::cout << "Starting main()\n";
  doPrint();
  doPrint();
  std::cout << "Ending main()\n";
  return 0;
}
