# include "Zombie.hpp"

int main (void) {
	Zombie				*Orda;
	int 				N = 5;
	std::string	name =	"Orda";

	Orda = zombieHorde(N, name);
	for(int i = 0; i < N; i++) {
		Orda[i].announce();
	}
	delete [] Orda;
	return (0);
}