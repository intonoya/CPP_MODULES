#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "\x1b[36m Animal default constructor called \x1b[36m" << std::endl;
}

Animal::Animal(const std::string &type)
{
    this->type = type;
    std::cout << "\x1b[36m Animal constructor with parameter called \x1b[36m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    this->type = copy.type;
    std::cout << "\x1b[36m Animal copy constructor called \x1b[36m" << std::endl;
}

Animal::~Animal()
{
    std::cout << "\x1b[36m Animal destructor called \x1b[36m" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    if(this != &copy)
        this->type = copy.type;
    return (*this);
}

const std::string &Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "\x1b[36m Animal sound \x1b[36m" << std::endl;
}