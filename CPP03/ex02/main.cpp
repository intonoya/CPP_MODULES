#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap("Klepik");
    FragTrap frag("Gvenik");
    ScavTrap scav("Mesropik");

    scav.attack("Gvenik");
    frag.highFivesGuys();
    frag.attack("Klepik");
    clap.attack("Gvenik");
    frag.takeDamage(10);
    frag.beRepaired(10);

    return (0);
}