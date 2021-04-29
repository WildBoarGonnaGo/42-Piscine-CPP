#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>

class FragTrap
{
	public:
		FragTrap();
		FragTrap(FragTrap const &refFR4G_TP);
		FragTrap(std::string const name);
		~FragTrap();
		void				rangedAttack(std::string const &target);
		void				meleeAttack(std::string const &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
	private:
		int					_hitPoints;
		int					_maxHitPoints;
		int					_energyPoints;
		int					_level;
		std::string const	_name;
		int					_rangedAtckDmg;
		int					_armorDmgReduc;
};

#endif