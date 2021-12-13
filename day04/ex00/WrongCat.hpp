#ifndef WRONGCAT_H
#define WRONGCAT_H
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(WrongCat const &);
	WrongCat& operator = (WrongCat const &);
	virtual ~WrongCat();
	void makeSound( void ) const;
};

#endif
