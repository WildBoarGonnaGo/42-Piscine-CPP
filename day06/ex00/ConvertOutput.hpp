#ifndef CONVERTOUTPUT_HPP
# define CONVERTOUTPUT_HPP
# include <string>

class ConvertOutput
{
	private:
		ConvertOutput();
		std::string const	_literal;
	public:
		ConvertOutput(std::string const literal);
		~ConvertOutput();
		ConvertOutput(ConvertOutput const &ref);

		ConvertOutput	&operator=(ConvertOutput const &ref);
		void			intOutput();
		void			charOutput();
		void			doubleOutput();
		void			floatOutput();
};

#endif