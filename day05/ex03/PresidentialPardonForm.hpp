#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
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
		virtual bool			execute(Bureaucrat const &executor)
									const;
		std::string				getTarget() const;
};

#endif