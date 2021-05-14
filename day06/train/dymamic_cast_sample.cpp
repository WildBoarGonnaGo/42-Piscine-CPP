/*
Dynamic cast take place at runtime and if
there is crucial mistakes it, you'll find
it out ONLY during the program

That means, that you should handle it in
code properly by yourself and compiler
won't do this for ya. It's also working
with POLYMORPHING instance, which means
that we gonna deal with subtyping polymorphism
(at least one of the functions in class must
be virtual)

*/

#include <iostream>
//#include <typeinfo>
#include <exception>

class Parent 
{ 
	public:
		virtual ~Parent(void) {} 
};
class Child1 : public Parent {};
class Child2 : public Parent {};

int main(void)
{
	/*
	Dynamic cast will be used only for downcast
	*/
	Child1	a;	//Reference instance
	Parent	*b = &a;	//Implicit upcast -> Ok

	//Implicit downcast, Let's make a try
	Child1	*c = dynamic_cast<Child1 *>(b);
	if (c == NULL)
		std::cout << "c: Dynamic conversion has FAILED!" << std::endl;
	else
		std::cout << "c: Dynamic conversion is OK!" << std::endl;
	
	//Implicit downcast, Let's make a try
	try
	{
		/*
		Here there will be an exception, since the
		reference can't be NULL
		*/
		Child2	&e = dynamic_cast<Child2 &>(*b);
		std::cout << "e: Dynamic conversion is OK!" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "e: Dynamic cast has FAILED: " << e.what()
			<< std::endl;
		return (0);
	}
	return (0);
}