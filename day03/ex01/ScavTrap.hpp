#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &copy);
	ScavTrap &operator=(ScavTrap const &value);

	~ScavTrap();
	void attack (std::string const &name);
	void takeDamage (unsigned int amount);
	void beRepaired (unsigned int amount);
	void guardGate ();
};

#endif
