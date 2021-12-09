#ifndef FIXED_H__
# define FIXED_H__
# include <iostream>
# include <cmath>

class Fixed {
private:

	static const int	fractionBits;
	int					rawBits;

public:

	static int	 getFractionBits( void );
	Fixed();
	Fixed(Fixed const &copy);
	Fixed(int const &integer);
	Fixed(float const &floating);
	Fixed &operator =  (Fixed const &number);
	~Fixed();

	int getRawBits (void) const;
	void setRawBits (int const rawBits);
	float toFloat (void) const;
	int toInt (void) const;
};

std::ostream&	operator<<( std::ostream &os, const Fixed &fx );
#endif