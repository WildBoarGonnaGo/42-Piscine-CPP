/*
Floating number representaion is described
IEEE-754 standard. 

An IEEE-754 float (4 bytes) or double (8 bytes) has three components:
a sign bit telling whether the number is positive or negative, 
an exponent giving it's order of magnitude, and mantissa specifying
the actual dibits of the number.

What is the order of magnitude? Generally, the order of magnitude of
a number N. the number is first expressed in the following form

N = a x 10 ^ b, 

where 1 / sqrt(10) < a < sqrt(10). Then, b represent the order of magnitude
of the number. The order of magnitude can be any Integer

Using single-precision floats as an example, here is the bit layout:

seeeeeeeemmmmmmmmmmmmmmmmmmmmmmm meaning
31                             0 #bit

s = sign bit
e = exponent
m = mantissa

The value of the number is 2^x, where x is the exponent. Notice
that we are dealing with binary fractions, so that 0.1 (the left most
mantissa bit), means 1/2 (the place values to the right of the decimal
point are 2^-1, 2^-2 etc., just as we have 10^-1, 10^-2, etc.. in decimal).

Notice further that there's a potential problem with storing both mantissa
and an exponent: 2^10^-1 = 0.2x10^0 = 0.02^10^1. This will correspo to lots
of diffrent bit patterns representing the same quantity, which would be a
huge waste (it would probably also make it harder and slower to implement
math operations in hardware). The problem is circumvented by interpreint
the whole mantissa as being to the right of the decimal point, with an
implied "1" always present to the left of the decimal. This will be refered
as a 1.m representation. The zero is special case.

The exponent of a single-precision float "shift-127" encoded, meaning
that the actual exponent is eeeeeeee minus 127. So, thankfully, we can get
the exponent of zero by storing 127 (0x7f). 

Zero is not the only "special case" float. There are also representations for
positive and negative infinity, for not a number (NaN) value, for results that
do not make sense (for examples, non-real numbers, or result of an operation
like infinity times zero). How do these work? A number is infinite if every
bit of the exponent is set (yep, we lose another one), and is NaN if every
bit of exponent is set plus any mantissa bits are set. The sign bit still
distinguishes +/- inf and +/- NaN.

To review, here is some sample floating point representations:

0		0x00000000
1.0 	0x3f000000
0.5		0x3f000000
3		0x40400000
+inf	0x7f000000
-inf	0xff000000
+NaN	0x7fc00000 or 0x7ff00000
in general: number = (sign ? -1 : 1) * 2^(exponent) * 1.(mantissa bits).
List of the standard values represented in tables represented in
README.md
*/
#include <cmath>
#include <ieee754.h>
#include <cstdio>

#define LOG2_10	3.321928095
#define EPSILON 1.0e-7
#define fit_equals(a, b) (fabs(a - b) < EPSILON)
#define flt_zero(x) (fabs(x) < EPSILON)

/*Maximum # of 0's right of decimal before
using scientific notation*/
int max_digs_rt = 3;
/*max # of digits left of decimal*/
int	max_digs_lf = 5;

double	magnitude (double re, double im)
{
	double r;

	re = fabs(re);
	im = fabs(im);
	if (re > im)
	{
		r = im / re;
		return (re * sqrt(1.0 + r * r));
	}
	if (im == 0.0)
		return (0.0);
	r = re / im;
	return (im * sqrt(1.0 + r * r));
}

void	print_real(double r, int width, int dec)
{
	int 					mag;
	double 					fpart;
	double 					temp;
	char					format[8];
	char					num_format[3] = {'l', 0, 0};
	union ieee754_double	*dl;

	dl = (union ieee754_double*)&r;
	mag = (dl->ieee.exponent - IEEE754_DOUBLE_BIAS) / LOG2_10;
	if (r == 0)
		mag = 0;
	if ((mag > max_digs_lf - 1) || (mag < -max_digs_rt))
	{
		num_format[1] = 'e';
		temp = r / pow(10, mag); 		//see if number will have a decimal
		fpart = temp - floor(temp);		//when written in scientific notation
	}
	else
	{
		num_format[1] = 'f';
		fpart = r - floor(r);
	}
	if (flt_zero(fpart))
		dec = 0;
	if (!width)
		snprintf(format, 8, "%%.%d%s", dec, num_format);
	else
		snprintf(format, 8, "%%%d.%d%s", width, dec, num_format);
	printf(format, r);
}

int main(void)
{
	print_real(3.1457, 3, 3);
	printf("\n");
	return (0);
}