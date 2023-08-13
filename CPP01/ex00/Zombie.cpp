#include "Zombie.hpp"

Zombie :: Zombie(std::string name)
{
    this->_name = name;
    std::cout << name << ": was born" << std::endl;
}

Zombie :: ~Zombie(void)
{
    std::cout << this->_name << ": has died" << std::endl;
}

void    Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}