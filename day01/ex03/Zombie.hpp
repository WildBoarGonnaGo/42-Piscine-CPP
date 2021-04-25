#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		std::string			type;
		std::string			name;
		void				announce(void);
};

#endif
