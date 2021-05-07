#ifndef BOZAR_HPP
# define BOZAR_HPP
# include "AWeapon.hpp"

class Bozar : public AWeapon 
{
	public:
		Bozar();
		virtual ~Bozar();

		virtual void	attack() const;
};

#endif