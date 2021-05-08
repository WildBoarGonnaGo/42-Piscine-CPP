#ifndef FOOTMAN_HPP
# define FOOTMAN_HPP
# include "Victim.hpp"

 class Footman : public Victim
 {
	 public:
	 	Footman(void);
	 	Footman(Footman const &ref);
	 	Footman(std::string name);
	 	virtual ~Footman(void);

		Footman			&operator=(Footman const &ref);
		virtual void	getPolymorphed() const;
 };

std::ostream	&operator<<(std::ostream &output, Footman const &victim);

#endif