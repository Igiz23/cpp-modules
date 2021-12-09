#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
# include <cmath>

class Fixed {
private:
	static const int	fractionBits;
	int					rawBits;

public:

	static Fixed max(Fixed const &n1, Fixed const &n2);
	static Fixed min(Fixed const &n1, Fixed const &n2);
	static int	 getFractionBits( void );

	Fixed();
	Fixed(Fixed const &copy);
	Fixed(int const &integer);
	Fixed(float const &floating);
	Fixed(double const &doublef);

	Fixed &operator= (Fixed const &number);
	Fixed &operator= (double const &floating);
	Fixed &operator= (int const &integer);
	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator ++(int);
	Fixed operator --(int);

	~Fixed();
	int		getRawBits (void) const;
	int		toInt (void) const;
	float	toFloat	(void) const;
	void	setRawBits (int const rawBits);
};

std::ostream&	operator << ( std::ostream &os, const Fixed &fx );
bool			operator  > (Fixed const &number1, Fixed const &number2);
bool			operator  < (Fixed const &number1, Fixed const &number2);
bool			operator == (Fixed const &number1, Fixed const &number2);
bool			operator >= (Fixed const &number1, Fixed const &number2);
bool			operator <= (Fixed const &number1, Fixed const &number2);
bool			operator != (Fixed const &number1, Fixed const &number2);
Fixed			operator  + ( Fixed number1, Fixed number2 );
Fixed			operator  - ( Fixed number1, Fixed number2 );
Fixed			operator  * ( Fixed number1, Fixed number2 );
Fixed			operator  / ( Fixed number1, Fixed number2 );
#endif
