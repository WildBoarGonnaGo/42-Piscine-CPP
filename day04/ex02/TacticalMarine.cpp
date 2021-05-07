#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!"
		<< std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const &ref)
{
	std::cout << "Tactical Marine ready for battle!"
		<< std::endl;
	*this = ref;
	return ;
}

TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

ISpaceMarine	*TacticalMarine::clone() const
{
	ISpaceMarine *copy = new TacticalMarine(*this);
	return (copy);
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}	

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}