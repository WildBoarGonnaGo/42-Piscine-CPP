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
		void 				addContact(Phonebook *var);
		void				getSearch(Phonebook *p_obj);
		void				phoneExit(void);
		void				exitInit(void);
		int					noexit_var;
	private:
		std::string			contact_field[11];
		static int			_intr;
		static std::string	field[11];
		void				writeField(std::string str);
		void				writeIndex(Phonebook var);
		int 				_client_num;
};

#endif