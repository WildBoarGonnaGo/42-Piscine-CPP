#include "ZombieHorde.hpp"
#include <iostream>
#include <cstdlib>

ZombieHorde::ZombieHorde(int N) : _N(N)
{
	srand(time(NULL));
	this->_zombieHorde = NULL;
	this->_zombieHorde = new Zombie[this->_N];
	for (int i = 0; i < this->_N; ++i)
	{
		this->_zombieHorde[i].name = this->_poolNames[rand() % 20];
		this->_zombieHorde[i].type = this->_poolTypes[rand() % 4];
	}
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->_N; ++i)
		this->_zombieHorde[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	if (this->_zombieHorde)
		delete [] this->_zombieHorde;
}

std::string	ZombieHorde::_poolNames[20] = {
	"Bompaka", "Bote", "Fuani", "Fumu", "Kakengo",
	"Kalunga",  "Kasese", "Kasese", "Kembo", "Kengani",
	"Kimpa-Vita", "Kokolo", "Lufima", "Lukinda", "Lumingu",
	"Lutete", "Luyindama", "Luyindu", "Makana", "Makiadi"
};

std::string ZombieHorde::_poolTypes[4] = {
	"Aba", "Bambesa", "Dibaya", "Inongo"
};