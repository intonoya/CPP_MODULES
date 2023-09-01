#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap("Halal");
    ScavTrap scav("Zulal");

    scav.guardGate();
    scav.attack("Halal");
    clap.attack("Zulal");
    scav.takeDamage(10);
    scav.beRepaired(10);

    return (0);
}