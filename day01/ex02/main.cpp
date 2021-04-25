#include "ZombieEvent.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	srand(time(NULL));						
	int			num = rand() % 50 + 1;
	Zombie		*zombiePoolPtr[num];
	ZombieEvent	warlock;

	for (int i = 0; i < num; ++i)
		zombiePoolPtr[i] = NULL;
	std::cout << "A mighty warlock has appeares in these lands." << std::endl
		<< "No one will survive, cause he is in bad mood. Beware..."
		<< std::endl << std::endl;
	warlock.setZombieType("Warlock's slave");
	for (int i = 0; i < num; ++i)
	{
		zombiePoolPtr[i] = warlock.randomChump();
		zombiePoolPtr[i]->announce();
		warlock.zombieDead(zombiePoolPtr[i]);
	}
	return (0);
}