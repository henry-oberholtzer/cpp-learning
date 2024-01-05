#include <iostream>

int main()
{
	int usesCamelCaseToo{5};
	int y; // yeah we're whitespace agnostic in c++
	std::cout
			<< "Quoted text uses      whitespace literally\n"
			<< "And statements can be split over multiple lines"
			<< "Oh yeah and about those really long lines which you may know about"
				 "they're a bit of a headache";
	std::cout
			<< 3 + 4 + 5 + 6 * 7 * 9;

	return 0;
}
