#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
	private:
		Form();
		bool				_sign;
		std::string	const	_name;
		int const			_gradeSign;
		int const			_gradeExec;
	public:
		Form(std::string const &name, int const &gradeSign,
			int const &gradeExec);
		Form(Form const &ref);
		~Form();

		Form				&operator=(Form const &ref);
		class				GradeTooLowException;
		class				GradeTooHighException;
		int					getGradeSign() const;
		int					getGradeExec() const;
		std::string const	getName() const;
		bool				getSign() const;
		void				beSigned(Bureaucrat &ref);
};

std::ostream	&operator<<(std::ostream &output, Form const &ref);

#endif