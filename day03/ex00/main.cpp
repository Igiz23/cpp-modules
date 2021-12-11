#include "ClapTrap.hpp"

int main (void) {

	ClapTrap Boba("Boba");
	ClapTrap Undefined;
	ClapTrap Undefined1;
	ClapTrap K(Boba);

	ClapTrap k = Boba;

	ClapTrap u;

	u = Boba;

	Undefined = Boba;
	Boba.attack("Adasd");
	Boba.takeDamage( 5 );
	Boba.beRepaired( 10 );
	return (0);
}