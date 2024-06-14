#include "ClapTrap.hpp"

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap clap("Jasmine");
    ScavTrap scav("Zehra");

    std::cout << std::endl;
    clap.attack("Luigi");
    scav.attack("Gabriele");

    clap.takeDamage(5);
    scav.takeDamage(15);

    clap.beRepaired(3);
    scav.beRepaired(20);

    scav.guardGate();

    std::cout << std::endl;

    return 0;
}