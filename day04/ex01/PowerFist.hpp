#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon 
{
	public:
		PowerFist();
		PowerFist(PowerFist const &ref);
		virtual ~PowerFist();

		PowerFist		&operator=(PowerFist const &ref);
		virtual void	attack() const;
};

#endif