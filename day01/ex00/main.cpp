# include "Zombie.hpp"

int main (void) {
	Zombie	*ZombieAlex;
	Zombie	*ZombieBill;

	ZombieBill = newZombie("Bill");
	randomChump("Kate");
	randomChump("Boris");
	ZombieAlex = newZombie("Alex");

	ZombieAlex->announce();
	ZombieBill->announce();
	delete	ZombieAlex;
	delete ZombieBill;
	return (0);
}