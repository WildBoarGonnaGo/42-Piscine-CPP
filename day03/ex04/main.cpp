#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	srand(time(NULL));
	SuperTrap xelnaga = SuperTrap("Xel'Naga");
	ScavTrap joseph = ScavTrap("Joseph");
	FragTrap marine = FragTrap("Marine");
	NinjaTrap madara = NinjaTrap("Uchiha Madara");

	xelnaga.meleeAttack("Uchiha Madara");
	madara.takeDamage(60);
	xelnaga.ninjaShoebox(marine);
	xelnaga.ninjaShoebox(joseph);
	marine.vaulthunter_dot_exe("Xel'Naga");
	xelnaga.takeDamage(40);
	marine.vaulthunter_dot_exe("Xel'Naga");
	xelnaga.takeDamage(40);
	xelnaga.vaulthunter_dot_exe("Marine");
	marine.takeDamage(40);
	marine.beRepaired(100);
	marine.vaulthunter_dot_exe("Xel'Naga");
	xelnaga.takeDamage(40);
	xelnaga.rangedAttack("Marine");
	marine.takeDamage(20);
	marine.meleeAttack("Xel'Naga");
	xelnaga.takeDamage(30);
	return (0);
}