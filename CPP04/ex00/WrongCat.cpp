#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << " WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal("Cat")
{
    *this = copy;
    std::cout << " WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    if(this != &copy)
        this->type = copy.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << " WrongCat destructor called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << " not meow" << std::endl;
}