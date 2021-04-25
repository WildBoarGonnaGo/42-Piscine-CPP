#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : _type(type) { }

Weapon::~Weapon( ) { };

std::string	const	&Weapon::getType()
{
	return (this->_type);
}

void				Weapon::setType(std::string type)
{
	this->_type = type;
}

void				Weapon::printType()
{
	std::cout << this->_type << std::endl;
}