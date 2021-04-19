#include <iostream>
#include "comParis.class.hpp"

int main(void)
{
	comParis	instance1(42);
	comParis	instance2(42);

	if (&instance1 == &instance1)
		std::cout << "instance1 and instance1 are physically equal"
			<< std::endl;
	else
		std::cout << "instance1 and instance1 are not physically equal"
			<< std::endl;
	
	if (&instance1 == &instance2)
		std::cout << "instance1 and instance2 are physically equal"
			<< std::endl;
	else
		std::cout << "instance1 and instance2 are not physically equal"
			<< std::endl; 
	if (!instance1.compare(&instance1))
		std::cout << "instance1 and instance1 are structurally equal"
			<< std::endl;
	else
		std::cout << "instance1 and instance1 are not structurally equal"
			<< std::endl;
	if (!instance1.compare(&instance2))
		std::cout << "instance1 and instance2 are structurally equal"
			<< std::endl;
	else
		std::cout << "instance1 and instance2 are not structurally equal"
			<< std::endl;
	
	return (0);
}