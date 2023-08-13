#include "Zombie.hpp"

    Zombie* newZombie( std::string name);
    void randomChump( std::string name);

int main(void)
{
    Zombie *z;
    
    z = newZombie("\x1b[33mZombik from heap\x1b[33m");
    z->announce();

    randomChump("\x1b[35mZombuk from stack\x1b[35m");

    delete (z);
    return (0);
}