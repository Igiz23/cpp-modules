#include "Cat.hpp"

Cat::Cat() : Animal("CAT") {
	std::cout << "Cat created!" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destroyed!" << std::endl;
}

Cat::Cat(const Cat &copy) :Animal(copy) {
	std::cout << "Cat cloned!" << std::endl;
}

Cat &Cat::operator=(const Cat &source) {
	this->type = source.type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "MeowMeow!" << std::endl;
}