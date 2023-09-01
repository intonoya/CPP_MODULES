#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "\x1b[32m Cat constructor called \x1b[32m" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal("Cat")
{
    *this = copy;
    std::cout << "\x1b[32m Cat copy constructor called \x1b[32m" << std::endl;
}

Cat &Cat::operator=(const Cat &ob)
{
    if(this != &ob)
        this->type = ob.type;
    return (*this); 
}

Cat::~Cat()
{
    std::cout << "\x1b[32m Cat destructor called \x1b[32m" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "\x1b[32m meow \x1b[32m" << std::endl;
}