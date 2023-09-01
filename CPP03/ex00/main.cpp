#include "ClapTrap.hpp"

int main(void)
{
    std::string clap1_name = "Mika";
    std::string clap2_name = "Kirbi";
    ClapTrap clap1(clap1_name);
    ClapTrap clap2(clap2_name);

    clap1.attack(clap2_name);
    clap2.beRepaired(5);
    clap2.takeDamage(2);

    clap2.attack(clap1_name);
    clap1.beRepaired(5);
    clap1.takeDamage(10);

    return (0);
}