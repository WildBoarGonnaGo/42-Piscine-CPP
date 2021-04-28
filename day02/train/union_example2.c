#include <stdio.h>

union test
{
	int 	x;
	char	y;
};

int main(void)
{
	union test	data;
	data.x = 65;

	//p2 is a pointer to union1
	union test	*data2;
	data2 = &data;
	printf("%d %c\n", data.x, data2->y);
	return (0);
}