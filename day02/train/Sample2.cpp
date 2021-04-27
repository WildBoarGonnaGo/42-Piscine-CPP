#include <iostream>
#include "Sample2.hpp"

Sample2::Sample2(void) : _foo(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Sample2::Sample2(int const n) : _foo(n) 
{
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}

Sample2::Sample2(Sample2 const &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;

	return ;
}

Sample2::~Sample2(void)
{
	std::cout << "Default destructor called" << std::endl;
	return ;
}

int		Sample2::getFoo(void) const
{
	return (this->_foo);
}

Sample2	&Sample2::operator=(Sample2 const &rhs)
{
	std::cout << "Assignation operator is called from "
		<< this->_foo << " to " << rhs.getFoo() << std::endl;
	this->_foo = rhs.getFoo();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Sample2 const &i)
{
	o << i.getFoo();
	return (o);
}

