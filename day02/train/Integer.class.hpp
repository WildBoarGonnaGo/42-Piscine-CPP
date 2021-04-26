#ifndef INTEGER_CLASS_HPP
# define INTEGER_CLASS_HPP

#include <iostream>

/*
Let's take a look at some simple
arythmetic operators:

There is a 'infix' notation below

1 + 1

Infix means that there is a operator
between two operands. There are
also two notations to take a look:
'Prefix'(+ 1 1) and 'Postfix'(1 1 +),
which will allow you to make a stack
calculations

'Prefix' notation we wants to take a look
to is also reffered as a 'Functional notation'
because just let's transform it:

+(1, 1)

And so, 'Infix' notation is key of understanding
the key of understanding operation overloading in
C++. The second thing is, if have some functional
notation like this:

+(1, 1)

we're dealing with the very ordinary function. But,
we also know, that we are dealing with classes and
their instances, and we sometimes don't have a
function like notation, but a notation similar to
a member function. So by modyfing this we get
something like:

1.+( 1 );

So what do we have here

1. - a random instance (1 in our case), in
which we call '+' member function to which we will
pass ( 1 ) as a parameter

*/

class Integer
{
	public:
		Integer(int const n);
		~Integer(void);

		int	getValue(void) const;

		/*
		The line below returns the reference to the
		one object, why, because in C and C++ there
		could multiple equals such as:

		a = b = c = d
		
		Operation is proceeding from the right to
		the left (c = d, then b = c and the a = b)
		and actually in return reference to the object
		*/
		Integer	&operator=(Integer const &rhs);
		/*The '+' operator is diffrent, because the current instance
		doesn't change. The operation is proceeding from the right
		to the left*/
		Integer operator+(Integer const &rhs) const ;
	private:
		int _n;
};

std::ostream	&operator<<(std::ostream &o, Integer const &rhs);

#endif
