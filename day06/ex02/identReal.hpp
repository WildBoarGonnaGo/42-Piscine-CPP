#ifndef IDENTREAL_HPP
# define IDENTREAL_HPP
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <exception>
# include <cstdlib>

Base	*generate(void);
void	identify_from_pointer(Base *p);
void	identify_from_reference(Base &p);

#endif