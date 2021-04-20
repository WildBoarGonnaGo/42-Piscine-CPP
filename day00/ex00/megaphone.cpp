
#include <iostream>
#include <cctype>

void	strupper(char *str)
{
	char	c;

	if (!str)
		return ;
	else if (*str)
	{
		c = toupper(*(str++));
		std::cout	<< c;
		strupper(str); 
	}
}

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout	<< "* LOAD AND UNBEARABLE FEEDBACK NOISE *"
					<< std::endl;
		return (0);
	}
	for (int i = 1; i < argc; ++i)
		strupper(argv[i]);
	std::cout << std::endl;
	return (0);
}