#include "OrcGrunt.hpp"

OrcGrunt::OrcGrunt() : Victim("Broxigar")
{
	std::cout << "My life for the Horde!" << std::endl;
	return ;
}

OrcGrunt::OrcGrunt(std::string name) : Victim(name)
{
	std::cout << "My life for the Horde!" << std::endl;
	return ;
}

OrcGrunt::OrcGrunt(OrcGrunt const &ref)
{
	*this = ref;
	return ;
}

OrcGrunt::~OrcGrunt()
{
	std::cout << "Aaagh..." << std::endl;
}

void			OrcGrunt::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a wild boar! [Oink! Oink!]"
		<< std::endl;
}

std::ostream	&operator<<(std::ostream &output, OrcGrunt const &victim)
{
	output << "I'm " << victim.getName() << " and i like well served meat!" << std::endl;
	return (output);
}