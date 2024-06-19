#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    Name = "DefaultScav";
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "Default ScavTrap created." << std::endl;
}

ScavTrap::ScavTrap(const std::string &Name) {
    this->Name = Name;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap " << Name << " created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src){
    *this = src;
    std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << Name << " destroyed." << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (EnergyPoints > 0 && HitPoints > 0) {
        std::cout << "ScavTrap " << Name << " attacks " << target 
                  << ", causing " << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    } else {
        std::cout << "ScavTrap " << Name << " can't attack!" << std::endl;
    }
}

void ScavTrap::takeDamage(unsigned int amount) {
    HitPoints -= amount;
    std::cout << "ScavTrap " << Name << " takes " << amount 
              << " points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    if (EnergyPoints > 0 && HitPoints > 0) {
        HitPoints += amount;
        std::cout << "ScavTrap " << Name << " repairs itself, gaining " 
                  << amount << " hit points!" << std::endl;
        EnergyPoints--;
    } else {
        std::cout << "ScavTrap " << Name << " can't repair itself!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << Name << " has entered Gate Keeper mode." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
    std::cout << "ScavTrap copy assignment operator called." << std::endl;
    if (this != &src) {
        this->Name = src.Name;
        this->HitPoints = src.HitPoints;
        this->EnergyPoints = src.EnergyPoints;
        this->AttackDamage = src.AttackDamage;
    }
    return *this;
}