#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"



class Form;

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &other);

	Bureaucrat &operator=(Bureaucrat const &other);

	std::string	const	&getName() const;
	int					getGrade() const;
	void				incrementGrade();
	void				decrementGrade();
	void				executeForm(Form const &form);

	class GradeTooHighException: public std::exception {
	public:
		std::string msg;
		GradeTooHighException();
		virtual ~GradeTooHighException() throw() {};
		virtual const char*	what() const throw();
	};
	class GradeTooLowException: public std::exception {
	public:
		std::string msg;
		GradeTooLowException();
		virtual ~GradeTooLowException() throw() {};
		virtual const char*	what() const throw();
	};
private:
	std::string const 	name;
	int					grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur);

#endif
