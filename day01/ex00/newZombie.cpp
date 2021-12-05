# include "Zombie.hpp"

Zombie *newZombie(std::string name) {
	Zombie *ptr = new Zombie(name);
	return (ptr);
}

void randomChump(std::string name) {
	Zombie	Zoom(name);
	Zoom.announce();
}