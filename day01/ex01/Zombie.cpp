#include "Zombie.hpp"

Zombie::Zombie(void) {
}

Zombie::~Zombie() {
	std::cout << "Zombie "  << this->name << " is dead!" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(int id, std::string name) {
	this->name = name;
	std::cout << id << "| Zombie " << name << " is awake!" << std::endl;
}
