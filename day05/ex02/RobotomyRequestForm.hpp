#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &other);

	RobotomyRequestForm & operator=(RobotomyRequestForm const &other);

	void	execute(Bureaucrat const & executor) const;
private:
	std::string	target;
};

#endif