#include "HumanA.hpp"

HumanA ::  HumanA(const std::string &name, Weapon &the_weapon_type) : _the_weapon_type(the_weapon_type)
{
    this->_name = name;
}

void HumanA:: attack(void)
{
    std::cout << _name << " attacks with their " << _the_weapon_type.getType();
}