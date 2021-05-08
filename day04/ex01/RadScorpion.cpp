#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click, click, click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &ref)
{
	*this = ref;
	return ;
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &ref)
{
	this->_hp = ref.getHP();
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}