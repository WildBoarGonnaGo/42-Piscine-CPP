#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &ref)
{
	*this = ref;
	return ;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &ref)
{
	this->_hp = ref.getHP();
	return (*this);
}

void		SuperMutant::takeDamage(int hit)
{
	int realHit = hit - 3;
	Enemy::takeDamage(realHit);
	return ;
}