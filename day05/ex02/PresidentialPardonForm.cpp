#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	AForm("presidential pardon", 25, 5), _target(target) { }

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

void					PresidentialPardonForm::execute(
							Bureaucrat const &executor)
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox"
		<< std::endl;
}