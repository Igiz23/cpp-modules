#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap :virtual public ClapTrap {
protected:
	int hitPoints;
	int attackDamage;
public:
	FragTrap();
	FragTrap(int hitPoints, int attackDamage);
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &copy);
	FragTrap &operator=(FragTrap const &value);
	~FragTrap();
	void attack (std::string const &name);
	void takeDamage	(unsigned int amount);
	void beRepaired	(unsigned int amount);
	void highFivesGueys();
};


#endif
