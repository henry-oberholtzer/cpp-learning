#include <iostream>

int main()
{
  bool b1{true};
  bool b2{false};
  b1 = false;
  bool b3{}; // This defaults to false!
  std::cout << true << "- True prints as 1\n";
  std::cout << false << "- False prints as 0\n";
  std::cout << !b1 << "- This is negated to false\n";
  std::cout << !b2 << "- This is negated to true!\n";
  std::cout << std::boolalpha;
  std::cout << !b2 << '\n';
  std::cout << std::noboolalpha;
  std::cout << b2;
  bool b{};
  std::cout << "Enter a boolean value: ";
  std::cin >> std::boolalpha;
  std::cin >> b;
  std::cout << "You entered: " << b << '\n';
  return 0;
}
