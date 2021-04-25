#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( ) { }

Zombie::~Zombie( ) { }

void	Zombie::announce()
{
	std::cout << '<' << this->name
		<< " (" << this->type
		<< ")> Braiiiiiiinnnssss..."
		<< std::endl;
}