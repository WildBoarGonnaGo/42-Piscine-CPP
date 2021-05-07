#include "Squad.hpp"
#include <cstdlib>

Squad::Squad( ) : _listSquad(NULL) { }

Squad::Squad(Squad const &ref)
{
	*this = ref;
	return ;
}

Squad	&Squad::operator=(Squad const &ref)
{
	listSquad	*roll;
	listSquad	*del;

	roll = this->_listSquad;
	while (roll)
	{
		del = roll;
		delete roll->unit;
		roll = roll->next;
		delete del;

	}
	this->_listSquad = ref.getSquad();
	return (*this);
}

int				Squad::getCount() const
{
	listSquad	*roll;

	roll = this->_listSquad;
	while(roll->next)
		roll = roll->next;
	return (roll->count + 1);
}

listSquad	*Squad::getSquad() const
{
	return (this->_listSquad);
}

ISpaceMarine	*Squad::getUnit(int index) const
{
	listSquad	*roll;

	roll = this->_listSquad;
	if (index < 0)
		return (NULL);
	while (roll)
	{
		if (roll->count == index)
			return (roll->unit);
		roll = roll->next;
	}
	return (NULL);
}

int				Squad::push(ISpaceMarine *newUnit)
{
	listSquad	*head;
	listSquad	*pushback;
	int			state = 0;

	if (!this->_listSquad && newUnit)
	{
		this->_listSquad = new listSquad;
		this->_listSquad->count = 0;
		this->_listSquad->next = NULL;
		this->_listSquad->unit = newUnit;
		return (this->_listSquad->count + 1);
	}
	head = this->_listSquad;
	while (head->next)
	{
		if (head->unit == newUnit)
			state = 1;
		head = head->next;
	}
	if (state)
		return (head->count + 1);
	pushback = new listSquad;
	pushback->next = NULL;
	pushback->count = head->count + 1;
	pushback->unit = newUnit;
	head->next = pushback;
	return (pushback->count + 1);
}

Squad::~Squad()
{
	listSquad	*roll;
	listSquad	*del;

	roll = this->_listSquad;
	while (roll)
	{
		del = roll;
		delete roll->unit;
		roll = roll->next;
		delete del;
	}
}