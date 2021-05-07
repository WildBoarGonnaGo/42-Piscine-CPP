#include "Sorcerer.hpp"

Sorcerer::Sorcerer( ) : _name("Kadgar"), _title("the Keeper")
{
	std::cout << this->_name << ", " << this->_title
		<< ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(std::string const &name, std::string const &title) 
	: _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title
		<< ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &ref)
{
	*this = ref;
	return ;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title
		<< ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}

std::string		Sorcerer::getName() const
{
	return (this->_name);
}

std::string		Sorcerer::getTitle() const
{
	return (this->_title);
}

void			Sorcerer::polymorph(Victim const &trgt) const
{
	trgt.getPolymorphed();
}

Sorcerer		&Sorcerer::operator=(Sorcerer const &ref)
{
	this->_name = ref.getName();
	this->_title = ref.getTitle();
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, Sorcerer const &wizard)
{
	output << "I am " << wizard.getName() << ", " << wizard.getTitle()
		<< ", and I like ponies" << std::endl;
	return (output);
}
	
