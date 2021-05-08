#ifndef CENTAUR_HPP
# define CENTAUR_HPP
# include "Enemy.hpp"

class Centaur : public Enemy
{
	public:
		Centaur();
		Centaur(Centaur const &ref);
		virtual ~Centaur();

		Centaur	&operator=(Centaur const &ref);
};

#endif