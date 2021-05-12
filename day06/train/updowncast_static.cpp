#include <iostream>

class	Parent {};
class 	Child1: public Parent {};
class	Child2: public Parent {};

class	Unrelated {};

int 	main(void)
{
	Child1		a; 								//Reference value

	Parent		*b = &a;						//Implicit upcast -> Ok
	//Child1	*c = b;							Implicit downcast -> Hell, no!
	Child2		*d = static_cast<Child2 *>(b);	//Explicit downcast -> Ok, I obey (explicitr - static_cast)

	//Unrelated	*e = static_cast<Unrelated *>(&a); Explicitr converion - NO!! becase it dosen't related to
	//Parent and it's derived classes. static_cast allow to make simple converions between Direct values
	//and it also allow us to make upcast and downcast
}