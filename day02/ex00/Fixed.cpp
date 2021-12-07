#include "Fixed.hpp"

const int Fixed::fractionBits = 8;

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(): rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

Fixed &Fixed::operator=(Fixed &number) {
	std::cout << "Assignation operator called" << std::endl;
	this->rawBits = number.getRawBits();
	return (*this);
}

Fixed::Fixed( Fixed &copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

void Fixed::setRawBits(int const rawBits) {
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = rawBits;
}
