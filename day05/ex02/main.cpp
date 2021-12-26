#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define LINE std::cout << "------------------------------" << std::endl;

int main ( void ){

	// Отсутствие подписи!
//	try
//	{
//		LINE
//		Bureaucrat Bob("Bob", 3);
//		Bureaucrat Crist("Crist", 20);
//		PresidentialPardonForm form("K");
//		Bob.executeForm(form);
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
	// Недостаточно баллов для исполнения!!!
//	try
//	{
//		LINE
//		Bureaucrat Bob("Bob", 3);
//		Bureaucrat Crist("Crist", 20);
//		PresidentialPardonForm form("K");
//		form.beSigned(Crist);
//		LINE
//		Crist.executeForm(form);
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << "Error " <<  e.what() << '\n';
//	}
//	// Роботизируем!!!
//	try
//	{
//		LINE
//		Bureaucrat Bob("Bob", 3);
//		Bureaucrat Crist("Crist", 20);
//		RobotomyRequestForm form("Bureaucratic Machine");
//		form.beSigned(Crist);
//		LINE
//		Crist.executeForm(form);
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
	// А можно посадить дерево?
	try
	{
		LINE
		Bureaucrat Bob("Bob", 3);
		Bureaucrat Crist("Crist", 20);
		ShrubberyCreationForm form("MyTree");
		form.beSigned(Crist);
		LINE
		Crist.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}