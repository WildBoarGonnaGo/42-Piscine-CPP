#include <iostream>
#include <string>

class Student
{
	private:
		std::string	_login;

	public:
		Student(std::string	const &login) : _login(login) { }

		std::string			&getLoginRef()
		{
			return (this->_login);
		}

		std::string const	&getLoginRefConst() const
		{
			return (this->_login);
		}

		std::string 		*getLoginPtr()
		{
			return (&(this->_login));
		}

		std::string const	*getLoginPtrConst() const
		{
			return (&(this->_login));
		}
};

int main(void)
{
	/*So what should you prefere to use?
	-	If it, in some point, shouldn't exist for while, 
		or should be changed, - we use pointers
	-	If it should always exist and never
		changes - we use references*/
	Student			bob = Student("bfubar");
	Student	const	jim = Student("jfbuar");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *bob.getLoginPtrConst() << " " << *jim.getLoginPtrConst() << std::endl;

	bob.getLoginRef() = "bobfubar";
	std::cout << bob.getLoginRefConst() << std::endl;
	*bob.getLoginPtr() = "bobbyfubar";
	std::cout << *bob.getLoginPtrConst() << std::endl;
	return (0);
}