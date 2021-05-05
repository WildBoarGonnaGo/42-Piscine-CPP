#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>

FragTrap::FragTrap(std::string const name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_name = name;
	this->_meleeAtckDmg = 30;
	this->_rangedAtckDmg = 20;
	this->_armorDmgReduc = 5;

	std::cout << "CL4P-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL) has enetered the FR4G-TP "
		<< "(FragTrap) mode" << std::endl; 
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
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