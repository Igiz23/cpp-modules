#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
protected:
	Brain *DogBrain;
public:
	Dog();
	Dog(Dog const &copy);
	Dog& operator = (Dog const &source);
	virtual ~Dog();
	virtual void makeSound( void ) const;
};


#endif