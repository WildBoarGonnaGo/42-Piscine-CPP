#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	Form("presidential pardon", 25, 5), _target(target) { }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm
	const &ref)
{
	*this = ref;
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(
							PresidentialPardonForm const
							&ref)
{
	this->_target = ref.getTarget();
	return (*this);
}

std::string				PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

bool					PresidentialPardonForm::execute(
							Bureaucrat const &executor) const
{
	try
	{
		if (!this->getSign())
			throw PresidentialPardonForm::Form::FormIsNotSigned();
		if (executor.getGrade() > this->getGradeExec() ||
			this->getGradeSign() > 150 || this->getGradeExec() > 150)
			throw PresidentialPardonForm::Form::GradeTooLowException();
		if (this->getGradeSign() < 1 || this->getGradeExec() < 1)
			throw PresidentialPardonForm::Form::GradeTooHighException();
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox"
			<< std::endl;
		return (true);
	}
	catch (std::exception &e)
	{
		
		if (this->getGradeSign() > 150 || this->getGradeSign() < 1)
			std::cerr << "execution of Form " << this->getName()
				<< " was aborted: Form sign " << e.what() << std::endl;
		else if (this->getGradeExec() > 150 || this->getGradeExec() < 1)
			std::cerr << "execution of Form " << this->getName()
				<< " was aborted: Form execution " << e.what() << std::endl;
		else
			std::cerr << "execution of Form " << this->getName()
				<< " was aborted: " << e.what() << std::endl;
		return (false);
	}
}

PresidentialPardonForm::~PresidentialPardonForm( ) { }