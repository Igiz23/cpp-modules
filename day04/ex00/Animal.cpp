#include "Animal.hpp"

Animal::Animal() :type("") {
	std::cout << "Animal created!" << std::endl;
}
Animal::~Animal() {
	std::cout << "Animal destroyed!" << std::endl;
}

Animal::Animal(const std::string &type) :type(type) {
	std::cout << "Animal created!" << std::endl;
}

Animal &Animal::operator=(const Animal &source) {
	this->type = source.type;
	return (*this);
}

Animal::Animal(const Animal &copy) :type(copy.type) {
	std::cout << "Animal cloned!" << std::endl;
}

const std::string &Animal::getType() const {
	return (this->type);
}

void Animal::makeSound() const {
	std::cout << "Not animal!" << std::endl;
}
