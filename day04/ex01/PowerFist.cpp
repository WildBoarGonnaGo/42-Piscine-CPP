#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist( ) : AWeapon("Power Fist", 8, 50) { }

PowerFist::~PowerFist( ) { }

PowerFist::PowerFist(PowerFist const &ref)
{
	*this = ref;
	return ;
}

PowerFist		&PowerFist::operator=(PowerFist const &ref)
{
	this->_damage = ref.getDamage();
	this->_apcost = ref.getAPCost();
	return (*this);
}

void			PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}