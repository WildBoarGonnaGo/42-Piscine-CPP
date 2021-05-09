#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") { }

AMateria	*Ice::clone() const
{
	AMateria *res = new Ice();
	return (res);
}

Ice::Ice(Ice const &ref)
{
	*this = ref;
	return ;
}

Ice			&Ice::operator=(Ice const &ref)
{
	this->setXP(ref.getXP());
	return (*this);
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *"
		<< std::endl; 
	this->setXP(this->getXP() + 10);
}

Ice::~Ice( ) { }