#ifndef GAUSSRIFLE_HPP
# define GAUSSRIFLE_HPP
# include "AWeapon.hpp"

class GaussRifle : public AWeapon 
{
	public:
		GaussRifle();
		GaussRifle(GaussRifle const &ref);
		virtual ~GaussRifle();

		GaussRifle		&operator=(GaussRifle const &ref);
		virtual void	attack() const;
};

#endif