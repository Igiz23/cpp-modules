#include "Cat.hpp"

Cat::Cat() : Animal("CAT") {
	this->CatBrain = new Brain();
	std::cout << "Cat created!" << std::endl;
}

Cat::~Cat() {
	delete CatBrain;
	std::cout << "Cat destroyed!" << std::endl;
}

Cat::Cat(const Cat &copy) :Animal(copy) {
	std::cout << "Cat cloned!" << std::endl;
	this->CatBrain = NULL;
	*this = copy;
}

Cat &Cat::operator=(const Cat &source) {
	std::cout << "Assignation operator called (Cat)" << std::endl;
	this->type = source.type;
	delete CatBrain;
	this->CatBrain = new Brain(*source.CatBrain);

	return (*this);
}

void Cat::makeSound() const {
	std::cout << "MeowMeow!" << std::endl;
}