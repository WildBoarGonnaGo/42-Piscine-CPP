#include "FragTrap.hpp"
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

int main()
{
	std::string rage;
	std::cout << "This is Royal battle of FragTraps" << std::endl;
	std::cout << "Oil for the oil god! Metal for the metal throne\n" << std::endl;
	srand(time(NULL));
	FragTrap FragPlayers[4] = { 
		FragTrap("zer0"),
		FragTrap("Killy"),
		FragTrap("Alexi Laiho"),
		FragTrap("DoomBoy")
	};
	int	deadMatch = 3;
	int player[3];
	while (deadMatch)
	{
		while (1)
		{
			player[0] = rand() % 4;
			player[1] = rand() % 4;
			if (player[0] != player[1] && FragPlayers[player[0]].getFragTrapHP())
				break ;
		}
		FragPlayers[player[0]].trgtFragAtck(FragPlayers[player[1]]);
		player[2] = rand() % 7;
		if (player[2] == 6 && FragPlayers[player[1]].getFragTrapHP())
			FragPlayers[player[1]].beRepaired(rand() % 10 * 5 + 5);
		if (!FragPlayers[player[1]].getFragTrapLvl()
			&& !FragPlayers[player[1]].getFragTrapHP())
			--deadMatch;
	}
	std::cout << "Round is up. GG Guys\n" << std::endl;
	return (0);
}