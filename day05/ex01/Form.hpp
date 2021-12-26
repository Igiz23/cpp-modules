#ifndef FORM_HPP
#define FORM_HPP


#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form();
	Form(std::string const name, int gradeToSign, int gradeToExecute);
	~Form();
	Form(const Form &other);

	Form & operator=(const Form &other);

	void				beSigned(Bureaucrat const &bur);
	const std::string	getName() const;
	bool				getIsSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;

	class GradeTooHighException: public std::exception {
	public:
		std::string msg;
		GradeTooHighException(bool which);
		virtual ~GradeTooHighException() throw() {};
		virtual const char*	what() const throw();
	};
	class GradeTooLowException: public std::exception {
	public:
		std::string msg;
		GradeTooLowException(bool which);
		virtual ~GradeTooLowException() throw() {};
		virtual const char*	what() const throw();
	};

private:
	const std::string	name;
	bool				isSigned;
	const int			gradeToSign;
	const int			gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, const Form &form);
#endif
