#include <iostream>
#include "nonMem.class.hpp"

void	f0(void)
{
	nonMem	instance;

	std::cout << "Number of instances: " << nonMem::getNbInst()
		<< std::endl;
	return ;
}

void	f1(void)
{
	nonMem instance;

	std::cout << "Number of instances: " << nonMem::getNbInst()
		<< std::endl;
	f0();
	return ;
}

int main(void)
{
	std::cout << "Number of instances: " << nonMem::getNbInst()
		<< std::endl;
	f1();
	std::cout << "Number of instances: " << nonMem::getNbInst()
		<< std::endl;
	return (0);
}