#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	this->DogBrain = new Brain();
	std::cout << "Dog created!" << std::endl;
}

Dog::~Dog() {
	delete DogBrain;
	std::cout << "Dog destroyed!" << std::endl;
}

Dog::Dog(const Dog &copy) :Animal(copy) {
	std::cout << "Dog cloned!" << std::endl;
	this->DogBrain = NULL;
	*this = copy;
}

Dog &Dog::operator=(const Dog &source) {
	std::cout << "Assignation operator called (Dog)" << std::endl;
	this->type = source.type;
	delete DogBrain;
	this->DogBrain = new Brain(*source.DogBrain);
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Gav-Gav!" << std::endl;
}
