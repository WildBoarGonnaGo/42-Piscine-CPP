#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <stdexcept>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form("shrubbery creation", 145, 137), _target(target) { }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm
	const &ref)
{
	*this = ref;
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(
							ShrubberyCreationForm const
							&ref)
{
	this->_target = ref.getTarget();
	return (*this);
}

std::string				ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

bool					ShrubberyCreationForm::execute(
							Bureaucrat const &executor)
							const
{
	std::string	fileName = "";
	try
	{
		if (!this->getSign())
			throw ShrubberyCreationForm::Form::FormIsNotSigned();
		if (executor.getGrade() > this->getGradeExec() ||
			this->getGradeSign() > 150 || this->getGradeExec() > 150)
			throw ShrubberyCreationForm::Form::GradeTooLowException();
		if (this->getGradeSign() < 1 || this->getGradeExec() < 1)
			throw ShrubberyCreationForm::Form::GradeTooHighException();
		fileName.append(this->_target);
		fileName.append("_shrubbery");
		std::ofstream	ofs(fileName.c_str());
		if (!ofs.is_open())
			throw std::exception();
		std::string	tree[12] = {
		"         &&& &&  & &&          ",   
    	"     && &\\/&\\|& ()|/ @, &&     ",
      	"    &\\/(/&/&||/& /_/)_&/_&     ",
   		"   &() &\\/&|()|/&\\/ '%\" & ()  ",
  		"  &_\\_&&_\\ |& |&&/&__%_/_& &&  ",
		" &&   && & &| &| /& & % ()& /&&",
 		" ()&_---()&\\&\\|&&-&&--%---()~  ", 
     	"      &&     \\|||              ",
        "              |||              ",
        "              |||              ",
        "              |||              ",
       	"        , -=-~  .-^- _         "
		};
		for (int i = 0; i < 12; ++i)
			ofs << tree[i] << std::endl;
		ofs.close();
		return (true);
	}
	catch (std::exception &e)
	{
		if (this->getGradeSign() > 150 || this->getGradeSign() < 1)
			std::cerr << "execution of Form " << this->getName()
				<< " was aborted: Form sign " << e.what() << std::endl;
		else if (this->getGradeExec() > 150 || this->getGradeExec() < 1)
			std::cerr << "execution of Form " << this->getName()
				<< " was aborted: Form execution " << e.what() << std::endl;
		else if (!this->getSign()) 
			std::cerr << "execution of Form " << this->getName()
				<< " was aborted: " << e.what() << std::endl;
		else if (executor.getGrade() < this->getGradeExec())
			std::cerr << this->_target <<"_shrubbery file creation failed: "
				<< e.what() << std::endl;
		else
			std::cerr << "execution of Form " << this->getName()
				<< " was aborted: " << e.what() << std::endl;
		return (false); 
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm( ) { }