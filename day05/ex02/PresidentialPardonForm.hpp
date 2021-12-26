#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &other);

	PresidentialPardonForm & operator=(PresidentialPardonForm const &other);

	void	execute(Bureaucrat const & executor) const;
private:
	std::string	target;
};

#endif
