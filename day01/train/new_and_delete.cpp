#include <iostream>
#include <string>


class Student
{
	private:
		std::string	_login;

	public:
		Student(std::string login) : _login(login)
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}

		~Student(void)
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

int main(void)
{
	/*bob allocated in the stack, in a static way 
	like a normal local variable. And it is destroyed
	automatically when the the stack is cleaned up*/
	Student bob = Student("Robert Palson");
	/*tyler is allcated in a dynamic way*/
	Student *tyler = new Student("Tyler Derden");

	delete tyler; //tyler is destroyed
	return (0);
}