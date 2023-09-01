#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon *_the_weapon_type;
    public:
        HumanB(const std::string &name);
        void setWeapon(Weapon &the_weapon_type);
        void attack(void);
};


#endif