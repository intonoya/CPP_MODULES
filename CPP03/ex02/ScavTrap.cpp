#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attack = 20;
    _name = "ScavTrap";
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attack = 20;
    std::cout << "ScavTrap constructor with a parameter called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
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

void    ScavTrap::guardGate() const
{
    std::cout << "ScavTrap guardGate called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hitPoints <= 0)
    {
        std::cout << "Error: There is not enough hit points!" << std::endl;
        return ;
    }
    else if (_energyPoints <= 0)
    {
        std::cout << "Error: There is not enough energy!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
    << _attack << " points of damage!" << std::endl;
    _energyPoints--;
}
