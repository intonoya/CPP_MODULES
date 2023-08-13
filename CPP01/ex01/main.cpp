#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name);

int main(void)
{
    int n;
    Zombie *zombie_horde;

    std::cout << "\x1b[36mEnter n = \x1b[36m";
    std::cin >> n;
    std::cout << "\n";
    zombie_horde = zombieHorde(n, "\x1b[36mZombik: \x1b[36m");
    for (int i = 0; i < n; i++)
        zombie_horde[i].announce();
    delete[] zombie_horde;
    return (0);
}