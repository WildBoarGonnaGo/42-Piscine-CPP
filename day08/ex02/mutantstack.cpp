/*#include "mutantstack.hpp"
#include <string>

template <typename T>
MutantStack<T>::MutantStack( ) { }

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &rhs)
{
	*this = rhs;
}

template <typename T>
MutantStack<T>::~MutantStack( ) { }

template <typename T>
MutantStack<T>							&MutantStack<T>::operator=(MutantStack const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

template <typename T>
bool									MutantStack<T>::empty() const
{
	return (this->_subj.empty());
}

template <typename T>
unsigned int							MutantStack<T>::size() const
{
	return (this->_subj.size());
}

template <typename T>
T										&MutantStack<T>::top()
{
	return (this->_subj.back());
}

template <typename T>
T const									&MutantStack<T>::top() const
{
	return (this->_subj.back());
}

template <typename T>
void 									MutantStack<T>::push(const T &val)
{
	this->_subj.push_back(val);
}

template <typename T>
void									MutantStack<T>::pop()
{
	this->_subj.pop_back();
}

template <typename T>
typename MutantStack<T>::iterator		MutantStack<T>::begin()
{
	return (this->_subj.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin() const
{
	return (this->_subj.begin());
}

template <typename T>
typename MutantStack<T>::iterator		MutantStack<T>::end()
{
	return (this->_subj.end());
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end() const
{
	return (this->_subj.end());
}

template class MutantStack<int>;
template class MutantStack<float>;
template class MutantStack<std::string>;
template class MutantStack<double>;*/