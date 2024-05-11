#include <iostream>

int main()
{
  std::cout << "Would you like a burrito? (y/n)\n";
  char ch1{};
  std::cin >> ch1;
  if (ch1 == 'y')
    std::cout << "Ok! You got it.\n";
  else if (ch1 == 'n')
    std::cout << "Sure, no burrito for you.\n";
  else
    std::cout << "I don't understand.\n";

  return 0;
}
