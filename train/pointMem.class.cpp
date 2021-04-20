#include "pointMem.class.hpp"
#include <iostream>

pointMem	::pointMem(void) : foo(0)
{
	std::cout << "Constructor is called" << std::endl;
	return ;
}

pointMem	::~pointMem(void)
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

void		pointMem::var(void) const
{
	std::cout << "Member function is called" << std::endl;
	return ;
}