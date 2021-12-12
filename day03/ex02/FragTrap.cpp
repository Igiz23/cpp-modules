#include "FragTrap.hpp"

FragTrap::FragTrap()
: ClapTrap( "Undefined", 100, 100, 30) {
	std::cout << "Undefined FrapTrap warrior created" << std::endl;
}

FragTrap::FragTrap(std::string const &name)
: ClapTrap (name, 100, 100, 30) {
	std::cout << "FragTrap " << name << " is ready for battle" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
: ClapTrap (copy.name, copy.hitPoints, copy.energyPoints, copy.attackDamage) {
	std::cout << "I'm " << copy.name << " cloning and his new name "
	<< copy.name << "!" << std::endl;
}

FragTrap &FragTrap::operator = (FragTrap const &value) {
	std::cout << "I'm " << value.name << " give my all skills." << std::endl;
	this->name			= value.name;
	this->hitPoints		= value.hitPoints;
	this->energyPoints	= value.energyPoints;
	this->attackDamage	= value.attackDamage;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << this->name << " Combo!!!:" << std::endl;
	for(int i = 0; i < 5; i++)
	{
		std::cout << "BoomBOOM!!!!!" << std::endl;
	}
	std::cout << "Causing damage!!!!" << std::endl;
	this->energyPoints -= 30;
}

void	FragTrap::attack(std::string const & name) {
	std::cout << "FragTrap " << this->name << " attack " << name << " causing "
	<< this->attackDamage <<  " point of damage!" << std::endl;
	std::cout << "Energy wasted " << this->attackDamage << " points" << std::endl;
	this->energyPoints -= this->attackDamage;
}

void	FragTrap::takeDamage (unsigned int amount) {
	std::cout << "FragTrap" << this->name << " take " << amount
	<< " point of damage!" << std::endl;
	this->hitPoints -= amount;
}

void	FragTrap::beRepaired (unsigned int amount) {
	std::cout << "FragTrap " << this->name << " repaired by " << amount
	<< " health points." << std::endl;
	this->hitPoints += amount;
}