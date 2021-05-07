#include "Peon.hpp"

Peon::Peon() : Victim("Timmy")
{
	std::cout << "Zog Zog." << std::endl;
	return ;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog Zog." << std::endl;
	return ;
}

Peon::Peon(Peon const &ref)
{
	*this = ref;
	return ;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!"
		<< std::endl;
}