#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string const name_of_pony) : _pony_name(name_of_pony)
{
	std::cout << "Wow, Pony appears in sight! It's name is "
		<< this->_pony_name << "! That's incredible!!" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Oh, hell! Pony " << this->_pony_name
		<< " is gone! Well the that was a wonderfull time to spend..."
		<< std::endl;
}

void	Pony::ponyPlayBall(void)
{
	std::cout << this->_pony_name
		<< " rolled the ball over to your feet."
		<< " It's time to play a ball.\nIt seems, we'll have"
		<< " a great time to play together!" << std::endl;
}

void	Pony::ponyWalkRun(void)
{
	std::cout << this->_pony_name << " decided to walk "
		<< "over the fields.\nSuddenly, " << this->_pony_name
		<< " starts running. The blow of the air hits the face off "
		<< this->_pony_name << '.' << std::endl;
}

void	Pony::ponyJump(void)
{
	std::cout << this->_pony_name << " starts to jump. "
		<< "It really doesn't make sense, but looks funny. Wait, " 
		<< "I should make a photo!" << std::endl;
}

void	Pony::ponyFly(void)
{
	std::cout << "You sat over the bench, and start to look how "
		<< this->_pony_name << " is flying over the sky.\nThat's "
		<< "unbeliivable.\nOh wait, you're sitting on the "
		<< "chair watching yet another episode of \"My Little Pony\"."
		<< std::endl;
}

void	Pony::ponyFeedEat(void)
{
	std::cout << "Oh look! Your pony is hungry! You have nothing but "
		<< "several boxes of pizza.\nYou decided to feed piece of pizza"
		<< " to your pony.\n" << this->_pony_name << " looks satisfied!"
		<< std::endl;
}
