#include <iostream>
#include <string>

class Student2
{
	private:
		std::string	_login;
	public:
		Student2() : _login("yet another private")
		{
			std::cout << "Private " << this->_login << " reporting for duty" << std::endl;
		}
		~Student2()
		{
			std::cout << "Private " << this->_login << " stop serving in the army" << std::endl;
		}
};

int main(void)
{
	Student2*	joker = new Student2[4];

	delete []  (joker);
	return (0);
}