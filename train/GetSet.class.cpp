#include <iostream>
#include "GetSet.class.hpp"

GetSet::GetSet(void)
{
	std::cout	<< "Constructor called" << std::endl;
	this->setFoo(21);
	std::cout	<< "this->getFoo() = " << this->getFoo()
				<< std::endl;
	return ;
}

GetSet::~GetSet(void)
{
	std::cout	<< "Destructor is called" << std::endl;
	return ;
}

int		GetSet::getFoo(void) const
{
	return (this->_foo);
}

void	GetSet::setFoo(int v)
{
	if (v >= 0)
		this->_foo = v;
	return ;
}