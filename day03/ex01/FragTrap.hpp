#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>

typedef unsigned int	uint32;

class FragTrap
{
	public:
		FragTrap( );
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &target);
		~FragTrap();
		void				rangedAttack(std::string const &target);
		void				meleeAttack(std::string const &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		void				vaulthunter_dot_exe(std::string const &target);
		void				trgtFragAtck(FragTrap &target);
		int					getFragTrapLvl();
		int					getFragTrapHP();
		void				setFragTrapName(std::string const &name);
		std::string			getFragTrapName();
	protected:
		std::string 		trapPrefix(FragTrap const &target);
		int					_hitPoints;
		int					_maxHitPoints;
		int					_energyPoints;
		int					_maxEnergyPoints;
		int					_level;
		std::string			_name;
		int					_meleeAtckDmg;
		int					_rangedAtckDmg;
		int					_vaultHunterDmg;
		int					_armorDmgReduc;
};

#endif