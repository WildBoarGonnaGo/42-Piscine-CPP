#include "Centaur.hpp"
#include <iostream>

Centaur::Centaur() : Enemy(170, "Super Mutant")
{
	std::cout << "* Wooooaaagh... Rrrrgluk *" << std::endl;
}

Centaur::~Centaur()
{
	std::cout << "Wooaangh..." << std::endl;
}