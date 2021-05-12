#include "bits_val_output.h"

void	output_int32_binary(int const n)
{
	char val[32] = {'0'};

	for (int i = 0; i < 32; ++i)
		val[i] = ((n >> i) & 1) + '0';
	for (int i = 31; i >= 0; --i)
	{
		if (!(i % 8) && i)
			printf("%c ", val[i]);
		else
			printf("%c", val[i]);
	}
}

void	output_double64_binary(double const n)
{
	char 			val[64] = {'0'};
	union val_64bit	un64;

	un64.d_64 = n;
	for (int i = 0; i < 64; ++i)
		val[i] = ((un64.ulong_64 >> i) & 1) + '0';
	for (int i = 63; i >= 0; --i)
	{
		if (i == 62 || i == 51)
			printf(" %c", val[i]);
		else
			printf("%c", val[i]);
	}
}

void	dump_32bist_integer(int const n)
{
	printf("[%10d]: ", n);
	output_int32_binary(n);
	printf("\n");
}

void	dump_64bits_double(double const z)
{
	printf("[%10f]: ", z);
	output_double64_binary(z);
	printf("\n");
}