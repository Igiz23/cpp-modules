#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created!" << std::endl;
}

Brain::Brain(Brain &copy) {
	std::cout << "Brain cloned!" << std::endl;
	*this = copy;
}

Brain::~Brain() {
	std::cout << "Brain destroyed!" << std::endl;
}

Brain &Brain::operator=(Brain &source) {
	std::cout << "Assignation operator called from Brain!" << std::endl;
	for(int i = 0; i < 100; i++)
		this->idea[i] = source.idea[i];
	return (*this);
}