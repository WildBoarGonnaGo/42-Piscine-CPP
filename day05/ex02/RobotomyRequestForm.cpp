#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	Form("robotomy request", 72, 45), _target(target) { }

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

std::string			RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

bool				RobotomyRequestForm::execute(
						Bureaucrat const &executor)
						const
{
	int success;
	try
	{
		if (executor.getGrade() > this->getGradeExec() ||
			this->getGradeSign() > 150 || this->getGradeExec() > 150)
			throw RobotomyRequestForm::Form::GradeTooLowException();
		if (this->getGradeSign() < 1 || this->getGradeExec() < 1)
			throw RobotomyRequestForm::Form::GradeTooHighException();
		success = rand() % 2;
		if (!success)
			throw success;
		std::cout << this->_target << " has been "
			<< "successfully robotomized!" << std::endl;
		return (true);
	}
	catch (std::exception &e)
	{
		if (this->getGradeSign() > 150 || this->getGradeSign() < 1)
		{
			std::cerr << "execution of Form " << this->getName()
				<< " was aborted: Form sign " << e.what() << std::endl;
		}
		else if (this->getGradeExec() > 150 || this->getGradeExec() < 1)
		{
			std::cerr << "execution of Form " << this->getName()
				<< " was aborted: Form execution " << e.what() << std::endl;
		}
		return (false);
	}
	catch(int &e)
	{
		std::cerr << "Robotomization of " << this->_target
			<< " has failed!" << std::endl;
		return (false);
	}
}

RobotomyRequestForm::~RobotomyRequestForm( ) { }