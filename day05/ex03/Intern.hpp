#ifndef INTERN_HPP
# define INTERN_HPP
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &ref);
		~Intern();

		Intern					&operator=(Intern const &ref);
		Form 					*newShrubbery(std::string const &target);
		Form 					*newPresidential(std::string const &target);
		Form					*newRobotomy(std::string const &target);
		Form					*makeForm(std::string const &name,
									std::string const &target);
		class					NoFormPatternException : public std::exception
		{
			virtual const char *what() const throw() {
				return ("There is no such Form pattern");
			}
		};
		typedef Form			*(Intern::*func)(std::string
									const &);
		typedef struct			sIntern
		{
			Intern::func		ptr;
			std::string	const	&name;
		}	tIntern;
};

#endif