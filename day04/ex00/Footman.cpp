#include "Footman.hpp"

Footman::Footman() : Victim("Arthas")
{
	std::cout << "Ready for actions!" << std::endl;
	return ;
}

Footman::Footman(std::string name) : Victim(name)
{
	std::cout << "Ready for actions!" << std::endl;
	return ;
}

Footman::Footman(Footman const &ref)
{
	*this = ref;
	return ;
}

Footman::~Footman()
{
	std::cout << "This can't be!" << std::endl;
}

void	Footman::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a dog! [woof-woof]"
		<< std::endl;
}

std::ostream	&operator<<(std::ostream &output, Footman const &victim)
{
	output << "I'm " << victim.getName() << " and i like pale ale!" << std::endl;
	return (output);
}