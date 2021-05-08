#include "Victim.hpp"

Victim::Victim( ) : _name("Some victim")
{
	std::cout << "Some random victim called " << this->_name
		<< " just appeared!" << std::endl;
	return ;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name
		<< " just appeared!" << std::endl;
	return ;
}

Victim::Victim(Victim const &ref)
{
	*this = ref;
}

Victim	&Victim::operator=(Victim const &ref)
{
	this->_name = ref.getName();
	return (*this);
}

std::string	Victim::getName() const
{
	return (this->_name);
}

void			Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!"
		<< std::endl;
}

void			Victim::setName(std::string newName)
{
	this->_name = newName;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!"
		<< std::endl;
}

std::ostream	&operator<<(std::ostream &output, Victim const &victim)
{
	output << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return (output);
}