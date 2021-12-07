#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
private:

	static const int	fractionBits;
	int					rawBits;

public:

	Fixed();
	Fixed(Fixed &copy);
	Fixed &operator = ( Fixed &rawBits );
	~Fixed();

	int		getRawBits ( void ) const;
	void	setRawBits (int const rawBits);
};

#endif
