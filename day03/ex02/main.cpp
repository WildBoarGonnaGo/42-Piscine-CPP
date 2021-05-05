#include <iostream>
#include <cstdlib>
#include <ctime>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(time(NULL));
	FragTrap vulture = FragTrap("Burbridge the Vulture");
	FragTrap red = FragTrap("Redrick \"Red\" Schuhart");
	ScavTrap arthur = ScavTrap("Arthur Burbridge");

	arthur.challengeNewcomer();
	arthur.challengeNewcomer();
	arthur.takeDamage(45);
	vulture.takeDamage(75);
	red.takeDamage(75);
	arthur.beRepaired(20);
	red.beRepaired(60);
	vulture.beRepaired(75);
	red.vaulthunter_dot_exe("Arthur Burbridge");
	arthur.takeDamage(40);
	vulture.rangedAttack("Redrick \"Red\" Schuhart");
	red.takeDamage(20);
	arthur.rangedAttack("Redrick \"Red\" Schuhart");
	red.takeDamage(15);
	vulture.meleeAttack("Redrick \"Red\" Schuhart");
	red.takeDamage(30);
	arthur.meleeAttack("Redrick \"Red\" Schuhart");
	red.takeDamage(20);
	red.beRepaired(80);
	red.meleeAttack("Burbridge the Vulture");
	vulture.takeDamage(30);
	for (int i = 0.; i < 3; ++i)
	{
		red.vaulthunter_dot_exe("Burbridge the Vulture");
		vulture.takeDamage(40);
	}
	for (int i = 0; i < 3; ++i)
	{
		arthur.meleeAttack("Redrick \"Red\" Schuhart");
		red.takeDamage(20);
		red.meleeAttack("Arthur Burbridge");
		arthur.takeDamage(30);
	}
	return (0);
}