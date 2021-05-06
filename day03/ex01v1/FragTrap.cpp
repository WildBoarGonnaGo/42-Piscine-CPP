#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>

FragTrap::FragTrap(std::string const name) : _hitPoints(100),
	_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _name(name), _meleeAtckDmg(30), _rangedAtckDmg(20),
	_armorDmgReduc(5)
{
	std::cout << "FR4G-TP (LvL " << this->_level << ") "
	<< this->_name << " has joined the game"
		<< std::endl; 
}

void	FragTrap::meleeAttack(std::string const &target)
{

	if (!this->_hitPoints)
	{
		std::cout << "FR4G-TP " << this->_name << " can't attack, he is broken."
			<< std::endl;
		return ;
	}
	std::cout << "FR4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints
		<< " HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP) attacks " << target << " with his fists, dealing " << this->_meleeAtckDmg
		<< " points of damage!" << std::endl;
	std::cout << "FR4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints
		<< " HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP): \"Heyyah!\"" << std::endl;
	return ;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	if (!this->_hitPoints)
	{
		std::cout << "FR4G-TP " << this->_name << " can't attack, he is broken."
			<< std::endl;
		return ;
	}
	std::cout << "FR4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints
		<< " HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP) attacks " << target << " at range, causing " << this->_rangedAtckDmg
		<< " points of damage!" << std::endl;
	std::cout << "FR4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints << " HP "
		<< this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP): \"A whole lotta bullets in "
		<< "just one trigger pull\"" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int realDamage;

	if (!this->_hitPoints)
	{
		std::cout << "FR4G-TP " << this->_name << " is already broken."
			<< std::endl;
		return ;
	}
	realDamage = amount * (1 - 0.05 * this->_armorDmgReduc);
	realDamage = (this->_hitPoints - realDamage < 0)
		? this->_hitPoints : realDamage;
	std::cout << "FR4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP) was hit for " << realDamage 
		<< " hit points";
	this->_hitPoints -= realDamage;
	this->_armorDmgReduc -= (this->_armorDmgReduc != 0);
	if (this->_hitPoints)
	{
		std::cout << std::endl;
		std::cout << "FR4G-TP " << this->_name
			<< " (" << this->_hitPoints << '/' << this->_maxHitPoints
			<< " HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP): \"That looks like it hurts!\"." << std::endl;
	}
	else
	{
		std::cout << " and fall dead!" << std::endl;
		std::cout << "FR4G-TP " << this->_name << " (" <<
			this->_hitPoints << '/' << this->_maxHitPoints << " HP "
			<< this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP): \"I bet your mom could do better!\"."
			<< std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	unsigned int	realHeal;

	if (this->_hitPoints == this->_maxHitPoints)
	{
		std::cout << "FR4G-TP " << this->_name << " (" << this->_hitPoints
		<< '/' << this->_maxHitPoints << " HP " << this->_energyPoints
		<< '/' << this->_maxEnergyPoints << " EP) already has full HP"
		<< std::endl;
		return ;
	}
	realHeal = (this->_hitPoints + (int)amount > this->_maxHitPoints) ?
		this->_maxHitPoints - this->_hitPoints : amount;
	std::cout << "FR4G-TP " << this->_name << " (" << this->_hitPoints
		<< '/' << this->_maxHitPoints << " HP " << this->_energyPoints
		<< '/' << this->_maxEnergyPoints << " EP) was repared for "
		<< realHeal << " hit points." << std::endl;
	this->_hitPoints += realHeal;
	std::cout << "FR4G-TP " << this->_name << " (" << this->_hitPoints
		<< '/' << this->_maxHitPoints << " HP " << this->_energyPoints
		<< '/' << this->_maxEnergyPoints << " EP): \"Here we go again!\""
		<< std::endl; 
	return ;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (!this->_hitPoints)
	{
		std::cout << "FR4G-TP " << this->_name << " can't attack, he is broken."
			<< std::endl;
		return ;
	}
	std::string vaultHunterAtck[6] = {
		"Gun Wizad magic", "Laser Weapon", "Shock Weapon",
		"Acid Weapon", "Explosive Weapon", "Cryo Weapon"
	};

	std::string vaultHunterQuotes[6] = {
		"You can call me Gundalf!",
		"Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!",
		"I'm rubbing my wheel on the carpet!",
		"Wait, this isn't vegetable juice!",
		"Take that! And that... and that...",
		"Know what killed the baddies? The Ice age."
	};
	int			optionNum = rand() % 6;

	std::cout << "FR4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints
		<< " HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP) " << "is in VaultHunter.exe mode and now " << this->_name
		<< " uses " << vaultHunterAtck[optionNum] << " on "
		<< target;
	if (this->_energyPoints)
	{
		this->_energyPoints -= 25;
		std::cout << " dealing " << 40
			<< " hit points damage." << std::endl;
		std::cout << "FR4G-TP " << this->_name
			<< " (" << this->_hitPoints << '/' << this->_maxHitPoints << " HP "
			<< this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP): " << '"' << vaultHunterQuotes[optionNum] << '"'
			<< '.' << std::endl;
	}
	else
	{
		std::cout << ", but there is not enough energy for that." << std::endl;
		std::cout << "FR4G-TP " << this->_name << '('
			<< this->_hitPoints << '/' << this->_maxHitPoints << " HP "
			<< this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP): \"What the f... oh i mean NANI?!\"" << std::endl;
	}
	return ;
}

FragTrap::~FragTrap()
{
	std::string quitServerQuotes[6] = {
		"Bullets are dumb",
		"I'll get you next time!",
		"You know what, it'd be better to play Starcraft II",
		"Git Gut, scrub!",
		"This game sucks, i can't even pay to win!",
		"GG FragTraps!"
	};
	int	num = rand() % 6;
	
	std::cout << "FR4G-TP " << this->_name << ": \""
		<< quitServerQuotes[num] << '"' << std::endl;
	return ; 
}