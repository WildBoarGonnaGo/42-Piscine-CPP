#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <typeinfo>
#include <cctype>

FragTrap::FragTrap( ) : _hitPoints(100),
	_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _meleeAtckDmg(30), _rangedAtckDmg(20),
	_vaultHunterDmg(40), _armorDmgReduc(5) { }

FragTrap::FragTrap(std::string const &name) : _hitPoints(100),
	_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _name(name), _meleeAtckDmg(30), _rangedAtckDmg(20),
	_vaultHunterDmg(40), _armorDmgReduc(5) 
{
	std::string joinServerQuotes[6] = {
		"Hey everybody! Check out my package!",
    	"Let's get this party started!",
    	"Glitching weirdness is a term of endearment, right?",
    	"Recompiling my combat code!",
    	"This time it'll be awesome, I promise!",
    	"Look out everybody! Things are about to get awesome!"
	};
	int choose_quote = rand() % 6;

	std::cout << this->trapPrefix(*this) <<"4G-TP "	<< this->_name
		<< " has entered the server." << std::endl;
	std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name << ": \""
		<< joinServerQuotes[choose_quote] << '"' << std::endl;
	return ;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	
	std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP) attacks " << target << " at range, causing "
		<< this->_rangedAtckDmg << " points of damage. " <<  std::endl;
	std::cout << this->trapPrefix(*this) <<"4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints << " HP "
		<< this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP): \"A whole lotta bullets in "
		<< "just one trigger pull\"" << std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP) attacks " << target << " at close range, causing "
		<< this->_meleeAtckDmg << " points of damage" << std::endl;
	std::cout << this->trapPrefix(*this) <<"4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints
		<< " HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP): \"Heyyah!\"" << std::endl;
	return ;
}

void	FragTrap::takeDamage(uint32 amount)
{
	int realDamage;

	realDamage = amount * (1 - 0.05 * this->_armorDmgReduc);
	realDamage = (this->_hitPoints - realDamage < 0)
		? this->_hitPoints : realDamage;
	std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints <<
		" HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP) was hit for " << realDamage 
		<< " hit points";
	this->_hitPoints -= realDamage;
	this->_armorDmgReduc -= (this->_armorDmgReduc != 0);
	if (this->_hitPoints)
	{
		std::cout << std::endl;
		std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name
			<< " (" << this->_hitPoints << '/' << this->_maxHitPoints
			<< " HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP): \"That looks like it hurts!\"." << std::endl;
	}
	else
	{
		std::cout << " and fall dead!" << std::endl;
		std::cout << this->trapPrefix(*this) << "4G-TP (" << this->_hitPoints
			<< '/' << this->_maxHitPoints << " HP " << this->_energyPoints <<
			'/' << this->_maxEnergyPoints << " EP): \"I bet your mom could do better!\"."
			<< std::endl;
	}
}

void	FragTrap::beRepaired(uint32 amount)
{
	unsigned int	realHeal;

	realHeal = (this->_hitPoints + (int)amount > this->_maxHitPoints) ?
		this->_maxHitPoints - this->_hitPoints : amount;
	std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name
		<< " was repared for " << realHeal << " hit points.";
	std::cout << this->trapPrefix(*this) << "4G-TP (" << this->_hitPoints
		<< '/' << this->_maxHitPoints << " HP " << this->_energyPoints
		<< '/' << this->_maxEnergyPoints << "EP): \"Here we go again!\""
		<< std::endl; 
	return ;
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

	std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name << " ("
		<< this->_hitPoints << '/' << this->_maxHitPoints
		<< " HP " << this->_energyPoints << '/' << this->_maxEnergyPoints
		<< " EP) " << "is in VaultHunter.exe mode and now " << this->_name
		<< " uses " << vaultHunterAtck[optionNum] << " on "
		<< target;
	if (this->_energyPoints)
	{
		this->_energyPoints -= 25;
		std::cout << " dealing " << this->_vaultHunterDmg
			<< " hit points damage." << std::endl;
		std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name
			<< " (" << this->_hitPoints << '/' << this->_maxHitPoints << " HP "
			<< this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP): " << '"' << vaultHunterQuotes[optionNum] << '"'
			<< '.' << std::endl;
	}
	else
	{
		std::cout << ", but there is not enough energy for that." << std::endl;
		std::cout << this->trapPrefix(*this) <<"4G-TP " << this->_name << '('
			<< this->_hitPoints << '/' << this->_maxHitPoints << " HP "
			<< this->_energyPoints << '/' << this->_maxEnergyPoints
			<< " EP): \"What the f... oh i mean NANI?!\"" << std::endl;
	}
	return ;
}

void	FragTrap::trgtFragAtck(FragTrap &target)
{
	int num = rand() % 3;
	int energy;

	target._level = 1;
	if (!target._hitPoints)
		return ;
	switch (num)
	{
		case 0:
			this->meleeAttack(target._name);
			target.takeDamage(this->_meleeAtckDmg);
		case 1:
			this->rangedAttack(target._name);
			target.takeDamage(this->_rangedAtckDmg);
		case 2:
			energy = (this->_energyPoints > 0);
			this->vaulthunter_dot_exe(target._name);
			if (energy)
				target.takeDamage(this->_vaultHunterDmg);
	}
	target._level = (target._hitPoints > 0);
	return ;
}

int		FragTrap::getFragTrapLvl()
{
	return (this->_level);
}

int		FragTrap::getFragTrapHP()
{
	return (this->_hitPoints);
}

std::string	FragTrap::trapPrefix(FragTrap const &target)
{
	std::string res;
	int			alpha_pos;

	alpha_pos = 0;
	res = typeid(target).name();
	for (int i = 0; i < (int)res.size(); ++i)
	{
		if (isalpha(res[i]))
			break ;
		++alpha_pos;
	}
	res = res.substr(alpha_pos, res.size() - alpha_pos);
	res.resize(2);
	res[1] = toupper(res[1]);
	return (res);
}

void	FragTrap::setFragTrapName(std::string const &name)
{
	this->_name = name;
}

std::string	FragTrap::getFragTrapName()
{
	return (this->_name);
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
	
	std::cout << this->trapPrefix(*this) << "4G-TP " << this->_name << ": \""
		<< quitServerQuotes[num] << '"' << std::endl;
	return ; 
}