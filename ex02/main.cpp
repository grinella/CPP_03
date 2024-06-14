#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap clap("Booh");
    ScavTrap scav("Scary");
    FragTrap frag("Fraggy");

    std::cout << std::endl;

    clap.attack("goodguy");
    scav.attack("goodgirl");
    frag.attack("goodbay");

    std::cout << std::endl;

    clap.takeDamage(5);
    scav.takeDamage(15);
    frag.takeDamage(25);

    std::cout << std::endl;

    clap.beRepaired(3);
    scav.beRepaired(20);
    frag.beRepaired(30);

    std::cout << std::endl;

    scav.guardGate();
    frag.highFivesGuys();

    std::cout << std::endl;

    return 0;
}