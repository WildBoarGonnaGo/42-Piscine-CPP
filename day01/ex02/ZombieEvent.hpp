#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

# define POOL_NAME_SIZE 50

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		Zombie				*newZombie(std::string name);
		void				setZombieType(std::string type);
		Zombie				*randomChump();
	private:
		std::string			_name;
		std::string			_type;
		static std::string	_poolNames[POOL_NAME_SIZE];
};

#endif 