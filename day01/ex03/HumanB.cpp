#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
	:name(name), club(NULL) {};

HumanB::~HumanB(void) {};

void HumanB::attack (void) const {
	if (this->club)
		std::cout << this->name << " attacks with his " << this->club->getType() << std::endl;
	else
		std::cout << this->name << " attacks with his fists" << std::endl;
}

void HumanB::setWeapon (Weapon &club) {
	this->club = &club;
	std::cout << this->name << " got weapon " << this->club->getType() << std::endl;
}
