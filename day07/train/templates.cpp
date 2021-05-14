#include <iostream>

template<typename T>T									//Template definition
max(T const &x, T const &y) {
	return (x >= y ? x : y);
}

int						foo(int x)
{
	std::cout << "Long computing time" << std::endl;
	return (x);
}

int main(void) {
	int		a = 21;
	int		b = 42;

	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>(a, b) << std::endl;			// Explicit instanciation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max(a, b) << std::endl;				// Implicit instanciation

	float	c = -1.7f;
	float	d = 4.2f;

	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max<float>(c, d) << std::endl;			// Explicit instanciation
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max(c, d) << std::endl;				// Implicit instanciation

	char	e = 'a';
	char	f = 'z';

	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max<char>(e, f) << std::endl;			// Explicit instanciation
	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max(e, f) << std::endl;				// Implicit instanciation

	//No problem here
	int		res = max<int>(foo(a), foo(b));				//Explicit instaciation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << res << std::endl;
	return (0);
}
