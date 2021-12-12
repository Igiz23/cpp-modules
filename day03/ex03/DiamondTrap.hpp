#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
	std::string		name;
public:
	DiamondTrap();
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &copy);
	DiamondTrap &operator = (DiamondTrap const &value);
	~DiamondTrap();
	void attack (std::string const &name);
	void	takeDamage (unsigned int amount);
	void	beRepaired (unsigned int amount);
	void			WhoAmI ( void );
		};
#endif
