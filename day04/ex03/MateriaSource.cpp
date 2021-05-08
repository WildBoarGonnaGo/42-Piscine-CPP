#include "MateriaSource.hpp"

MateriaSource::MateriaSource( )
{
	for (int i = 0; i < 4; ++i)
		this->_subj[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &ref)
{
	*this = ref;
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &ref)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_subj[i])
			delete this->_subj[i];
		this->_subj[i] = ref.getSubj(i);
	}
	return (*this);
}

AMateria		*MateriaSource::getSubj(int idx) const
{
	return (this->_subj[idx]);
}

void			MateriaSource::learnMateria(AMateria *sample)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!this->_subj[i])
		{
			this->_subj[i] = sample;
			return ;
		}
	}
	return ;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!this->_subj[i]->getType().compare(type))
			return (this->_subj[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource( )
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_subj[i])
			delete this->_subj[i];
	}
}