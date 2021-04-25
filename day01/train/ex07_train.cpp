#include <iostream>
#include <fstream>

void 	strawberryReplace(std::string templ, std::string *src)
{
	int pos;
	std::string strbr = "Strawberry";

	pos = src->find(templ);
	while (pos != std::string::npos)
	{
		src->replace(src->begin() + pos, src->begin()
			+ pos + templ.length(), strbr);
		pos = src->find(templ);
	}
}

int main(void)
{
	std::string	mystring = "Apple Juice is very good for Apple day";
	std::cout << "mystring before: " << mystring << std::endl;
	strawberryReplace("Apple", &mystring);
	std::cout << "mystring after: " << mystring << std::endl;
	return (0);
}