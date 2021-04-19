#ifndef COMPARIS_CLASS_HPP
# define COMPARIS_CLASS_HPP

class comParis
{
	public:
		comParis(int v);
		~comParis(void);

		int		getFoo(void) const;
		int		compare(comParis *other) const;
	private:
		int		_foo;
};

#endif