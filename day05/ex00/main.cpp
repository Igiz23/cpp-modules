#include "Bureaucrat.hpp"

void	test(std::string name, int grade, std::string testName)
{
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "  " << testName << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< std::endl;
	try
	{
		std::cout << "Bureaucrat creating" << std::endl;
		Bureaucrat rat = Bureaucrat(name, grade);
		std::cout << rat << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "______________________________"<< std::endl;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main(void)
{
	test("№1", 10, "Normal test");
	test("№2", 151, "Too Low Grade test");
	test("№3", -1, "Too High Grade test");
	test("№4", 1, "Increment throw test");
	test("№5", 150, "Decrement throw test");
}
