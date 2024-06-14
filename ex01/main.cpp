#include "ClapTrap.hpp"

int main() {
    ClapTrap Fuuee("Fuuee");
    ClapTrap Fein("Fein");

    std::cout << std::endl;

    Fuuee.attack("Fein");

    std::cout << std::endl;

    Fein.takeDamage(5);

    std::cout << std::endl;

    Fuuee.beRepaired(3);

    std::cout << std::endl;

    Fuuee.attack("Fein");

    std::cout << std::endl;

    return 0;
}