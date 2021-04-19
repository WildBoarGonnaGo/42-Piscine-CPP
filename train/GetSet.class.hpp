#ifndef GETSET_CLASS_HPP
# define GETSET_CLASS_HPP

class GetSet
{
	public:
		GetSet(void);
		~GetSet(void);

		int		getFoo(void) const;
		void	setFoo(int v);
	private:
		int		_foo;
};

#endif