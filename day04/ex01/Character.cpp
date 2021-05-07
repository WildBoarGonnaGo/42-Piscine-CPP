#include "Character.hpp"

Character::Character( ) { }

Character::Character(std::string const &name) : _name(name), _ap(40),
	_weapon(NULL) { }

Character::Character(Character const &ref)
{
	*this = ref;
	return ;
}

Character::~Character( ) { }

Character			&Character::operator=(Character const &ref)
{
	this->_weapon = ref.getWeapon();
	this->_ap = ref.getAP();
	return (*this);
}

void				Character::RecoverAP()
{
	int	realRecover;

	realRecover = (this->_ap + 10 > 40) ? 40 - this->_ap
		: 10;
	this->_ap += realRecover;
	std::cout << this->_name << " have recovered " << realRecover
		<< " and now have " << this->_ap << " AP" << std::endl;
}

void				Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
	return ;
}

void				Character::attack(Enemy *enemy)
{
	int realDamage;

	if (this->_weapon && this->_ap > this->_weapon->getAPCost()
		&& enemy)
	{
		this->_ap -= this->_weapon->getAPCost();
		realDamage = (this->_weapon->getDamage() > enemy->getHP())
			? enemy->getHP() : this->_weapon->getDamage();
		enemy->takeDamage(this->_weapon->getDamage());
		std::cout << this->_name << " attacks " << enemy->getType()
			<< " with " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		if (!enemy->getHP())
			delete enemy;
	}
	else
		std::cout << "You're either unarmed or don't have enough AP"
			<< std::endl;
}

AWeapon				*Character::getWeapon() const
{
	return (this->_weapon);
}

int					Character::getAP() const
{
	return (this->_ap);
}

std::string const	Character::getName() const
{
	return (this->_name);
}

std::ostream		&operator<<(std::ostream &output, Character const &ref)
{
	if (!ref.getWeapon())
	{
		output << ref.getName() << " has " << ref.getAP()
			<< " AP and is unarmed" << std::endl;
		return (output);
	}
	output << ref.getName() << " has " << ref.getAP()
		<< " AP and wields " << ref.getWeapon()->getName()
		<< std::endl;
	return (output);
}