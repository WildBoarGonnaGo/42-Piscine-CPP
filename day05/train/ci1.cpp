#include <iostream>

class Cat
{
	public:
		//class Leg is nested class
		class Leg
		{
			public:
				Leg() {
					std::cout << "Hello, it's a cat's leg!"
						<< std::endl;
				}
		};
};

class Dog
{
	public:
		class Leg
		{
			public:
				Leg() {
					std::cout << "Hello, it's a dog's leg!"
						<< std::endl;
				}
		};
};

int main(void)
{
	Cat			somecat;
	Cat::Leg	somecatsleg;
	Dog			somedog;
	Dog::Leg	somedogsleg;
	return (0);
}