#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 1)
        std::cout << "\x1b[31mError: Zombie number error!\x1b[31m" << std::endl;
    
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].set_name(name);
    return (zombies);
}