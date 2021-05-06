#include <iostream>
#include <cstdlib>
#include <ctime>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	srand(time(NULL));
	NinjaTrap naruto = NinjaTrap("Naruto");
	ScavTrap medic = ScavTrap("Medic");
	FragTrap marine = FragTrap("Marine");
	NinjaTrap saske = NinjaTrap("Saske");
	FragTrap jim = FragTrap("Jim Reynor");
	ScavTrap terminator = ScavTrap("Terminator");

	naruto.ninjaShoebox(medic);	
	medic.takeDamage(120);
	naruto.ninjaShoebox(marine);
	marine.takeDamage(120);
	naruto.ninjaShoebox(saske);
	saske.takeDamage(120);
	naruto.ninjaShoebox(terminator);
	terminator.takeDamage(120);
	naruto.ninjaShoebox(jim);
	naruto.meleeAttack("Jim Reynor");
	jim.takeDamage(60);
	naruto.rangedAttack("Jim Reynor");
	jim.takeDamage(5);
	jim.vaulthunter_dot_exe("Naruto");
	naruto.takeDamage(40);
	jim.meleeAttack("Naruto");
	naruto.takeDamage(30);
	jim.rangedAttack("Naruto");
	naruto.takeDamage(20);
	return (0);
}