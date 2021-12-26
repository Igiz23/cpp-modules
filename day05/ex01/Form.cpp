
#include "Form.hpp"

Form::Form(): name("Unknown"), isSigned(false), gradeToSign(42), gradeToExecute(21) {}

Form::Form(std::string const name, int gradeToSign, int gradeToExecute):
		name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1) {
		GradeTooHighException b(1);
		b.msg = "High grate, " + this->name + " grade is " + std::to_string(this->gradeToSign);
		throw  b;
	}
	else if (gradeToSign > 150) {
		GradeTooLowException a(1);
		a.msg = "Low grate, " + this->name + " grade is " + std::to_string(this->gradeToSign);
		throw a;
	}
	if (gradeToExecute < 1) {
		GradeTooHighException c(0);
		c.msg = "High exp, " + this->name + " exp is " + std::to_string(this->gradeToExecute);
		throw c;
	}
	else if (gradeToExecute > 150) {
		GradeTooLowException d(0);
		d.msg = "Low exp, " + this->name + " exp is " + std::to_string(this->gradeToExecute);
		throw d;
	}
}

Form::~Form() {}

Form::Form(const Form &other): name(other.name), isSigned(other.isSigned),
							   gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

Form & Form::operator=(const Form &other) {
	if (this == &other) {
		const_cast<std::string&>(name) = other.name;
		isSigned = other.isSigned;
		const_cast<int&>(gradeToSign) = other.gradeToSign;
		const_cast<int&>(gradeToExecute) = other.gradeToExecute;
	}
	return (*this);
}

void Form::beSigned(Bureaucrat const &bur) {
	if (bur.getGrade() <= gradeToSign) {
		isSigned = true;
		std::cout << "Form \"" << this->getName() << "\" was successfuly signed by bureaucrat "
				  << bur.getName() << std::endl;
	}
	else {
		GradeTooLowException d(0);
		d.msg = "Low exp, " + this->name;
		throw d;
	}
}

const std::string Form::getName() const {
	return (name);
}

bool Form::getIsSigned() const {
	return (isSigned);
}

int Form::getGradeToSign() const {
	return (gradeToSign);
}

int Form::getGradeToExecute() const {
	return (gradeToExecute);
}

Form::GradeTooHighException::GradeTooHighException(bool which) {
	if (which == 1)
		std::cout << "GradeTooHigh Exception(Sign)" << std::endl;
	else
		std::cout << "GradeTooHigh Exception(Execute)" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw() {
	return (msg.c_str());
}

Form::GradeTooLowException::GradeTooLowException(bool which) {
	if (which == 1)
		std::cout << "GradeTooLow Exception(Sign)" << std::endl;
	else
		std::cout << "GradeTooLow Exception(Execute)" << std::endl;
}

const char* Form::GradeTooLowException::what() const throw() {
	return (msg.c_str());
}
std::ostream &operator<<(std::ostream &out, const Form &form) {
	out << "Form info: "
		<< std::endl << "Name: " << form.getName() << std::endl
		<< "Is signed: " << form.getIsSigned() << std::endl
		<< "Grade to Sign: " << form.getGradeToSign() << std::endl
		<< "Grade to Execute: " << form.getGradeToExecute() << std::endl;
	return (out);
}