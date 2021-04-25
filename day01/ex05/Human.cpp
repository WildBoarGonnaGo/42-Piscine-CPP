#include "Human.hpp"
#include <iostream>
#include <string>

Human::Human( ) { }

Human::~Human( ) { }

std::string	Human::identify( ) const
{
	return (this->_mouse.identify());
}

Brain const	&Human::getBrain()
{
	return (this->_mouse);
}