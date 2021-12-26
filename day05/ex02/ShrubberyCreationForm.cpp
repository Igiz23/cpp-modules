#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm(): Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreate", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): Form(other) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this != &other)
		Form::operator=(other);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	checkSignAndGrade(executor);
	std::cout << "Executing ShrubberyCreate form" << target << std::endl;
	std::ofstream file;

	file.open(target + "_shrubbery");
	if (file.is_open())
	{
		file << "          # #### ####\n"  << std::endl;
		file << "         ### \\/#|### |/####\n"  << std::endl;
		file << "        ##\\/#/ \\||/##/_/##/_#\n"  << std::endl;
		file << "      ###  \\/###|/ \\/ # ###\n"  << std::endl;
		file << "    ##_\\_#\\_\\## | #/###_/_####\n" << std::endl;
		file << "   ## #### # \\ #| /  #### ##/##\n"  << std::endl;
		file << "    __#_--###`  |{,###---###-~\n"  << std::endl;
		file << "              \\ }{\n"  << std::endl;
		file << "               }}{\n" << std::endl;
		file << "               }}{\n" << std::endl;
		file << "               {{}\n" << std::endl;
		file << "         , -=-~{ .-^- _\n" << std::endl;
		file.close();
	}
	std::cout << "Executor: " << executor.getName() << std::endl;
}

