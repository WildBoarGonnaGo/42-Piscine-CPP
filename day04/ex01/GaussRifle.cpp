#include "GaussRifle.hpp"
#include <iostream>

GaussRifle::GaussRifle() : AWeapon("M72 Gauss Rifle", 5, 43) { }

GaussRifle::~GaussRifle( ) { }

GaussRifle::GaussRifle(GaussRifle const &ref)
{
	*this = ref;
	return ;
}

GaussRifle		&GaussRifle::operator=(GaussRifle const &ref)
{
	this->_damage = ref.getDamage();
	this->_apcost = ref.getAPCost();
	return (*this);
}

void			GaussRifle::attack() const
{
	std::cout << "* eunngh pheowf *" << std::endl;
}