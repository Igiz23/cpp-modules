#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main () {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::string		str;

	const Animal* copy_j = new Dog(*((Dog *)j));

	j->makeSound();
	i->makeSound();
	copy_j->makeSound();

	delete j;
	delete i;
	delete copy_j;

	return (0);
}