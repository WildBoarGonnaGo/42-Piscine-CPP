#include "Simple.class.hpp"

int main(void)
{
	/*This is the instance of a class Simple. When you
	initialize the instance of any class, it's also
	calling the constructor automatically. The interesting
	hint is ahead*/
	Simple instance;
	return (0);
	/*
	As you know, all local variables in the end program are
	to be destroyed. This concerns not only ordinary variables
	such as integers, floats, doubles etc, but also class
	instances. So what it's gonna happen? Destructor is called
	*/
}