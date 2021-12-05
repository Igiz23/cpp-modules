#include <iostream>
#include <string>

int main (void) {

	std::string hello = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = hello;

	stringPTR = &hello;
	std::cout << &hello		<< std::endl;
	std::cout << stringPTR	<< std::endl;
	std::cout << &stringREF	<< std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}