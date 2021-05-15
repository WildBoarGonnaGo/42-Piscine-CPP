#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <stdexcept>
# include <iostream>

template<typename T>
class Array {
	public:
		Array() : _size(0), _arr(new T[0]()) { }
		Array<T>(unsigned int n) : _size(n), _arr(new T[_size]() ) { }
		Array<T>(Array const &rhs) { 
			*this = rhs;
			return ;
		}

		Array<T>		&operator=(Array const &rhs) {
			if (this->_arr)
			{
				delete [] this->_arr;
				this->_arr = NULL;
			}
			this->_size = rhs._size;
			this->_arr = new T[this->size()];
			if (!this->_arr)
			{
				Array *res = new Array();
				return (*res);
			}
			for (int i = 0; i < this->size(); ++i)
				this->_arr[i] = rhs._arr[i];
			return (*this);
		}

		class	MemoryReadFailedException : public std::exception {
			public:
				virtual const char	*what() const throw() {
					return ("memory read failed: out of range");
				}
		};

		T				&operator[](int i) const {
			if (!this->_arr || i < 0 || i >= this->_size)
				throw MemoryReadFailedException();
			return (this->_arr[i]);
		}

		int				size() const {
			return (this->_size);
		}

		~Array( ) {
			if (this->_arr)
				delete [] this->_arr; 
		}
	private:
		int				_size;
		T				*_arr;
};

#endif 