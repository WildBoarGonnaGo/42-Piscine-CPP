#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <stdexcept>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	AForm("shrubbery creation", 145, 137), _target(target) { }

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

void					ShrubberyCreationForm::execute(
							Bureaucrat const &executor)
{
	std::string	fileName = "";
	try
	{
		fileName.append(this->_target);
		fileName.append("_shrubbery");
		std::ofstream	ofs(fileName);
		if (!ofs.is_open())
			throw std::exception();
		std::string	tree[12] = {
		"         &&& &&  & &&          ",   
    	"     && &\/&\|& ()|/ @, &&     ",
      	"    &\/(/&/&||/& /_/)_&/_&     ",
   		"   &() &\/&|()|/&\/ '%\" & ()  ",
  		"  &_\_&&_\ |& |&&/&__%_/_& &&  ",
		" &&   && & &| &| /& & % ()& /&&",
 		" ()&_---()&\&\|&&-&&--%---()~  ", 
     	"      &&     \|||              ",
        "              |||              ",
        "              |||              ",
        "              |||              ",
       	"        , -=-~  .-^- _         "
		};
		for (int i = 0; i < 12; ++i)
			ofs << tree[i] << std::endl;
		ofs.close();
		if (ofs.failbit)
			throw std::exception();
	}
	catch (std::exception &e)
	{
		std::cerr << "shrubbery creation error: "
			<< e.what() << std::endl;
	}
}