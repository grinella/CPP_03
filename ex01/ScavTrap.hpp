#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const std::string &Name);
        ScavTrap(const ScavTrap &src);  // Aggiunto costruttore di copia
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();  // Nuova funzione specifica di ScavTrap

        ScavTrap &operator=(const ScavTrap &src);
};