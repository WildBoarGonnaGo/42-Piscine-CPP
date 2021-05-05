#include "NinjaTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

NinjaTrap::NinjaTrap()
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAtckDmg = 60;
	this->_rangedAtckDmg = 5;
	this->_armorDmgReduc = 0;
	
	std::cout << "CL4P-TP [Initializing name] (LvL "
		<< this->_level << ") partially modified with NINJ4-TP options"
		<< std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string const name) 
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = name;
	this->_meleeAtckDmg = 60;
	this->_rangedAtckDmg = 5;
	this->_armorDmgReduc = 0;

	std::cout << "CL4P-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL) has enetered the NINJ4-TP "
		<< "(NinjaTrap) mode" << std::endl; 
	std::cout << "CL4P-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL): \"I'm death from the shadows!\""
		<< std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &prey)
{
	std::cout << "NINJ4-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL) attack stupid FR4G-TP" << std::endl;
	std::cout << prey.getName() << " (" << prey.getHitPoints() << '/'
		<< prey.getMaxHitPoints() << " HP " << prey.getEnergyPoints() << '/'
		<< prey.getMaxEnergyPoints() << " EP " << prey.getLevel() << " LvL) from behind, ";
	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::cout <<  "dealing " << 120 << " hit points"
			<< std::endl;
		std::cout << "NINJ4-TP " << this->_name << " ("
			<< this->_hitPoints << '/' << this->_maxHitPoints <<
			" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP " << this->_level << " LvL): \"You mere armor and ranged weapon " 
			<< "won't save you from ninja skills\"" << std::endl;
		prey.takeDamage(120);
	}
	else
	{
		std::cout <<  "but there is not enough energy for that"
			<< std::endl;
		std::cout << "NINJ4-TP " << this->_name << " ("
			<< this->_hitPoints << '/' << this->_maxHitPoints <<
			" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP " << this->_level << " LvL): \"Ugh my chakra is over, i " 
			<< "need some ramen.\"" << std::endl;
	}
}

void	NinjaTrap::ninjaShoebox(ScavTrap &prey)
{
	std::cout << "NINJ4-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL) attack a extremly weak SC4V-TP" << std::endl;
	std::cout << prey.getName() << " (" << prey.getHitPoints() << '/'
		<< prey.getMaxHitPoints() << " HP " << prey.getEnergyPoints() << '/'
		<< prey.getMaxEnergyPoints() << " EP " << prey.getLevel()
		<< " LvL) from behind, ";
	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::cout <<  "dealing " << 120 << " hit points"
			<< std::endl;
		std::cout << "NINJ4-TP " << this->_name << " ("
			<< this->_hitPoints << '/' << this->_maxHitPoints <<
			" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP " << this->_level << " LvL): \"What's the point of your existing?"
			<< std::endl
			<< "Your challenges are just stupid references to Darkest Dungeon\""
			<< std::endl;
		prey.takeDamage(120);
	}
	else
	{
		std::cout <<  "but there is not enough energy for that"
			<< std::endl;
		std::cout << "NINJ4-TP " << this->_name << " ("
			<< this->_hitPoints << '/' << this->_maxHitPoints <<
			" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP " << this->_level << " LvL): \"Ugh my chakra is over, i " 
			<< "need some ramen? Why are you laughing at me?\"" << std::endl;
	}
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &prey)
{
	std::cout << "NINJ4-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL) attack a unhonorable shinobi NINJ4-TP"
		<< std::endl;
	std::cout << prey.getName() << " (" << prey.getHitPoints() << '/'
		<< prey.getMaxHitPoints() << " HP " << prey.getEnergyPoints()
		<< '/' << prey.getMaxEnergyPoints()
		<< " EP " << prey.getLevel() << " LvL) calling him for duel, ";
	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::cout <<  "dealing " << 60 << " hit points"
			<< std::endl;
		std::cout << "NINJ4-TP " << this->_name << " ("
			<< this->_hitPoints << '/' << this->_maxHitPoints <<
			" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP " << this->_level << " LvL): \"Omae wa mou shindeiru..."
			<< std::endl;
		prey.takeDamage(60);
	}
	else
	{
		std::cout <<  "but there is not enough energy for that"
			<< std::endl;
		std::cout << "NINJ4-TP " << this->_name << " ("
			<< this->_hitPoints << '/' << this->_maxHitPoints <<
			" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP " << this->_level << " LvL): \"Nani?!\"" << std::endl;
	}
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NINJ4-TP " << this->_name << ": \"Return to shadows...\""
		<< std::endl;
}