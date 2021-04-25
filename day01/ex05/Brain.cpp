#include "Brain.hpp"
#include <iostream>
#include <sstream>
#include <string>

Brain::Brain( ) { }

Brain::~Brain ( ) { }

std::string	Brain::identify() const
{
	std::stringstream	iostr;
	std::string			res;
				
	iostr << this;
	res = iostr.str();
	return (res);
}