#include <iostream>
#include <string>

//Here's below sub-typing poluymorphism

class Character
{
	public:
		virtual void	sayHello(std::string const &target);
};

/*
What does virtual mean? It means that the linkage will be
dynamic and not static. Virtual helps to define what type
of object it actually is...
Virtual member function will be called a method.
Definition of method - is a member function which relosultion
will be dynamic, so it will be done during execution
*/
class Warrior : public Character
{
	public:
		virtual void	sayHello(std::string const &target);
};

class Cat
{
	//[...]
};

void	Character::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::sayHello(std::string const &target)
{
	std::cout << "F*** off " << target << ", I don't like you!" << std::endl;
}

int main(void)
{
	//This is OK, obviously, Warrior IS a Warrior
	Warrior		*a = new Warrior();
	//This is also OK because Warrior IS a Character
	Character	*b = new Warrior();
	//This would NOT be ok because Character is not a Warrior
	//(Although they are related, and W IS-A C, the reverse is untrue)
	//Warrior	*c = new Character();

	//This would NOT be ok either because Cat IS NOT a Warrior
	//(They are not even related)
	//Warrior	*d = new Cat();

	a->sayHello("students");
	b->sayHello("students");
	return (0);
}