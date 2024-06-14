#pragma once

#include <iostream>
#include <string>

class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const std::string &Name);
        ~ScavTrap();

        std::string getName();
		int		getHitPoints();
		int		getEnergyPoints();
		int		getAttackDamage();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ScavTrap &operator=(const ScavTrap &src);
};