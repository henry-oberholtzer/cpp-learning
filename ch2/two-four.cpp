#include <iostream>

int getValueFromUser()
{
  std::cout << "Enter an interger \n";
  int input{};
  std::cin >> input;
  return input;
}

void printDouble(int x, int y)
{
  std::cout << x << " times " << y << " is " << x * y << '\n';
}

int main()
{
  printDouble(getValueFromUser(), getValueFromUser());
  return 0;
}
