#include "Intern.hpp"

Intern::Intern( ) { }

Intern::Intern(Intern const &ref) 
{
	*this = ref;
	return ;
}

Intern	&Intern::operator=(Intern const &ref)
{
	(void)ref;
	return (*this);
}

Form 	*Intern::newShrubbery(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::newPresidential(std::string const &target)
{
	return (new PresidentialPardonForm(target));
} 

Form 	*Intern::newRobotomy(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form					*Intern::makeForm(std::string const &name,
							std::string const &target)
{

	tIntern			brainBlow[6] = {
		{&Intern::newPresidential, "presidential pardon"},
		{&Intern::newRobotomy, "robotomy request"},
		{&Intern::newShrubbery, "shrubbery creation"},
		{&Intern::newPresidential, "PresidentialPardonForm"},
		{&Intern::newRobotomy, "RobotomyRequestForm"},
		{&Intern::newShrubbery, "ShrubberyCreationForm"}
	};

	try
	{
		for (int i = 0; i < 6; ++i)
		{
			if (brainBlow[i].name == name) {
				return (this->*brainBlow[i % 3].ptr)(target);
			}
		}
		throw Intern::NoFormPatternException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " (" <<
			name << ')' << std::endl;
		return (NULL);
	}
}

Intern::~Intern( ) { };