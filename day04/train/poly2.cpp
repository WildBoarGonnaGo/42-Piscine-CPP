#include <string>
#include <iostream>

class ACharacter
{
	/*In abstract class you can have attributes, but
	they can be only used by the derived class
	(well with a protected keyword)*/
	private:
		std::string		name;
	public:
	/*The line is some virtual method with '= 0' at the end
	what does it do. and what consequences of that? 
		1. Method can't be imlemented
		Similar to class implementation, method implementation
		consist of two parts: method declaration and the
		method body
		
		methodDeclaration {
			methodBody;
		}
		We defined it as equaling zero, which liogically means
		that there is no definition for this method
		2. We can't instanciate the class */
		virtual void	attack(std::string const &target) = 0;
		void			sayHello(std::string const &target);
};

/*Worrior class can be instanciated*/
class Warrior : public ACharacter
{
	public:
		virtual void	attack(std::string const &target);
};

void	ACharacter::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << '!' << std::endl;
}

void	Warrior::attack(std::string const &target)
{
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

/*
I prefix tells us that the class is interface
Interface class has abstract behaviors ONLY
Interfaces can't have any attributes, it's just a way
to make a contract with inheriting classes. That restriction
was made to define an interface. Interfaces can be used
with derived object
class	ICofeeMaker
{
	public:
		virtual	void	fillWaterTank(IWaterSource *src) = 0;
		virtual ICoffee	makeCofee(std::string const &type) = 0;
};*/

int main(void)
{
	ACharacter	*a = new Warrior();

	/*
	This would NOT be ok because ACharacter is abstract
	ACharacter	*b = new ACharacter();
	*/
	a->sayHello("students");
	a->attack("roger");
	delete a;
	return (0);
}