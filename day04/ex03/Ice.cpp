#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") { }

AMateria	*Ice::clone() const
{
	AMateria *res = new Ice();
	return (res);
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *"
		<< std::endl; 
	this->setXP(this->getXP() + 10);
}

Ice::~Ice( ) { }