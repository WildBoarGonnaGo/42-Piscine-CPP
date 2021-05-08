#ifndef ORCGRUNT_HPP
# define ORCGRUNT_HPP
# include "Victim.hpp"

 class OrcGrunt : public Victim
 {
	 public:
	 	OrcGrunt(void);
	 	OrcGrunt(OrcGrunt const &ref);
	 	OrcGrunt(std::string name);
	 	virtual ~OrcGrunt(void);

		OrcGrunt		&operator=(OrcGrunt const &ref);
		virtual void	getPolymorphed() const;
 };

std::ostream	&operator<<(std::ostream &output, OrcGrunt const &victim);

#endif