#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor is called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

void	Sample::bar(void)
{
	std::cout << "Member of class Sample (bar) is called" << std::endl;
	return ;
}