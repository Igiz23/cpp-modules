#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &club)
	:name(name), club(club) {};

HumanA::~HumanA (void) {};

void HumanA::attack() const {
	std::cout << this->name << " attacks with his " << this->club.getType() << std::endl;
}
