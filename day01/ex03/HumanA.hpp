#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
private:

	std::string name;
	Weapon &club;

public:

	HumanA (const std::string &name, Weapon &club);
	~HumanA ();

	void attack (void) const;
};

#endif
