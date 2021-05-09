#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") { }

AMateria	*Cure::clone() const
{
	AMateria *res = new Cure;
	return (res);
}

Cure::Cure(Cure const &ref)
{
	*this = ref;
	return ;
}

Cure		&Cure::operator=(Cure const &ref)
{
	this->setXP(ref.getXP());
	return (*this);
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals "
		<< target.getName() << "'s wounds *"
		<< std::endl;
	this->setXP(this->getXP() + 10);
}

Cure::~Cure( ) { }