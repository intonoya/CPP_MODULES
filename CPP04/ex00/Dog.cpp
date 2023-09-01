#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "\x1b[32m Dog constructor called \x1b[32m" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal("Dog")
{
    *this = copy;
    std::cout << "\x1b[32m Dog copy constructor called \x1b[32m" << std::endl;
}

Dog &Dog::operator=(const Dog &ob)
{
    if(this != &ob)
        this->type = ob.type;
    return (*this); 
}

Dog::~Dog()
{
    std::cout << "\x1b[32m Dog destructor called \x1b[32m" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "\x1b[32m bark \x1b[32m" << std::endl;
}