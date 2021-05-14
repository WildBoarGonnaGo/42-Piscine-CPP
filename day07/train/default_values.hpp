#include <iostream>
#include <iomanip>

template< typename T = float >	// if there is no template definition it will be
								//instanciated by default to float
class Vertex {
	public:
		Vertex( T const &x, T const &y, T const &z) :
			_x(x), _y(y), _z(z) { }
		~Vertex(void) { }

		T const	&getX( void ) const { return (this->_x); }
		T const	&getY( void ) const { return (this->_y); }
		T const	&getZ( void ) const { return (this->_z); }
	private:
		T const _x;
		T const _y;
		T const _z;
		Vertex (void);
};

template<typename T> std::ostream	&operator<<(std::ostream &output,
	Vertex<T> const &v)
{
	std::cout.precision(1);
	output << setiosflags(std::ios::fixed);
	output << "Vertex (" << v.getX() << ", "
	 << v.getY() << ", " << v.getZ() << ')';
	return (output);
}