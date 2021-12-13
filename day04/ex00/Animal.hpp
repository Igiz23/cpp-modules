#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal {
protected:
	std::string type;
	Animal(std::string const &type);

public:
	Animal();
	Animal(Animal const &copy);
	Animal&	operator = (Animal const &source);
	virtual ~Animal();

	std::string  const &getType(void) const;
	virtual void makeSound(void) const;
};


#endif
