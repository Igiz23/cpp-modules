#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog created!" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destroyed!" << std::endl;
}

Dog::Dog(const Dog &copy) :Animal(copy) {
	std::cout << "Dog cloned!" << std::endl;
}

Dog &Dog::operator=(const Dog &source) {
	this->type = source.type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Gav-Gav!" << std::endl;
}
