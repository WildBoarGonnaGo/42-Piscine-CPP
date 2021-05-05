#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	srand(time(NULL));
	std::cout << "Is that yet another JoJo reference?" << std::endl
		<< std::endl;
	FragTrap dio = FragTrap("Dio");
	FragTrap jotaro = FragTrap("Jotaro");
	ScavTrap joseph = ScavTrap("Joseph");
	ScavTrap narrator = ScavTrap("Narrator");

	dio.meleeAttack("Jotaro");
	jotaro.takeDamage(30);
	jotaro.meleeAttack("Dio");
	dio.takeDamage(30);
	dio.rangedAttack("Jotaro");
	jotaro.takeDamage(30);
	jotaro.rangedAttack("Dio");
	dio.takeDamage(30);
	dio.beRepaired(70);
	jotaro.beRepaired(20);
	for (int i = 0; i < 3; ++i)
	{
		jotaro.vaulthunter_dot_exe("Dio");
		dio.takeDamage(40);
	}
	narrator.meleeAttack("Joseph");
	joseph.takeDamage(20);
	joseph.meleeAttack("Narrator");
	narrator.takeDamage(20);
	narrator.rangedAttack("Joseph");
	joseph.takeDamage(15);
	joseph.rangedAttack("Narrator");
	narrator.takeDamage(15);
	joseph.beRepaired(50);
	narrator.challengeNewcomer();
	narrator.challengeNewcomer();
	narrator.challengeNewcomer();
	std::cout << "Joseph's fate has been sealed..." << std::endl;
	joseph.takeDamage(150);
	return (0);
}