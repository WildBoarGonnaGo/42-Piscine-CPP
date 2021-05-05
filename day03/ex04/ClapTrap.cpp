#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>

ClapTrap::ClapTrap ( ) : _level(1)
{
	std::string poolGreetings[5] = {
		"Wow! You're not dead?",
		"Hey! Over here! I'm over heere!",
		"Wanna hear a new dubstep song I wrote? Wub! Wub [beatboxing/dubstep]",
		"I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!",
		"Still haven't found the Vault?"
	};
	int num = rand() % 5;

	std::cout << "CL4P-TP [Initializing name] (LvL "
		<< this->_level << ") joined the server"
		<< std::endl;
	std::cout << "CL4P-TP [Initializing name] (LvL "
		<< this->_level << "): \"" << poolGreetings[num]
		<< '"' << std::endl;
	return ;
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	if (!this->_hitPoints)
	{
		std::cout << "CL4P-TP " << this->_name << " can't attack, it's broken!"
			<< std::endl;
		return ;
	}
	std::cout << "CL4P-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL): attacks " << target
		<< " with his fists " << this->_rangedAtckDmg
		<< " points of damage!" << std::endl;
	std::cout << "CL4P-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level
		<< " LvL): \"You've just threw your live down the toilet, clap\""
		<< std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	if (!this->_hitPoints)
	{
		std::cout << "CL4P-TP " << this->_name << " can't attack, it's broken"
			<< std::endl;
		return ;
	}
	std::cout << "CL4P-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL): attacks " << target
		<< " with his fists " << this->_meleeAtckDmg
		<< " points of damage!" << std::endl;
	std::cout << "CL4P-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL): \"Take that! Heyya!\""
		<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int realDamage;

	if (!this->_hitPoints)
	{
		std::cout << "CL4P-TP " << this->_name << " is already broken"
			<< std::endl;
		return ;
	}
	realDamage = amount * (1 - 0.05 * this->_armorDmgReduc);
	realDamage = (this->_hitPoints - realDamage < 0)
		? this->_hitPoints : realDamage;
	std::cout << "CL4P-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL) was hit for " << realDamage 
		<< " hit points.";
	this->_hitPoints -= realDamage;
	this->_armorDmgReduc -= (this->_armorDmgReduc != 0);
	if (this->_hitPoints)
	{
		std::cout << std::endl;
		std::cout << "CL4P-TP " << this->_name << " ("
			<< this->_hitPoints << '/' << this->_maxHitPoints <<
			" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP " << this->_level << " LvL): \"That looks like it hurts!\""
			<< std::endl;
	}
	else
	{
		std::cout << " and fall dead!" << std::endl;
		std::cout << "CL4P-TP " << this->_name << " ("
			<< this->_hitPoints << '/' << this->_maxHitPoints <<
			" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP " << this->_level << " LvL): \"I bet your mom could do better!\""
			<< std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	realHeal;

	realHeal = (this->_hitPoints + (int)amount > this->_maxHitPoints) ?
		this->_maxHitPoints - this->_hitPoints : amount;
	std::cout << "CL4P-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL) was repared for "
		<< realHeal << " hit points." << std::endl;
	this->_hitPoints += realHeal;
	std::cout << "CL4P-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL): \"Here we go again!\""
		<< std::endl; 
	return ;
}

std::string	ClapTrap::getName()
{
	return (this->_name);
}

int			ClapTrap::getHitPoints()
{
	return (this->_hitPoints);
}

int			ClapTrap::getMaxHitPoints()
{
	return (this->_maxHitPoints);
}

int			ClapTrap::getEnergyPoints()
{
	return (this->_energyPoints);
}

int			ClapTrap::getMaxEnergyPoints()
{
	return (this->_maxEnergyPoints);
}

int			ClapTrap::getLevel()
{
	return (this->_level);
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP " << this->_name << " exit any possible mode and "
		<< "leaving the server." << std::endl;
	return ;
}
	