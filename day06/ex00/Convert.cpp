#include "Convert.hpp"
Convert::Convert() {}

Convert::~Convert() {}

Convert::Convert(const Convert &) {}

Convert &Convert::operator=(const Convert &) {
	return (*this);
}

void 		Convert::printChar(char *str) {
	char 		*end = nullptr;
	double 		rep;

	rep = std::strtod(str, &end);
	if (!*end) {
		if (!isprint(static_cast<char>(rep)) && !std::isnan(rep) && !std::isinf(rep)) {
			std::cout << "char: Non displayable" << std::endl;
		}
		else if (std::isnan(rep) || std::isinf(rep)) {
			std::cout << "char: impossible" << std::endl;
		}
		else {
			std::cout << "char: " << static_cast<char>(rep) << std::endl;
		}
	}
	else {
		std::string 		line(str);

		if (line.length() == 1) {
			if (!isprint(str[0])) {
				std::cout << "char: Non displayable" << std::endl;
			}
			else {
				std::cout << "char: " << str << std::endl;
			}
		}
		else {
			std::cout << "char: impossible" << std::endl;
		}
	}
}

void 		Convert::printInt(double rep) {
	if (std::isnan(rep) || std::isinf(rep)) {
		std::cout << "int: impossible" << std::endl;
	}
	else {
		std::cout << "int: " << static_cast<int>(rep) << std::endl;
	}
}

void 		Convert::printFloat(double rep) {
	if (!(rep - static_cast<int>(rep))) {
		std::cout << std::fixed << std::setprecision(1) <<"float: " << static_cast<float>(rep) << "f" << std::endl;
	}
	else {
		std::cout << "float: " << static_cast<float>(rep) << "f" << std::endl;
	}
}

void 		Convert::printDouble(double rep) {
	double 	i = 0;
	double 	n = 0;

	i = modf(rep, &n);
	if (i) {
		std::cout << "double: " << static_cast<double>(rep) << std::endl;
	}
	else {
		std::cout << "double: " << static_cast<double>(rep) << std::endl;
	}
}

void 		Convert::converter(char *str, int flag){
	double 		rep;

	if (flag) {
		rep = atof(str);
	}
	else {
		rep = str[0];
	}
	this->printChar(str);
	this->printInt(rep);
	this->printFloat(rep);
	this->printDouble(rep);
}