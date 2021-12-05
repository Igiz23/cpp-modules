# include <iostream>
# include <fstream>
# include <string>

int parseString(std::string const &printStr, std::string &writeStr) {
	std::cout << printStr << std::flush;
	std::getline(std::cin, writeStr);
	if (std::cin.eof())
		return (1);
	return (0);
}

int main (void) {
	std::string fileName;
	std::string s1;
	std::string s2;
	std::string	buf;
	size_t		pos;
	int 		check = 1;

	check = parseString("File name: ", fileName);
	if (!check)
		check = parseString("Find:      ", s1);
	if (!check)
		check = parseString("Replace:   ", s2);
	if (s1.length() == 0 || s2.length() == 0) {
		std::cout << "No string!" << std::endl;
		return (0);
	}
	if (!check) {
		std::ifstream ifs;
		ifs.open (fileName, std::ifstream::in);
		if (ifs.peek() == EOF)
		{
			std::cout << "This file bad or permission denied!" << std::endl;
			return (0);
		}
		std::ofstream ofs(fileName + ".replace");
		while (!ifs.eof()) {
			if(std::getline(ifs, buf))
			{
				pos = buf.find(s1, 0);
				while(pos != std::string::npos)
				{
					buf.erase(pos, s1.length());
					buf.insert(pos, s2);
					pos = buf.find(s1, pos + s2.length());
				}
				ofs << buf << std::endl;
			}
			else
				ofs << "\n" << std::flush;
		}
			ifs.close();
	}
	return (0);
}