#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>

ScavTrap::ScavTrap( )
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAtckDmg = 30;
	this->_rangedAtckDmg = 20;
	this->_armorDmgReduc = 5;
	this->_vaultHunterDmg = 25;
}

ScavTrap::ScavTrap(std::string const &name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAtckDmg = 30;
	this->_rangedAtckDmg = 20;
	this->_armorDmgReduc = 5;
	this->_vaultHunterDmg = 25;
	this->_name = name;

	std::string joinServerQuotes[6] = {
		"Rip and tear! Rip and tear! READ AND TEAR you tubes!!!",
    	"Battle ScavTrap operational",
    	"Nobody comes here without my authority, even ScavTrap Plissken",
    	"You probably don't think i'm a very nice guy, do ya?!",
    	"I need your clothes, guns, boots and your monocycle.",
    	"You've just threw your life down the toilet, girl."
	};
	int choose_quote = rand() % 6;

	std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name << " has entered the "
		<< "server." << std::endl;
	std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name << ": \""
		<< joinServerQuotes[choose_quote] << '"' << std::endl;
	return ;
}

ScavTrap::ScavTrap(FragTrap const &target)
{
	*this = target;
	return ;
}

void		ScavTrap::challengeNewcomer(ScavTrap &prey)
{
	std::string madChallenge[5] = {
		"Hey, how do you even know that you actually live",
		"You asked me what you have to do? You have to stop me",
		"I'm not done yet!",
		"I can't kill myself, only you!"
		"I'm losing my powers"
	};
	int num = rand() % 5;
	switch (num)
	{
		case 0:
			std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name
				<< " (" << this->_hitPoints << '/' << this->_maxHitPoints << " HP "
				<< this->_energyPoints << '/' << this->_maxEnergyPoints
				<< " EP) got enraged and start beating "
				<< prey.getFragTrapName() << " to death!" << std::endl;
			if (this->_energyPoints - 40 >= 0)
			{
				std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name
					<< " (" << this->_hitPoints << '/' << this->_maxHitPoints << " HP "
					<< this->_energyPoints << '/' << this->_maxEnergyPoints
					<< " EP): \"" << madChallenge[0] << '"' << std::endl;
				prey.takeDamage(this->_maxHitPoints);
				this->_energyPoints -= 40;
				return ;
			}
			std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name
				<< " (" << this->_hitPoints << '/' << this->_maxHitPoints << " HP "
				<< this->_energyPoints << '/' << this->_maxEnergyPoints
				<< " EP): \"" << madChallenge[0] << '"' << std::endl;
			
		case 1:
			std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name
				<< " (" << this->_hitPoints << '/' << this->_maxHitPoints << " HP "
				<< this->_energyPoints << '/' << this->_maxEnergyPoints
				<< " EP) got the strange mood and start healing "
				<< prey.getFragTrapName() << '!' << std::endl;
			std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name
				<< " (" << this->_hitPoints << '/' << this->_maxHitPoints << " HP "
				<< this->_energyPoints << '/' << this->_maxEnergyPoints
				<< " EP): \"" << madChallenge[1] << '"' << std::endl;
			prey.beRepaired(35);
		case 2:
			std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name
				<< " (" << this->_hitPoints << '/' << this->_maxHitPoints << " HP "
				<< this->_energyPoints << '/' << this->_maxEnergyPoints
				<< " EP) turned into techpriest and fully restored himself"
				<< prey.getFragTrapName() << '!' << std::endl;
	}
}

void	trgtScavAtck(ScavTrap &target)
{
	return ;
}