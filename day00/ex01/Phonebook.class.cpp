#include "Phonebook.class.hpp"
#include <limits>

Phonebook	::Phonebook(void)
{
	this->noexit_var = 1;
	return ;
}

Phonebook	::~Phonebook(void)
{
	return ;
}

std::string	Phonebook::field[11]
			= {	"first name: ",
				"last name: ",
				"nickname: ",
				"login: ",
				"postal address: ",
				"email address: ",
				"phone number: ",
				"birthday date: ",
				"favorite meal: ",
				"underwear color: ",
				"darkest secret: "
			};

void		Phonebook::addContact(Phonebook *var)
{
	if (Phonebook::_intr == 8)
	{
		std::cerr << "error: the phonebook is already full up"
			<< std::endl;
		return ;
	}
	for (int i = 0; i < 11; ++i)
	{
		std::cout << Phonebook::field[i];
		std::getline(std::cin, var->contact_field[i]);
		if (!i && !var->contact_field[i].compare(""))
		{
			std::cerr << "error: the first name must be entered, try again!"
				<< std::endl;
			--i;
		}
		if (i == 1 && !var->contact_field[i].compare(""))
		{
			std::cerr << "error: the last name must be entered, try again!"
				<< std::endl;
			--i;
		}
	}
	var->_client_num = ++Phonebook::_intr;
	return ;
}

void		Phonebook::writeField(std::string str)
{
	std::string temp;

	temp = str;
	if (temp.length() > 10)
	{
		temp.resize(9);
		temp.append(".");
	}
	std::cout << '|';
	std::cout << std::setw(10);
	std::cout.setf(std::ios_base::right);
	std::cout << temp;
	return ;
} 

void		Phonebook::writeIndex(Phonebook var)
{
	std::cout << '|';
	std::cout << std::setw(10);
	std::cout.setf(std::ios_base::right);
	std::cout << var._client_num;
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
		this->writeIndex(p_obj[i]);
		for (int j = 0; j < 3; ++j)
			Phonebook::writeField(p_obj[i].contact_field[j]);
		std::cout << '|' << std::endl
		<< "+----------+----------+----------+----------+"
		<< std::endl;
	}
	if (!Phonebook::_intr)
	{
		std::cout << "No data is inputed yet. Phonebook is empty!"
			<< std::endl;
		return ;
	}
	while(1)
	{
		std::cout << "Input contact's index: ";
		if (!(std::cin >> index))
		{
			std::cerr << "error: wrong data input, try again."
			<< std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>
				::max(), '\n');
		}
		else if (index < 1 || index > Phonebook::_intr)
			std::cerr << "error: wrong index input, try again." << std::endl;
		else
			break ;
	}
	for (int i = 0; i < 11; ++i)
	{
		std::cout << Phonebook::field[i];
		std::cout << p_obj[index - 1].contact_field[i] << std::endl;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>
		::max(), '\n');
	return ;
}

void	Phonebook::exitInit(void)
{
	--this->noexit_var;
	return ;
}

int		Phonebook::_intr = 0;