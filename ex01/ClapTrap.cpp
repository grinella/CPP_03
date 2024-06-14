#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &Name)
    : Name(Name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
    std::cout << "ClapTrap " << Name << " created." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << Name << " destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (EnergyPoints > 0 && HitPoints > 0) {
        std::cout << "ClapTrap " << Name << " attacks " << target 
                  << ", causing " << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    } else {
        std::cout << "ClapTrap " << Name << " can't attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    HitPoints -= amount;
    std::cout << "ClapTrap " << Name << " takes " << amount 
              << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (EnergyPoints > 0 && HitPoints > 0) {
        HitPoints += amount;
        std::cout << "ClapTrap " << Name << " repairs itself, gaining " 
                  << amount << " hit points!" << std::endl;
        EnergyPoints--;
    } else {
        std::cout << "ClapTrap " << Name << " can't repair itself!" << std::endl;
    }
}


ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->Name = src.Name;
	return *this;
}