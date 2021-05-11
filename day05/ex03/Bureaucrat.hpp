#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>

class Form;
# include "Form.hpp"

class Bureaucrat
{
	private:
		Bureaucrat();
		int					_grade;
		std::string const	_name;
	public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &ref);
		~Bureaucrat();

		class GradeTooHighException;
		class GradeTooLowException;
		Bureaucrat			&operator=(Bureaucrat const &ref);
		std::string const	getName() const;
		int					getGrade() const;
		void				gInc();
		void				gDec();
		void				signForm(Form const &form);
		void				executeForm(Form const &form);
};

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &ref);

#endif