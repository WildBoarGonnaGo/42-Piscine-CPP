#include "ZombieHorde.hpp"
#include <cstdlib>
#include <ctime>

int main(void)
{
	srand(time(NULL));
	ZombieHorde congoZombie(rand() % 20 + 1);
	congoZombie.announce();
	return (0);
}