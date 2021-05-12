#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>

int main(void)
{
	srand(time(NULL));

	Intern		someRandomIntern;
	Form		*rrf;
	Bureaucrat	donald("Donald Trump", 1);

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	donald.executeForm(*rrf);
	rrf->beSigned(donald);
	donald.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bush_Junior");
	rrf->beSigned(donald);
	donald.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("presidential pardon", donald.getName());
	rrf->beSigned(donald);
	donald.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("Monka's revenge", donald.getName());
	delete rrf;

	return (0);
}