#include "Centaur.hpp"
#include <iostream>

Centaur::Centaur() : Enemy(170, "Super Mutant")
{
	std::cout << "* Wooooaaagh... Rrrrgluk *" << std::endl;
}

Centaur::Centaur(Centaur const &ref)
{
	*this = ref;
	return ;
}

Centaur	&Centaur::operator=(Centaur const &ref)
{
	this->_hp = ref.getHP();
	return (*this);
}

Centaur::~Centaur()
{
	std::cout << "Wooaangh..." << std::endl;
}