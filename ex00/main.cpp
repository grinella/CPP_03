#include "ClapTrap.hpp"

int main() {
    ClapTrap npc("ClapTrack");

    npc.attack("target1");
    npc.takeDamage(5);
    npc.beRepaired(3);
    npc.attack("target2");

    return 0;
}