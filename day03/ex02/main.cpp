#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	FragTrap A("Frag");

	A.highFivesGuys();
	A.takeDamage(40);
	A.beRepaired(50);
	return (0);
}