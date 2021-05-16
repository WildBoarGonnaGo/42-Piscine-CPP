#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <vector>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( ) { };
		MutantStack(MutantStack const &rhs) { *this = rhs; };
		~MutantStack( ) { };

		MutantStack		&operator=(MutantStack const &rhs)
		{
			if (this != &rhs )
				*this = rhs;
			return (*this);
		};
		bool					empty() const { return (this->_subj.empty()); };
		unsigned int 			size() const { return (this->_subj.size());};
		T						&top() { return (this->_subj.back()); };
		T const					&top() const { return (this->_subj.back()); };
		void					push(const T &val) { return (this->_subj.push_back(val)); };
		void					pop() { return (this->_subj.pop_back()); };
		typedef 				typename std::vector<T>::iterator
									iterator;
		typedef 				typename std::vector<T>::const_iterator
									const_iterator;
		typedef 				typename std::vector<T>::reverse_iterator
									reverse_iterator;
		typedef 				typename std::vector<T>::const_reverse_iterator
									const_reverse_iterator;
		iterator				begin() { return (this->_subj.begin()); };
		const_iterator			begin() const { return (this->_subj.begin()); };
		iterator				end() { return (this->_subj.end()); };
		const_iterator			end() const { return (this->_subj.end()); };
		reverse_iterator		rbegin() { return (this->_subj.rbegin()); };
		const_reverse_iterator	rbegin() const { return (this->_subj.rbegin()); };
		reverse_iterator		rend() { return (this->_subj.rend()); };
		const_reverse_iterator	rend() const { return (this->_subj.rend()); };
	private:
		std::vector<T>	_subj;
};

#endif