#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ClapTrap(),
  FragTrap(100, 30),
  ScavTrap(50), name("Undefined") {
	ClapTrap::name = this->name + "_clap_trap";
	std::cout << "Nameless DiamondTrap warrior created" << std::endl;
	std::cout << "Hit Points: " << this->hitPoints << ", "
	<< "Energy Points: " << this->energyPoints << ", "
	<< "Attack Damage: " <<  this->attackDamage << std::endl;
}

DiamondTrap &DiamondTrap::operator = (DiamondTrap const &value) {
	std::cout << "I'm " << value.name << " give my all skills." << std::endl;

	ClapTrap::name = value.ClapTrap::name;
	ClapTrap::hitPoints	= value.ClapTrap::hitPoints;
	ClapTrap::energyPoints = value.ClapTrap::energyPoints;
	ClapTrap::attackDamage = value.ClapTrap::attackDamage;
	this->name			= value.name;
	this->hitPoints		= value.hitPoints;
	this->energyPoints	= value.energyPoints;
	this->attackDamage	= value.attackDamage;
	return (*this);
}

DiamondTrap::DiamondTrap(std::string const &name)
: ClapTrap(name + "_clap_trap", 10, 10, 0), FragTrap(100, 30), ScavTrap(50), name(name) {
	std::cout <<  "DiamondTrap " << name << " warrior created" << std::endl;
	std::cout << "Hitpoints: " << this->hitPoints << ", "
	<< "Energy points: " << this->energyPoints << ", "
	<< "Attack damage: " <<  this->attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
: ClapTrap(copy.ClapTrap::name, copy.ClapTrap::hitPoints, copy.ClapTrap::energyPoints, copy.ClapTrap::attackDamage),
FragTrap(copy.hitPoints, copy.attackDamage), ScavTrap(copy.energyPoints), name(copy.name) {
	std::cout << "I'm " << copy.name << " cloning and his new name "
	<< copy.name << std::endl;
	std::cout << "Hitpoints: " << this->hitPoints << ", "
	<< "Energy points: " << this->energyPoints << ", "
	<< "Attack damage: " <<  this->attackDamage << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->name << " destroyed" << std::endl;
}

void	DiamondTrap::attack(std::string const & name) {
	ScavTrap::attack(name);
}

void	DiamondTrap::takeDamage (unsigned int amount) {
	std::cout << "DiamondTrap" << this->name
	<< " take " << amount << " point of damage!" << std::endl;
	this->hitPoints -= amount;
}

void	DiamondTrap::beRepaired (unsigned int amount) {
	std::cout << "DiamondTrap " << this->name
	<< " repaired by " << amount << " health points." << std::endl;
	this->hitPoints += amount;
}

void	DiamondTrap::WhoAmI ( void ) {
	std::cout << "I am " << this->name << std::endl;
	std::cout << "I am " << ClapTrap::name << std::endl;
}