#include "Phonebook.class.hpp"

int main(void)
{
	Phonebook	clients[8];
	Phonebook	main;
	std::string	cmd;
	int			i;

	i = 0;	
	std::cout << "lchantel's 'Phonebook' program" << std::endl;
	std::cout << "the following commands are available: "
		<< "\"ADD\", \"SEARCH\", \"EXIT\"."
		<< std::endl;
	while(main.noexit_var)
	{
		std::cout << ">>> ";
		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD"))
			main.addContact(&clients[i++]);
		else if (!cmd.compare("SEARCH"))
			main.getSearch(clients);
		else if (!cmd.compare("EXIT"))
			main.exitInit();
	}
	return (0);
}