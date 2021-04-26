#ifndef SAMPLE_HPP
# define SAMPLE_HPP

/*
This is addhock polymorphysm, it is also
commonly known ass function overload
*/

class Sample
{
	public:
		Sample(void);
		~Sample(void);

		void	bar(char const c) const;
		void	bar(int const n) const;
		void	bar(float const z) const;
		void	bar(Sample const &i) const;
};

#endif