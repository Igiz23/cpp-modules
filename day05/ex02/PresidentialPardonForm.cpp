#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardon", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): Form(other) {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	if (this != &other)
		Form::operator=(other);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	checkSignAndGrade(executor);
	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl
			  << "Executor: " << executor.getName() << std::endl;
}