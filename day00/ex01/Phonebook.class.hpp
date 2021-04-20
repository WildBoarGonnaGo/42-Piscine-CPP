#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);
		void 		addContact(Phonebook *var);
		void		getSearch(Phonebook *p_obj);
		void		phoneExit(void);
		void		wrongFuncOutput(void);
		void		exitInit(void);
		int			noexit_var;
	private:
		std::string	contact_field[11];
		static int	_intr;
		std::string	field[11]
		= 	{		"first name: ",
					"last name: ",
					"nickname: ",
					"login: ",
					"postal adress: ",
					"email adress: ",
					"phone number: ",
					"birthday date: ",
					"favorite meal: ",
					"underwear color: ",
					"darkest secret: "
			};
		void		writeField(std::string str);
};

#endif