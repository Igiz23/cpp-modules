#ifndef CPP_MODULES_HUMANB_HPP
#define CPP_MODULES_HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {

private:

	std::string name;
	Weapon *club;

public:

	HumanB (const std::string &name);
	~HumanB (void);

	void attack (void) const;
	void setWeapon (Weapon &club);
};

#endif
