#ifndef BOZAR_HPP
# define BOZAR_HPP
# include "AWeapon.hpp"

class Bozar : public AWeapon 
{
	public:
		Bozar();
		Bozar(Bozar const &ref);
		virtual ~Bozar();

		Bozar			&operator=(Bozar const &ref);
		virtual void	attack() const;
};

#endif