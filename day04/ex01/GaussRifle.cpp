#include "GaussRifle.hpp"
#include <iostream>

GaussRifle::GaussRifle() : AWeapon("M72 Gauss Rifle", 5, 43) { }

GaussRifle::~GaussRifle( ) { }

void	GaussRifle::attack() const
{
	std::cout << "* eunngh pheowf *" << std::endl;
}