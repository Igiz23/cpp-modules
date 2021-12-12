#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

	int main (void)
	{
		ScavTrap A("Hero");
		ScavTrap B(A);
		ScavTrap C;

		A.attack("BugaBuga");
		A.takeDamage(30);
		C = A;
		C.beRepaired(35);
		A.guardGate();
		C.guardGate();
		B.guardGate();
		return (0);
	}