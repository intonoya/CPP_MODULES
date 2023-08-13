#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _the_weapon_type(NULL)
{
    _name = name;
}

void HumanB::setWeapon(Weapon &the_weapon_type)
{
    _the_weapon_type = &the_weapon_type;
}

void HumanB::attack(void) const
{
    std::cout << _name << " attacks with their " << _the_weapon_type->getType() << std::endl;
}