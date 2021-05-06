#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>

ScavTrap::ScavTrap(std::string const name) : _hitPoints(100),
	_maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
	_level(1), _name(name), _meleeAtckDmg(20), _rangedAtckDmg(15),
	_armorDmgReduc(3)
{
	std::cout << "SC4V-TP (LvL " << this->_level << ") "
		<< this->_name << " appeared as a new NPC, or a player whatever,"
		<< std::endl;
	std::cout << "to introduce tou some interesting new challenges you" << std::endl;
	std::cout << "asked for..." << std::endl;
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	if (!this->_hitPoints)
	{
		std::cout << "SC4V-TP " << this->_name << " can't attack, he is broken."
			<< std::endl;
		return ;
	}
	std::cout << "SC4V-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints
		<< " HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP) attacks " << target << " at range, causing " << this->_rangedAtckDmg
		<< " points of damage!" << std::endl;
	std::cout << "SC4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints
		<< " HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP): \"You've just threw your live down the toilet, scav\"" << std::endl;
	return ;
}


void	ScavTrap::meleeAttack(std::string const &target)
{
	if (!this->_hitPoints)
	{
		std::cout << "SC4V-TP " << this->_name << " can't attack, he is broken."
			<< std::endl;
		return ;
	}
	std::cout << "SC4V-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints
		<< " HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP) attacks " << target << " with his fists, dealing " << this->_meleeAtckDmg
		<< " points of damage!" << std::endl;
	std::cout << "SC4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints << " HP "
		<< this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP): \"I don't know why the hell you're here," << std::endl
		<< "but i can asure you, you'll not walk away far\"" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int realDamage;

	if (!this->_hitPoints)
	{
		std::cout << "SC4V-TP " << this->_name << " is already broken."
			<< std::endl;
		return ;
	}
	realDamage = amount * (1 - 0.05 * this->_armorDmgReduc);
	realDamage = (this->_hitPoints - realDamage < 0)
		? this->_hitPoints : realDamage;
	std::cout << "SC4V-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP) was hit for " << realDamage 
		<< " hit points";
	this->_hitPoints -= realDamage;
	this->_armorDmgReduc -= (this->_armorDmgReduc != 0);
	if (this->_hitPoints)
	{
		std::cout << std::endl;
		std::cout << "SC4V-TP " << this->_name
			<< " (" << this->_hitPoints << '/' << this->_maxHitPoints
			<< " HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP): \"Ouch! That wasn't very nice...\"." << std::endl;
	}
	else
	{
		std::cout << " and fall dead!" << std::endl;
		std::cout << "SC4V-TP " << this->_name << " (" <<
			this->_hitPoints << '/' << this->_maxHitPoints << " HP "
			<< this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP): \"You've broken my heart, scuvbag!\"."
			<< std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int	realHeal;

	if (this->_hitPoints == this->_maxHitPoints)
	{
		std::cout << "SC4V-TP " << this->_name << " already has a full HP!"
			<< std::endl;
		return ;
	}
	realHeal = (this->_hitPoints + (int)amount > this->_maxHitPoints) ?
		this->_maxHitPoints - this->_hitPoints : amount;
	std::cout << "SC4V-TP " << this->_name << " (" << this->_hitPoints
		<< '/' << this->_maxHitPoints << " HP " << this->_energyPoints
		<< '/' << this->_maxEnergyPoints << " EP) was repared for "
		<< realHeal << " hit points." << std::endl;
	this->_hitPoints += realHeal;
	std::cout << "SC4V-TP " << this->_name << " (" << this->_hitPoints
		<< '/' << this->_maxHitPoints << " HP " << this->_energyPoints
		<< '/' << this->_maxEnergyPoints << " EP): \"Yeah, the apple oil!\""
		<< std::endl;
	std::cout << "Nice beverage for the whole family..." << std::endl; 
	return ;
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