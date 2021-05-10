#ifndef AFORM_HPP
# define AFORM_HPP

class Bureaucrat;
# include "Bureaucrat.hpp"

class AForm
{
	private:
		bool				_sign;
		std::string	const	_name;
		int const			_gradeSign;
		int const			_gradeExec;
	protected:
		AForm();
	public:
		AForm(std::string const name, int const gradeSign,
			int const gradeExec);
		AForm(AForm const &ref);
		virtual ~AForm();

		AForm				&operator=(AForm const &ref);
		class				GradeTooLowException;
		class				GradeTooHighException;
		int					getGradeSign() const;
		int					getGradeExec() const;
		std::string const	getName() const;
		bool				getSign() const;
		void				beSigned(Bureaucrat &ref);
		virtual void		execute(Bureaucrat const &executor) = 0;
};

std::ostream	&operator<<(std::ostream &output, AForm const &ref);

#endif