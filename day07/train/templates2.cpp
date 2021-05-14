#include <iostream>

template<typename T>	class List {
	public:
		List<T>(T const &content) {
			//Something
		}

		List<T>(List<T> const &list) {
			//Something
		}

		List<T>	getField() {
			return (*this->next);
		}
		~List<T>( void ) {
			//Something
		}
		//Something
	private:
		T		*content;
		List<T>	*next;
};

int main(void)
{
	List<int>			a(42);
	List<float>			b(4.02f);
	List< List<int> >	c(a);

	//std::cout << a.getData<int>() << std::endl;
	//std::cout << b.getData()<float> << std::endl;
	return(0);
}