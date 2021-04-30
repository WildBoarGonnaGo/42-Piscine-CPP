#include "FragTrap.hpp"
#include <iostream>
#

FragTrap::FragTrap(std::string const name) : _hitPoints(100),
	_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _meleeAtckDmg(30), _rangedAtckDmg(20),
	_armorDmgReduc(5), _name(name) { }

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP "	<< this->_name << " attacks "
		<< target << " at range, causing " << this->_rangedAtckDmg 
		<< " points of damage. " <<  std::endl;
	std::cout << "FR4G-TP " << this->_name
		<< ": \"A whole lotta bullets in "
		<< "just one trigger pull\"" << std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP "	<< this->_name << " attacks "
		<< target << " at close range, causing " << this->_meleeAtckDmg 
		<< " points of damage" << std::endl;
	std::cout << "FR4G-TP " << this->_name
		<< ": \"Heyyah!\"" << std::endl;
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->_name
		<< " has taken a damage." << std::endl;
	this->_hitPoints -= this->_meleeAtckDmg;
	std::cout << "FR4G-TP " << this->_name 
		<< ": \"That looks like it hurts!\"." << std::endl;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	return ;
}