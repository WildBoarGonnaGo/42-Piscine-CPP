#include "Form.hpp"

Form::Form( ) : _sign(false), _name("Noname"), _gradeSign(1),
	_gradeExec(1) { }

Form::Form(std::string const &name, int const &gradeSign, int const &gradeExec) :
	_sign(false), _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	try
	{
		if (this->_gradeSign > 150 || this->_gradeExec > 150)
		 	throw Form::GradeTooLowException();
		if (this->_gradeSign < 1 || this->_gradeExec < 1)
			throw Form::GradeTooHighException();
		std::cout << "Form " << this->_name << " is permitted!"
			<< std::endl;
	}
	catch (std::exception &e)
	{
		if (this->_gradeExec > 150 || this->_gradeExec < 1)
			std::cerr << "Form " << this->_name
				<< " contructor error: execution " << e.what()
				<< std::endl;
		else if (this->_gradeSign > 150 || this->_gradeSign < 1)
			std::cerr << "Form " << this->_name
				<< " constructor error: sign " << e.what()
				<< std::endl;
	}
}

Form::Form(Form const &ref) : _sign(false), _name("Noname"),
	_gradeSign(1), _gradeExec(1)
{
	*this = ref;
	return ;
}

Form				&Form::operator=(Form const &ref)
{
	this->_sign = ref.getSign();
	return (*this);
}

int					Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int					Form::getGradeExec() const
{
	return (this->_gradeExec);
}

std::string const	Form::getName() const
{
	return (this->_name);
}

bool				Form::getSign() const
{
	return (this->_sign);
}

void				Form::beSigned(Bureaucrat &ref)
{
	try
	{
		if (this->_gradeSign > 150 || this->_gradeExec > 150)
			throw Form::GradeTooLowException();
		else if (this->_gradeSign < 1 || this->_gradeExec < 1)
			throw Form::GradeTooHighException();
		else if (ref.getGrade() > this->_gradeSign)
			throw Form::GradeTooLowException();
		this->_sign = true;
		ref.signForm(*this);
	}
	catch (std::exception &e)
	{
		if (this->_gradeSign < 1 || this->_gradeSign > 150)
		{
			std::cerr << "Form " << this->_name
				<< ": sign aborted: sign " << e.what()
				<< std::endl;
			return ;
		}
		else if (this->_gradeExec > 150 || this->_gradeExec < 1)
		{
			std::cerr << "Form " << this->_name
				<< ": sign aborted: execution " << e.what()
				<< std::endl;
			return ;
		}
		ref.signForm(*this);
		std::cerr << ref.getName() << " can't sign Form "
			<< this->_name << ": " << e.what() << std::endl;
	}
}

Form::~Form()
{
	std::cout << "Form " << this->_name
		<< " is no longer related." << std::endl;
}

std::ostream	&operator<<(std::ostream &output, Form const &ref)
{
	try
	{
		if (ref.getGradeSign() > 150 || ref.getGradeExec() > 150)
			throw Form::GradeTooLowException();
		if (ref.getGradeSign() < 1 || ref.getGradeExec() < 1)
			throw Form::GradeTooHighException();
		output << "Form " << ref.getName() << " has " << ref.getGradeSign()
			<< " grade for some bureaucrat to sign and " << std::endl
			<< ref.getGradeExec() << " grade to execute it." << std::endl;
	}
	catch (std::exception &e)
	{
		if (ref.getGradeExec() > 150 || ref.getGradeExec() < 1)
			std::cerr << "Form " << ref.getName()
				<< ": output aborted: execution " << e.what()
				<< std::endl;
		else if (ref.getGradeSign() > 150 || ref.getGradeSign() < 1)
			std::cerr << "Form " << ref.getName()
				<< ": output aborted: sign " << e.what()
				<< std::endl;
	}
	return (output);
}