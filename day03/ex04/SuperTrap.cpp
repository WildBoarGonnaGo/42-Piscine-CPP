#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(std::string const name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAtckDmg = 60;
	this->_rangedAtckDmg = 20;
	this->_armorDmgReduc = 5;

	std::cout << "CL4P-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL) has enetered the SUPER-TP "
		<< "(SuperTrap) mode" << std::endl; 
	std::cout << "CL4P-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP " << this->_level << " LvL): \"I'm more than a Frag or a Ninja ... I'm XEL'NAGA!\""
		<< std::endl;
	return ;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUPER-TP " << this->_name << ": \"Oh no, why should leave the game? I'm not a cheater!!\""
		<< std::endl;
}

void	SuperTrap::rangedAttack(std::string const target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const target)
{
	NinjaTrap::meleeAttack(target);
}