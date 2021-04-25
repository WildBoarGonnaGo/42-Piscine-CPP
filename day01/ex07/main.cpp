#include "replace.hpp"

int 		main(int argc, char *argv[])
{
	std::string 	fileOutput;
	std::string		strRecieve;

	if (argc < 4)
		errArgs();
	std::ifstream	ifs(argv[1]);
	if (!ifs.is_open())
		errOpen(argv[1]);
	for (int i = 0; i < argc; ++i)
		errEmptyStr(argv[i]);
	fileOutput = strUpper(argv[1]);
	fileOutput.append(".replace");
	std::ofstream	ofs(fileOutput.c_str());
	if (!ofs.is_open())
		errOpen(fileOutput);
	while (std::getline(ifs, strRecieve))
	{
		replaceHandle(argv[2], argv[3], &strRecieve);
		if (!ifs.eof())
			strRecieve.append("\n");
		ofs << strRecieve;
	}
	ifs.close();
	ofs.close();
	return (0);
}