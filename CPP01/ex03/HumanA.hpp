#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon &_the_weapon_type;
    public:
        HumanA(const std::string &name, Weapon &the_weapon_type);
        void attack(void);
};

#endif