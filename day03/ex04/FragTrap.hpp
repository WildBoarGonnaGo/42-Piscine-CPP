#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <string>

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const name);
		~FragTrap();
		void		vaulthunter_dot_exe(std::string const &target);
};

#endif