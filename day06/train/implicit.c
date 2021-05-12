#include "bits_val_output.h"

int main(void)
{
	int		a = 42;			// Reference value
	double	b = a;			// Implicit conversion cast
	double	c = (double)a;	// Explicit conversion cast

	double	d = a;			// Implicit promotion -> Ok
	int		e = d;			// Implicit demotion -> Harzadous!
	int		f = (int)d;		// Explicit demotion -> Ok, you're in charge

	dump_32bist_integer(a);
	dump_64bits_double(b);
	dump_64bits_double(c);
	dump_64bits_double(d);
	dump_32bist_integer(e);
	dump_32bist_integer(f);

	return (0);
}