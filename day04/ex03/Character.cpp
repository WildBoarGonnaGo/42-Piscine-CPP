#include "Character.hpp"

Character::Character(std::string const name) : _name(name)
{
	for (int i = 0; i < 4; ++i)
		this->_inv[i] = 0;
}

Character::Character(Character const &ref)
{
	*this = ref;
	return ;
}

Character	&Character::operator=(Character const &ref)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inv[i])
			delete this->_inv[i];
		this->_inv[i] = ref.getInv(i);
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

AMateria			*Character::getInv(int idx) const
{
	return (this->_inv[idx]);
}

void				Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (!this->_inv[i])
		{
			this->_inv[i] = m;
			return ;
		}
	}
	return ;
}

void			Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->_inv[idx] = NULL;
	return ;
}

void			Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inv[idx])
		this->_inv[idx]->use(target);
	return ;
}

Character::~Character( )
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inv[i])
			delete this->_inv[i];
	}
}