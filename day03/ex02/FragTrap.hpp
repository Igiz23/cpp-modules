#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &copy);
	FragTrap &operator=(FragTrap const &value);
	~FragTrap();
	virtual void attack (std::string const &name);
	virtual void takeDamage	(unsigned int amount);
	virtual void beRepaired	(unsigned int amount);
	void highFivesGuys();
};


#endif
