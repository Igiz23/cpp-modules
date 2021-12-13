#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	Dog(Dog const &copy);
	Dog& operator = (Dog const &source);
	virtual ~Dog();
	virtual void makeSound( void ) const;
};


#endif