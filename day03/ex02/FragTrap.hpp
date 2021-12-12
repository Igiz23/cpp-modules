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
	void attack (std::string const &name);
	void takeDamage	(unsigned int amount);
	void beRepaired	(unsigned int amount);
	void highFivesGuys();
};


#endif
