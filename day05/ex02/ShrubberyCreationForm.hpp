#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &other);

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const &other);

	void	execute(Bureaucrat const & executor) const;
private:
	std::string	target;
};

#endif
