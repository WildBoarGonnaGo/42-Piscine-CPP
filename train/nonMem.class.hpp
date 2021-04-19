#ifndef NONMEM_CLASS_HPP
# define NONMEM_CLASS_HPP

class nonMem
{
	public:
		nonMem(void);
		~nonMem(void);

		static int	getNbInst(void);
	private:
		static int	_nbInst;
		
};

#endif