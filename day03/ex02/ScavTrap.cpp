#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>

ScavTrap::ScavTrap(std::string const name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_name = name;
	this->_meleeAtckDmg = 20;
	this->_rangedAtckDmg = 15;
	this->_armorDmgReduc = 3;

	std::cout << "CL4P-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL) has enetered the SC4V-TP "
		<< "(ScavTrap) mode" << std::endl;
	std::cout << "It appeares to be a new NPC, or a player whatever,"
		<< std::endl;
	std::cout << "to introduce tou some interesting new challenges you" << std::endl;
	std::cout << "never asked for..." << std::endl;
}

void	ScavTrap::challengeNewcomer()
{
	std::string chlngAnnounce[6] = {
		"A devil walks these halls... only the mad or the desperate go in search of him. [Necromancer appears nearby]",
		"The smell of sulfur and gunpowder hangs in the air, the war machine is close. [Brigand Pounder crew assault your area]",
		"A nameless abomination, a testament to my failures - it must be destroyed! [Swine Prince roar blew through]",
		"The madman hides there, behind the pews, spouting his mindless drivel! [You hear scary Prophet mumbling]",
		"The wood is still poisoned. The way is still blocked. But less people will be eaten. [You hear the Hag Ogre laughter]",
		"The thing is more terrible than I can describe - an incoherent jumble of organ, sinew and bone. [Undescribable flesh swarn the floor]" 
	};
	int			num = rand() % 6;

	if (this->_energyPoints)
	{
		std::cout << "SC4V-TP " << this->_name << " (" << this->_hitPoints
			<< '/' << this->_maxHitPoints << " HP " << this->_energyPoints
			<< '/' << this->_maxEnergyPoints << " EP): \"Here's a new challenge for ya!"
			<< std::endl << chlngAnnounce[num] << '"' << std::endl;
		this->_energyPoints -= 25;
		return ;
	}
	std::cout << "SC4V-TP " << this->_name << " (" << this->_hitPoints
		<< '/' << this->_maxHitPoints << " HP " << this->_energyPoints
		<< '/' << this->_maxEnergyPoints << " EP): \"Oops! There will no challenge "
		<< "today! Uhm ... well ... Sayonara amigos!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::string quitServerQuotes[6] = {
		"I'll see you next time...",
		"ScavTrap doesn't play games, i got serious bysiness",
		"Huh, let's get this over with",
		"Game pretty sucks, there is no waifu, only gameplay",
		"Git gut, scavs, i'm your Giant Daddy!",
		"GG ScavTraps!"
	};
	int	num = rand() % 6;
	
	std::cout << "SC4V-TP " << this->_name << ": \""
		<< quitServerQuotes[num] << '"' << std::endl;
	return ; 
}