#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	:name("Undefined"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Undefined ClapTrap warrior created." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
	:name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " is crated." << std::endl;
}

ClapTrap::ClapTrap(std::string const &name, unsigned int hitPoints,
	unsigned int energyPoints, unsigned int attackDamage)
	: name(name), hitPoints(hitPoints), energyPoints(energyPoints),
	attackDamage(attackDamage) {
	std::cout << "ClapTrap for child-constructor " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
	:name(copy.name), hitPoints(copy.hitPoints),
	energyPoints(copy.energyPoints), attackDamage(copy.attackDamage) {
	std::cout << "I'm " << copy.name << " cloning and his new name "
	<< copy.name << std::endl;
}

ClapTrap &ClapTrap::operator =(ClapTrap const &value) {
	std::cout << "I'm " << value.name << " give my all skills." << std::endl;
	this->name = value.name;
	this->hitPoints = value.hitPoints;
	this->energyPoints = value.energyPoints;
	this->attackDamage = value.energyPoints;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->name << " attack " << target << " causing "
	<< this->attackDamage <<  " point of damage!" << std::endl;
	std::cout << "Energy wasted " << this->attackDamage << " points" << std::endl;
	this->energyPoints -= this->attackDamage;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " take " << amount
	<< " point of damage!" << std::endl;

	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " repaired by " << amount
	<< " health points." << std::endl;
	this->hitPoints += amount;
}
