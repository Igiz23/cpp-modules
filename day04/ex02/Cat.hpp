#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Dog.hpp"

class Cat : public Animal {
protected:
	Brain *CatBrain;
public:
	Cat();
	Cat(Cat const &copy);
	Cat& operator = (Cat const &source);
	virtual ~Cat();
	virtual void makeSound( void ) const;
};

#endif
