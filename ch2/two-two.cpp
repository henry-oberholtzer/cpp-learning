#include <iostream>

int getValueFromUser()
{
  std::cout << "Enter an interger\n";
  int input{};
  std::cin >> input;
  return input;
}

int main()
{
  int num{getValueFromUser()};
  int secondNum{getValueFromUser()};
  std::cout << num << " times " << secondNum << " is equal to " << num * secondNum << '\n';
  return 0;
}
