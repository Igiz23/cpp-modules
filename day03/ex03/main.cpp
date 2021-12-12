#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

#define LINE  std::cout << "----------------------------------" << std::endl;

int main (void)
{
	DiamondTrap d;
	LINE
	DiamondTrap d1("Aigiz");
	LINE
	DiamondTrap d2(d1);
	LINE
	d1 = d;
	LINE
	d2.WhoAmI();
	LINE
	d2.attack("Someone");
	LINE
	d2.beRepaired(20);
	LINE
	d2.takeDamage(10);
	LINE
	return (0);
}