#include <stdio.h>

int         gl_var = 1;
int         f( void ) { return 2; }

namespace   Foo 
{
    int     gl_var = 3;
    int     f( void ) { return 4; }
}

namespace   Bar 
{
    int     gl_var = 5;
    int		f ( void ) { return 6; }
}

namespace Muf = Bar;

/*
The scope resolution operator ( :: ) is used for several reasons.
For example: If the global variable name as local variable name,
the scople resolution operator will be used to call the global
variable. It's also used to define a function outside the class
and used to access the static variables of class
*/

int main(void)
{
	printf("gl_var:			[%d]\n", gl_var);
	printf("f():			[%d]\n\n", f());

	printf("Foo::gl_var:		[%d]\n", Foo::gl_var);
	printf("Foo::f():		[%d]\n\n", Foo::f());

	printf("Bar::gl_var:		[%d]\n", Bar::gl_var);
	printf("Bar::f():		[%d]\n\n", Bar::f());

	printf("Muf::gl_var:		[%d]\n", Muf::gl_var);
	printf("Muf::f():		[%d]\n\n", Muf::f());

	printf("::gl_var:		[%d]\n", ::gl_var);
	printf("::f():			[%d]\n", ::f());
	return (0);
}