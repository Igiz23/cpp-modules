#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
class ClapTrap {
protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
	ClapTrap(std::string const &name, unsigned int hitPoints,
			 unsigned int energyPoints, unsigned int attackDamage);
public:

	ClapTrap();
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &copy);
	ClapTrap &operator =(ClapTrap const &value);
	virtual ~ClapTrap();

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif
