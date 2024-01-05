#include <iostream> // The input/output library

int main()
{
  int age{25};
  int y{0};
  int z; // Unitialized variable!! Watch out!!
  std::cout << "What's up, I'm " << age << " years old."
            << " I'm using the insertion operator"
            << std::endl; // std::cout prints string to console
  std::cout << "I just used the std::endl to end the line"
            << std::endl;
  std::cout << "It's pretty cool\n";
  std::cout << "However\nI can just use a newline tag, and booml, we're set!\nHow old are you?\n";
  std::cin >> y;
  std::cout << "huh, " << y << " years old you say?\n";
  std::cout << "well I'm actually" << z << " years old...";
  return 0;
}
