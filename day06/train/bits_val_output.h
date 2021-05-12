#ifndef BITS_VAL_OUTPUT_H
# define BITS_VAL_OUTPUT_H
# include <stdio.h>

union	val_64bit
{
	double 			d_64;
	unsigned long	ulong_64;
};

void	output_int32_binary(int const n);
void	output_double64_binary(double const n);
void	dump_32bist_integer(int const n);
void	dump_64bits_double(double const z);

#endif
