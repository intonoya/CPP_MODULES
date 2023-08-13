#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie(void)
{
    std::cout << this->_name << "\x1b[31mhas died\x1b[31m" << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
}

void Zombie::announce(void) const
{ 
    std::cout << this->_name << "\x1b[32mBraiiiiiiinnnzzzZ\x1b[32m" << std::endl;
}