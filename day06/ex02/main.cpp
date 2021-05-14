#include <iostream>
#include <ctime>
#include <iostream>
#include "identReal.hpp"

int main(void)
{
	srand(time(NULL));
	Base *ptr;

	ptr = generate();
	std::cout << "identify from pointer: ";
	identify_from_pointer(ptr);
	std::cout << "identify from reference: ";
	identify_from_reference(*ptr);

	delete ptr;
	return (0);
}