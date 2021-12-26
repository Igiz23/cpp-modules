#include "Convert.hpp"


int 	main(int argc, char *argv[])
{
	Convert	convert;

	int flag = 1;
	if (argc == 2) {
		std::string str = argv[1];
		if (str.length() == 1) {
			if(!std::isdigit(str[0])) {
				flag = 0;
			}
		}
		convert.converter(argv[1], flag);
	}
	else
		std::cout << "Wrong number of arguments! Only one arg." << std::endl;
	return (0);
}