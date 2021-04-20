#include "Phonebook.class.hpp"

Phonebook::Phonebook(void)
{
	this->noexit_var = 1;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::addContact(Phonebook *var)
{
	if (Phonebook::_intr == 8)
	{
		std::cout << "ERROR: the phonebook is already full up"
			<< std::endl;
		return ;
	}
	for (int i = 0; i < 11; ++i)
	{
		std::cout << var->field[i];
		std::getline(std::cin, var->contact_field[i]);
	}
	++Phonebook::_intr;
	return ;
}

void		Phonebook::writeField(std::string str)
{
	std::string temp;

	temp = str;
	if (temp.length() > 9)
	{
		temp.resize(9);
		temp.append(".");
	}
	std::cout.setf(std::ios_base::right);
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << '|' << temp;
	return ;
} 

void		Phonebook::getSearch(Phonebook *p_obj)
{
	int	index;

	std::cout	
		<< "+----------+----------+----------+----------+" << std::endl
		<< "|  index   |first name| last name| nickname |" << std::endl
		<< "+----------+----------+----------+----------+" << std::endl;
	
	for (int i = 0; i < Phonebook::_intr; ++i)
	{
		for (int j = 0; j < 4; ++j)
			Phonebook::writeField(p_obj[i].contact_field[j]);
		std::cout << '|' << std::endl
		<< "+----------+----------+----------+----------+"
		<< std::endl;
	}
	std::cout << "Input contact's index: ";
	std::cin >> index;
	if (index < 1 || index > Phonebook::_intr)
		std::cout << "ERROR: wrong index input" << std::endl;
	else
	{
		for (int i = 0; i < 11; ++i)
		{
			std::cout << Phonebook::field[i];
			std::cout << p_obj[index].contact_field[i] << std::endl;
		}
	}
	return ;
}

void	Phonebook::wrongFuncOutput(void)
{
	std::cout << "ERROR: wrong command request" << std::endl;
	return ;
}

void	Phonebook::exitInit(void)
{
	--this->noexit_var;
	return ;
}

int		Phonebook::_intr = 0;