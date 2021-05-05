#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string const name);
		~FragTrap();
		void		vaulthunter_dot_exe(std::string const &target);
};

#endif