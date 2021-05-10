#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		PresidentialPardonForm();
		std::string	_target;
	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &ref);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(PresidentialPardonForm const
									&ref);
		virtual void			execute(Bureaucrat const &executor);
		std::string				getTarget() const;
};

#endif