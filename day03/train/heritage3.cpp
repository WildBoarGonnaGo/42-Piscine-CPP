#include <string>

class Quadrupped //Can access name, run() and legs
{
	private:
		std::string	name; //Only accessible from an Quadruped object
	protected:
		std::string	legs[4]; //accessible from a quadrupped or a derived form
	public:
		void		run(); //Accessible from wherever
};

class Dog : public Quadrupped //Can access run and legs
{

};

int main() //Can only access run
{
	return (0);
}