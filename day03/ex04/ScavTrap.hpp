#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string const name);
		~ScavTrap();
		void		challengeNewcomer();
};

#endif