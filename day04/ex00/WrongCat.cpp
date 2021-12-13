#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WRONGCAT") {
	std::cout << "WrongCat created!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructed!" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy):WrongAnimal(copy) {
	std::cout << "WrongCat cloned!" << std::endl;
}

WrongCat&	WrongCat::operator = (WrongCat const &source) {
	this->type = source.type;
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "MEOW, MEOW!!!" << std::endl;
}