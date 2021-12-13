#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	this->DogBrain = new Brain();
	std::cout << "Dog created!" << std::endl;
}

Dog::~Dog() {
	delete this->DogBrain;
	std::cout << "Dog destroyed!" << std::endl;
}

Dog::Dog(const Dog &copy) :Animal(copy) {
	std::cout << "Dog cloned!" << std::endl;
	this->DogBrain = NULL;
	*this = copy;
}

Dog &Dog::operator=(const Dog &source) {
	this->type = source.type;
	this->~Dog();
	this->DogBrain = new Brain(*source.DogBrain);
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Gav-Gav!" << std::endl;
}
