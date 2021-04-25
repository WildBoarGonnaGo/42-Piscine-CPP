#include "Human.hpp"
#include <iostream>
#include <string>

Human::Human( ) { }

Human::~Human( ) { }

std::string	Human::identify( )
{
	return (this->_mouse.identify());
}

Brain		&Human::getBrain()
{
	return (this->_mouse);
}