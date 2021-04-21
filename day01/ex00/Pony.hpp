#ifndef PONY_HPP
# define PONY_HPP

#include <string>

class Pony
{
	public:
		Pony(std::string const name_of_pony);
		~Pony(void);
		void	ponyPlayBall(void);
		void	ponyJump(void);
		void	ponyFly(void);
		void	ponyFeedEat(void);
		void	ponyWalkRun(void);
	private:
		std::string	const	_pony_name;
};

#endif
