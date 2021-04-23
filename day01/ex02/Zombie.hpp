#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		std::string	_name;
		std::string	_type;
		void		announce(void);  
};

#endif
