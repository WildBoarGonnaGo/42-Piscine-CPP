#include <iostream>
#include "comParis.class.hpp"

comParis::comParis(int v) : _foo(v)
{
	std::cout << "Constructor is called" << std::endl;
	return ;
}

comParis::~comParis(void)
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

int	comParis::getFoo(void) const
{
	return (this->_foo);
}

int	comParis::compare(comParis *other) const
{
	if (this->_foo > other->_foo)
		return (1);
	else if (this->_foo < other->_foo)
		return (-1);
	return (0);
}