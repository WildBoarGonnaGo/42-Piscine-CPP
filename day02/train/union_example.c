#include <stdio.h>
#include <string.h>

union Data
{
	int		x, v;
	float	y, z;
};

int main(void)
{
	union Data	lol;

	printf("Memory size occupied by inion: %lu\n", sizeof(lol));
	lol.x = 0x3f000000;
	printf("lol.x = %d\n", lol.x);
	printf("lol.y = %f\n", lol.y);
	printf("lol.v = %d\n", lol.v);
	printf("lol.z = %f\n", lol.z);
	return (0);
}