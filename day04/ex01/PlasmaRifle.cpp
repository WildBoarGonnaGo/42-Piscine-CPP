#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle( ) : AWeapon("Plasma Rifle", 5, 21) { }

PlasmaRifle::~PlasmaRifle( ) { }

PlasmaRifle::PlasmaRifle(PlasmaRifle const &ref)
{
	*this = ref;
	return ;
}

PlasmaRifle		&PlasmaRifle::operator=(PlasmaRifle const &ref)
{
	this->_damage = ref.getDamage();
	this->_apcost = ref.getAPCost();
	return (*this);
}

void			PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}