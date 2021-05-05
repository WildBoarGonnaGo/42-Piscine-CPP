#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "FragTrap.hpp"

class ScavTrap : public FragTrap
{
	public:
		ScavTrap( );
		ScavTrap(std::string const &name);
		ScavTrap(FragTrap const &target);
		~ScavTrap();
		void		trgtScavAtck(ScavTrap &target);
		void		challengeNewcomer(ScavTrap &prey);
};

#endif