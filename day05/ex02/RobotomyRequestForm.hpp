#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		RobotomyRequestForm();
		std::string	_target;
	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &ref);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm	&operator=(RobotomyRequestForm const
									&ref);
		virtual bool			execute(Bureaucrat const &executor)
									const;
		std::string				getTarget() const;
};

#endif