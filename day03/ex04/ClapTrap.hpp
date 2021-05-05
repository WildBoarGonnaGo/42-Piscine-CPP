#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>

class ClapTrap
{
	protected:
		int					_hitPoints;
		int					_maxHitPoints;
		int					_energyPoints;
		int					_maxEnergyPoints;
		int					_level;
		std::string			_name;
		int					_meleeAtckDmg;
		int					_rangedAtckDmg;
		int					_armorDmgReduc;
	public:
		ClapTrap();
		~ClapTrap();
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName();
		int 		getHitPoints();
		int			getMaxHitPoints();
		int			getEnergyPoints();
		int			getMaxEnergyPoints();
		int			getLevel();
};

#endif