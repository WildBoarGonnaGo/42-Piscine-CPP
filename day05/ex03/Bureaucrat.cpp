#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( ) :  _grade(150), _name("Noname") { }

class				Bureaucrat::GradeTooLowException : public std::exception
{
	public:
		virtual const char *what() const throw() {
			return ("too low grade");
		}
};

class				Bureaucrat::GradeTooHighException : public std::exception
{
	public:
		virtual const char *what() const throw() {
			return ("too high grade");
		}
};

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	try
	{
		this->_grade = grade;
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		std::cout << "Bureaucrat " << this->_name << " is hired. Huray!"
			<< std::endl; 
	}
	catch (std::exception &e)
	{
		std::cerr << this->_name << " has " << e.what()
			<< ". Let's fix it to 150" <<std::endl;
		this->_grade = 150;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref)
{
	*this = ref;
	return ;
}

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const &ref)
{
	this->_grade = ref.getGrade();
	return (*this);
}

std::string const	Bureaucrat::getName() const
{
	return (this->_name);
}

int					Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void				Bureaucrat::gInc()
{
	try
	{
		--this->_grade;
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch (std::exception &e)
	{
		std::cerr << this->_name << " has " << e.what()
			<< std::endl;
		this->_grade = 1;
	}
}

void				Bureaucrat::gDec()
{
	try
	{
		++this->_grade;
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cerr << this->_name << " has " << e.what()
			<< std::endl;
		this->_grade = 150;
	}
}

void				Bureaucrat::signForm(Form const &form)
{
	if (form.getSign())
		std::cout << this->_name << " signs " << form.getName()
			<< std::endl;
	else
	{
		std::cout << this->_name << " cannot sign " << form.getName()
			<< " because " << this->_name << " is not authorized for that"
			<< std::endl;
	}
}

void				Bureaucrat::executeForm(Form const &form)
{
	if (!form.execute(*this))
	{
		std::cerr << this->_name << " cannot execute Form" 
			<< form.getName() << ", because " << this->_name << std::endl
			<< "is not authorized or just failed execution!" << std::endl;
	}
	else
	{
		std::cout << this->_name << " executes Form "
			<< form.getName() << std::endl;
	}
}

Bureaucrat::~Bureaucrat( ) 
{
	std::cout << "Bureaucrat " << this->_name << " is fired."
		<< std::endl;
}

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &ref)
{
	output << ref.getName() << ", bureaucrat has grade " << ref.getGrade()
		<< std::endl;
	return (output);
}