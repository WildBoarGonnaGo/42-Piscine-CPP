#include "AWeapon.hpp"

AWeapon::AWeapon( ) { }

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
	: _name(name), _apcost(apcost), _damage(damage) { }

AWeapon::AWeapon(AWeapon const &obj)
{
	*this = obj;
	return ;
}

AWeapon::~AWeapon( ) { }

AWeapon				&AWeapon::operator=(AWeapon const &ref)
{
	this->_apcost = ref.getAPCost();
	this->_damage = ref.getDamage();
	return (*this);
}

std::string	const	AWeapon::getName() const
{
	return (this->_name);
}

int					AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int					AWeapon::getDamage() const
{
	return (this->_damage);
}