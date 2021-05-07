#include "OrcGrunt.hpp"
#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Footman.hpp"

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	OrcGrunt drektar("Drek'tar");
	Footman arthur("Arthur");

	std::cout << robert << jim << joe << drektar
		<< arthur;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(drektar);
	robert.polymorph(arthur);
	return (0);
}