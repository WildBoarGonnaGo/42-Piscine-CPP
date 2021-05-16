#include "Array.hpp"

class Awesome {
	public:
		Awesome(void) : _n(42) { return ; }
		Awesome(Awesome const &rhs) { *this = rhs; return ; }
		Awesome	&operator=(Awesome const &rhs) { static_cast<void>(rhs); return (*this); }	
		int		get(void) const { return (this->_n); }
	private:
		int	_n;
};

std::ostream	&operator<<(std::ostream &output, Awesome const &rhs)
{
	output << rhs.get();
	return (output);
}

int main(void)
{
	Array<int>			b(5);
	Array<float> 		c(7);
	Array<float> 		d(9);
	const Array<int>	h(2);

	for (int i = 0; i < h.size(); ++i)
	{
		try
		{
			std::cout << "h[" << i << "] const = " << h[i]
				<< std::endl ;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}	
	}
	for (int i = 0; i < 5; ++i)
		std::cout << "b[" << i << "] = " << b[i]
			<< std::endl;
	std::cout << "Size of array: " << b.size() << std::endl;
	for (int i = 0; i < b.size() + 4; ++i) {
		try 
		{
			b[i] = i * 2;
			c[i] = i * 0.75;
			d[i] = i * 1.5;
	
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			try
			{
				c[i] = i * 0.75;
				d[i] = i * 1.5;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
				d[i] = i * 1.5;
			}
		}
	}
	for (int i = 0; i < b.size() + 4; ++i) {
		try 
		{
			std::cout << "b[" << i << "] = " << b[i];
			std::cout << " c[" << i << "] = " << c[i];
			std::cout << " d[" << i << "] = " << d[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what();
			try
			{
				std::cout << " c[" << i << "] = " << c[i];
				std::cout << " d[" << i << "] = " << d[i] << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what();
				try
				{
					std::cout << " d[" << i << "] = " << d[i] << std::endl;
				}
				catch(const std::exception& e)
				{
					std::cerr << e.what() << '\n';
				}		
			}
		}
	}
	std::cout << std::endl;
	c = d;
	for (int i = 0; i < b.size() + 4; ++i) {
		try 
		{
			std::cout << "b[" << i << "] = " << b[i];
			std::cout << " c[" << i << "] = " << c[i];
			std::cout << " d[" << i << "] = " << d[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what();
			try
			{
				std::cout << " c[" << i << "] = " << c[i];
				std::cout << " d[" << i << "] = " << d[i] << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what();
				std::cout << " d[" << i << "] = " << d[i] << std::endl;
			}
		}
	}
	Array<float>	e;
	try 
	{
		std::cout << e[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	Array<std::string>	f(2);
	f[0] = "Hey, hey people";
	f[1] = "Sseth, here";
	for (int i = 0; i < f.size(); ++i) {
		std::cout << "f[" << i << "] = " << f[i]
			<< std::endl;
	}

	Array<Awesome> 		g(5);

	for (int i = 0; i < g.size() + 2; ++i)
	{
		try
		{
			std::cout << "g[" << i << "] = " << g[i]
				<< std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
 	return (0);
}