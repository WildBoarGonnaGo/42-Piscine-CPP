#include <iostream>
#include <fstream>

int main(void)
{
	std::ifstream	ifs("numbers");
	/*std::ifstream ifs("numbers")
	
	std::ifstream declaration of input filestream/
	ifs - name of the filestream variable and the
	"numbers" is the name of file from which
	information will be read from*/
	unsigned int	dst;
	double			some_pi;
	unsigned int	dst2;

	ifs >> dst >> some_pi >> dst2;
	std::cout << "dst = " << dst << std::endl;
	std::cout << "some_pi = " << some_pi << std::endl;
	std::cout << "dst2 = " << dst2 << std::endl;
	ifs.close();

	std::ofstream	ofs("test.out");
	/*std::ofstream ofs("test.out")
	
	std::ofstream - declaration of the output
	filestream variable, ofs - name the filestream
	variable, and the "test.out" - the name of
	the file information will be outputed to*/

	ofs << "Blood for the blood god" << std::endl;
	ofs.close();
	return (0);
}
