#include "Fixed.hpp"

const int Fixed::fractionBits = 8;


int Fixed::getFractionBits( void ) {
	return (Fixed::fractionBits);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed() : rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
	this->rawBits = Fixed::fractionBits;
}

Fixed::Fixed( int const &integer ) {
	std::cout << "Int constructor called" << std::endl;
	this->rawBits = integer << (Fixed::fractionBits);
}

Fixed::Fixed( float const &floating) {
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = (int)(std::roundf( floating * (float)(1 << Fixed::fractionBits)));
}

Fixed &Fixed::operator=(Fixed const &number) {
	std::cout << "Assignation operator called" << std::endl;
	this->rawBits = number.rawBits;
	return (*this);
}

float Fixed::toFloat( void ) const {
	float out;
	out = ((float)(this->rawBits) / (float)(1 << Fixed::fractionBits));
	return (out);
}

int Fixed::toInt( void ) const {
	return (this->rawBits >> Fixed::fractionBits);
}

Fixed::Fixed( Fixed const &copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int	Fixed::getRawBits( void ) const {
	return (this->rawBits);
}

void Fixed::setRawBits(int const rawBits) {
	this->rawBits = rawBits;
}

std::ostream& operator<<( std::ostream &os, const Fixed &fx ) {
	return (os << (double)(fx.getRawBits()) / (double)(1 << Fixed::getFractionBits()));
}