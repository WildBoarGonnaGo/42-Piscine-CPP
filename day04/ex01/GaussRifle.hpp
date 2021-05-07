#ifndef GAUSSRIFLE_HPP
# define GAUSSRIFLE_HPP
# include "AWeapon.hpp"

class GaussRifle : public AWeapon 
{
	public:
		GaussRifle();
		virtual ~GaussRifle();

		virtual void	attack() const;
};

#endif