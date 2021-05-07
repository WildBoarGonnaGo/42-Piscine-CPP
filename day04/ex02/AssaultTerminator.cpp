#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *"
		<< std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &ref)
{
	std::cout << "* teleports from space *"
		<< std::endl;
	*this = ref;
	return ;
}

AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

ISpaceMarine		*AssaultTerminator::clone() const
{
	ISpaceMarine *copy = new AssaultTerminator(*this);
	return (copy);
}

void				AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}	

void				AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void				AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}