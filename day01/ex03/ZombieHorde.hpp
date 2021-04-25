#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP
# include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);
		void				announce();
	private:
		int					_N;
		static std::string	_poolNames[20];
		static std::string	_poolTypes[4];
		Zombie				*_zombieHorde;
};

#endif