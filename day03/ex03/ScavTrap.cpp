#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
: ClapTrap( "Undefined", 100, 10, 20), energyPoints(50) {
	std::cout << "Undefined FrapTrap warrior created" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name)
: ClapTrap (name, 100, 10, 20), energyPoints(50) {
	std::cout << "ScavTrap " << name << " is ready" << std::endl;
}

ScavTrap::ScavTrap(int energyPoints): energyPoints(energyPoints) {
	std::cout << "ScavTrap created!" << std::endl;

}

ScavTrap::ScavTrap(ScavTrap const &copy)
: ClapTrap (copy), energyPoints(50) {
	std::cout << "I'm " << copy.name
	<< " cloning and his new name "
	<< copy.name << "!" << std::endl;
}

ScavTrap &ScavTrap::operator = (ScavTrap const &value) {
	std::cout << "I'm " << value.name
	<< " gave my all skills." << std::endl;

	this->name			= value.name;
	this->hitPoints		= value.hitPoints;
	this->energyPoints	= value.energyPoints;
	this->attackDamage	= value.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->name << " destroyed!" << std::endl;
}

void ScavTrap::guardGate() {
	this->energyPoints -= 30;
	std::cout << "ScavTrap " << this->name << " enabled gate keeper mode" << std::endl;
	this->beRepaired(500);
}

void	ScavTrap::attack(std::string const &name) {
	std::cout << "ScavTrap " << this->name << " attack " << name << " causing "
	<< this->attackDamage <<  " point of damage!" << std::endl;
	std::cout << "Energy wasted " << this->attackDamage << " points" << std::endl;
	this->energyPoints -= this->attackDamage;
}

void	ScavTrap::takeDamage (unsigned int amount) {
	std::cout << "ScavTrap" << this->name << " take " << amount
	<< " point of damage!" << std::endl;
	this->hitPoints -= amount;
}

void	ScavTrap::beRepaired ( unsigned int amount ) {
	std::cout << "ScavTrap " << this->name << " repaired by "
	<< amount << " health points." << std::endl;
	this->hitPoints += amount;
}
