#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie() { }

Zombie::~Zombie() { }

void	Zombie::announce()
{
	std::cout << '<' << this->_name
		<< " (" << this->_type
		<< ")> Braiiiiiiinnnssss..."
		<< std::endl;
}