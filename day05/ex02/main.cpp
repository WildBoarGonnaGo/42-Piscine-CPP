#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

int main(void)
{
		srand(time(NULL));
	Bureaucrat thomas("Thomas", 5);
	Bureaucrat david("David", 150);
	Bureaucrat cheater("Cheater", -2);
	std::cout << std::endl;

	ShrubberyCreationForm	monka("Monka");
	RobotomyRequestForm		pepe("Pepe");
	ShrubberyCreationForm	failure("Failure");
	PresidentialPardonForm	trump("Donald Trump");
	std::cout << std::endl;

	thomas.executeForm(monka);
	thomas.executeForm(pepe);
	thomas.executeForm(trump);
	std::cout << std::endl;

	david.executeForm(failure);
	david.executeForm(pepe);
	david.executeForm(trump);
	std::cout << std::endl;

	cheater.executeForm(failure);
	cheater.executeForm(pepe);
	cheater.executeForm(trump);
	std::cout << std::endl;

	monka.beSigned(cheater);
	pepe.beSigned(cheater);
	failure.beSigned(cheater);
	trump.beSigned(cheater);
	std::cout << std::endl;

	thomas.executeForm(monka);
	thomas.executeForm(pepe);
	thomas.executeForm(trump);
	std::cout << std::endl;

	monka.beSigned(thomas);
	pepe.beSigned(thomas);
	failure.beSigned(thomas);
	trump.beSigned(thomas);
	std::cout << std::endl;

	thomas.executeForm(monka);
	thomas.executeForm(pepe);
	thomas.executeForm(trump);
	std::cout << std::endl;
}