#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main (void) {
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("dagger");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("fork");
		jim.attack();
	}
	return (0);
}