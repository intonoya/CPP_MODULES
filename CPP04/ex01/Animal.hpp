#ifndef ANIMAP_HPP
# define ANIMAP_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string &type);
        Animal(const Animal &copy);
        virtual ~Animal();

        Animal &operator=(const Animal &copy);
        const std::string   &getType() const;
        virtual void        makeSound() const;
};

#endif