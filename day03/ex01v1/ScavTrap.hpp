#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>

class ScavTrap
{
	private:
		int					_hitPoints;
		int					_maxHitPoints;
		int					_energyPoints;
		int					_maxEnergyPoints;
		int					_level;
		std::string	const	_name;
		int					_meleeAtckDmg;
		int					_rangedAtckDmg;
		int					_armorDmgReduc;
	public:
		ScavTrap(std::string const name);
		~ScavTrap();
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer();
};

#endif