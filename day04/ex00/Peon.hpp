#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

 class Peon : public Victim
 {
	 public:
	 	Peon(void);
	 	Peon(Peon const &ref);
	 	Peon(std::string name);
	 	~Peon(void);

		virtual void	getPolymorphed() const;
 };

#endif