#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
	private:
		bool				_sign;
		std::string	const	_name;
		int const			_gradeSign;
		int const			_gradeExec;
	protected:
		Form();
	public:
		Form(std::string const &name, int const &gradeSign,
			int const &gradeExec);
		Form(Form const &ref);
		virtual ~Form();

		Form				&operator=(Form const &ref);
		class				GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw() {
					return ("grade is too low");
			}
		};
		class				GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw() {
					return ("grade is too high");
				}
		};
		int					getGradeSign() const;
		int					getGradeExec() const;
		std::string const	getName() const;
		bool				getSign() const;
		void				beSigned(Bureaucrat &ref);
		virtual bool		execute(Bureaucrat const &executor) const = 0;
};

std::ostream	&operator<<(std::ostream &output, Form const &ref);

#endif