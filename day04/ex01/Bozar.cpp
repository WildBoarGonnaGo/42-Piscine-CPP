#include "Bozar.hpp"
#include <iostream>

Bozar::Bozar() : AWeapon("Bozar", 6, 100) { }

Bozar::~Bozar( ) { }

void	Bozar::attack() const
{
	std::cout << "* boom chuck click *" << std::endl;
}