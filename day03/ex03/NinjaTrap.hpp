#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string const name);
		~NinjaTrap();
		void	ninjaShoebox(FragTrap &prey);
		void	ninjaShoebox(ScavTrap &prey);
		void	ninjaShoebox(NinjaTrap &prey);
};

# endif 