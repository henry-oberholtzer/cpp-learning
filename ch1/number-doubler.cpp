#include <iostream>

int main()
{
  std::cout << "Enter an integer: ";
  int num{};
  std::cin >> num;
  std::cout << "Your new number is....\n\n"
            << num * 2;
  return 0;
}
