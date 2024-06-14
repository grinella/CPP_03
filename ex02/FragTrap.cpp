#include "FragTrap.hpp"

FragTrap::FragTrap() {
    Name = "DefaultFrag";
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "Default FragTrap created." << std::endl;
}

FragTrap::FragTrap(const std::string &Name) {
    this->Name = Name;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap " << Name << " created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) {
    *this = src;
    std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << Name << " destroyed." << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << Name << " is asking for a high five!" << std::endl;
}

void FragTrap::attack(const std::string &target) {
    if (EnergyPoints > 0 && HitPoints > 0) {
        std::cout << "FragTrap " << Name << " attacks " << target 
                  << ", causing " << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    } else {
        std::cout << "FragTrap " << Name << " can't attack!" << std::endl;
    }
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
    std::cout << "FragTrap copy assignment operator called." << std::endl;
    if (this != &src) {
        this->Name = src.Name;
        this->HitPoints = src.HitPoints;
        this->EnergyPoints = src.EnergyPoints;
        this->AttackDamage = src.AttackDamage;
    }
    return *this;
}