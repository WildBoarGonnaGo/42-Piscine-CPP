#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const &type) : _type(type), _xp(0) { }

AMateria::AMateria(AMateria const &ref)
{
	*this = ref;
	return;
}

AMateria	&AMateria::operator=(AMateria const &ref)
{
	this->_xp = ref.getXP();
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}

unsigned int		AMateria::getXP() const
{
	return (this->_xp);
}

void				AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << std::endl;
	this->_xp += 10;
}

void				AMateria::setXP(unsigned int val)
{
	this->_xp = val;
}