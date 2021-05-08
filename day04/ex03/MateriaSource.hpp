#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_subj[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &ref);

		MateriaSource	&operator=(MateriaSource const &ref);
		virtual ~MateriaSource();
		virtual void		learnMateria(AMateria *sample);
		virtual AMateria	*createMateria(std::string const &type);
		AMateria			*getSubj(int idx) const ;	
};

# endif