#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie 
{
    private:
        std::string _name;
    public:
        Zombie(void);
        ~Zombie(void);
        void set_name (std::string name);
        void announce (void);
};

#endif