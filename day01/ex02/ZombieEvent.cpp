#include "ZombieEvent.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

ZombieEvent::ZombieEvent()
{
	srand(time(NULL));
}

ZombieEvent::~ZombieEvent() 
{
	std::cout << std::endl 
		<<"Warlock has walked away ... for while." << std::endl;
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie	*born;

	born = new Zombie();
	if (!born)
	{
		return (NULL);
		std::cout << "error: memory can't be allocated"
			<< std::endl;
	}
	born->name = name;
	born->type = this->_type;
	return (born);
}

Zombie		*ZombieEvent::randomChump()
{
	int		some_zombie;
	Zombie	*randZombie;

	some_zombie = rand() % POOL_NAME_SIZE;
	randZombie = this->newZombie(ZombieEvent::_poolNames[some_zombie]);
	return (randZombie);
}

void 		ZombieEvent::zombieDead(Zombie *ptr)
{
	if (ptr)
		delete ptr;
}

std::string	ZombieEvent::_poolNames[POOL_NAME_SIZE] = {
	"Aaron", "Abel", "Armelle", "Achile", "Axel",
	"Basile", "Bastein", "Benoit", "Blaise", "Bruno",
	"Cesaire", "Cesar", "Claude", "Dominique", "Dorian",
	"Edgar", "Edmonde", "Elodie", "Emeric", "Emanuelle",
	"Estelle", "Eve", "Faustine", "Fabrice", "Ferdinand",
	"Fiacre", "Flavein", "Florentine", "Francette", "Francisque",
	"Francois-Maries", "Gabrielle", "Gaspard", "Gaston", "Giselle",
	"Gregory", "Helene", "Honore", "Isabel", "Jacquieline",
	"Jean-Jacques", "Kylian", "Laurentine", "Lazare", "Leopold",
	"Manuele", "Marc", "Marcelle", "Maximus", "Maurice"
};

