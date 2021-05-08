#include "Bozar.hpp"
#include <iostream>

Bozar::Bozar() : AWeapon("Bozar", 6, 100) { }

Bozar::~Bozar( ) { }

Bozar::Bozar(Bozar const &ref)
{
	*this = ref;
	return ;
}

Bozar	&Bozar::operator=(Bozar const &ref)
{
	this->_damage = ref.getDamage();
	this->_apcost = ref.getAPCost();
	return (*this);
}

void	Bozar::attack() const
{
	std::cout << "* boom chuck click *" << std::endl;
}