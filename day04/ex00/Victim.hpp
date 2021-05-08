#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>
# include <iostream>

class Victim
{
	public:
		Victim(void);
		Victim(std::string name);
		Victim(Victim const &ref);
		virtual ~Victim(void);

		Victim			&operator=(Victim const &ref);
		std::string		getName() const;
		virtual void	getPolymorphed() const;
		void			setName(std::string newName);
	private:
		std::string	_name;
};

std::ostream	&operator<<(std::ostream &output, Victim const &victim);

#endif