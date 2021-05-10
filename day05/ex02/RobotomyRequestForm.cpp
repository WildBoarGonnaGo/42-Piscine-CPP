#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	AForm("robotomy request", 72, 45), _target(target) { }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm
	const &ref)
{
	*this = ref;
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(
							RobotomyRequestForm const
							&ref)
{
	this->_target = ref.getTarget();
	return (*this);
}

void				RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	int success;
	try
	{
		srand(time(NULL));
		success = rand() % 2;
		if (!success)
			throw "failed";
		std::cout << this->_target << " has been "
			<< "successfully robotomized!" << std::endl;
	}
	catch(std::string &e)
	{
		std::cout << "Robotomization of " << this->_target
			<< " has " << e << std::endl;
	}
}
