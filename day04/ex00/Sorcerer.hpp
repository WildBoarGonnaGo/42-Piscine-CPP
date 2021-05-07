#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string const &name, std::string const &title);
		Sorcerer(Sorcerer const &ref);
		~Sorcerer(void);

		Sorcerer	&operator=(Sorcerer const &ref);
		std::string	getName() const;
		std::string	getTitle() const;
		void		polymorph(Victim const &trgt) const;
	private:
		Sorcerer(void);
		std::string	_name;
		std::string _title;
};

std::ostream	&operator<<(std::ostream &output, Sorcerer const &wizard);

#endif