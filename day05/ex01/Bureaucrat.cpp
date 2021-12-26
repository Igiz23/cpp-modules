#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Unknown"), grade(21) {}

Bureaucrat::Bureaucrat(std::string const name, int grade): name(name) {
	if (grade < 1) {
		GradeTooHighException b;
		b.msg = "High grate, " + this->name + " grade is " + std::to_string(grade);
		throw  b;
	}
	if (grade > 150) {
		GradeTooLowException a;
		a.msg = "Low grate, " + this->name + " grade is " + std::to_string(grade);
		throw  a;
	}
	this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &other): name(other.name), grade(other.grade) {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &other) {
	if (this != &other)
	{
		const_cast<std::string&>(name) = other.name;
		grade = other.grade;
	}
	return (*this);
}

std::string	const &Bureaucrat::getName() const {
	return (name);
}

int	Bureaucrat::getGrade() const {
	return (grade);
}

void	Bureaucrat::incrementGrade() {
	if (grade == 1)
		throw GradeTooHighException();
	this->grade--;
	std::cout << "Incrementing grade of bureaucrat " << this->name <<
			  " to " << this->grade << std::endl;
}

void	Bureaucrat::decrementGrade() {
	if (grade == 150)
		throw GradeTooLowException();
	this->grade++;
	std::cout << "Decrementing grade of bureaucrat " << this->name <<
			  " to " << this->grade << std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
	std::cout << "Bureaucrat grade is too high" << std::endl;
}


const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return (msg.c_str());
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
	std::cout << "Bureaucrat grade is too low" << std::endl;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return (msg.c_str());
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur) {
	out << "Bureaucrat " << bur.getName() << " grade = " << bur.getGrade() << std::endl;
	return (out);
}