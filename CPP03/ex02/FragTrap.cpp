#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attack = 30;
    _name = "FragTrap";
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attack = 30;
    std::cout << "FragTrap constructor with a parameter called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
    if(this != &copy)
    {
        _name = copy._name;
        _hitPoints = copy._hitPoints;
        _energyPoints = copy._energyPoints;
        _attack = copy._attack;
    }
    return (*this);
}
void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap highFivesGuys called" << std::endl;
}
