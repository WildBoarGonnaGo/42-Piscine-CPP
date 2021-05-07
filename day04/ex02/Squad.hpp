#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

typedef struct sListSquad
{
	ISpaceMarine				*unit;
	int							count;
	struct sListSquad			*next;
}								listSquad;

class Squad : 					public ISquad
{
	public:
		Squad();
		Squad(Squad const &ref);
		virtual ~Squad();
		Squad					&operator=(Squad const &ref);
		listSquad				*getSquad() const;
		virtual int				getCount() const;
		virtual	ISpaceMarine	*getUnit(int index) const;
		virtual int 			push(ISpaceMarine *newUnit);
	private:
		listSquad				*_listSquad;
};

#endif                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       