#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
    public:
        FragTrap();
        FragTrap(const std::string &Name);
        FragTrap(const FragTrap &src);
        ~FragTrap();

        void highFivesGuys();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        FragTrap &operator=(const FragTrap &src);
};