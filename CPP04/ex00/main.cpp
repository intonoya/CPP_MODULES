#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << "\x1b[36m j type: \x1b[36m" << j->getType() << " " << std::endl;
    std::cout << "\x1b[36m i type: \x1b[36m" << i->getType() << " " << std::endl;

    i->makeSound(); // will output the cat sound
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    std::cout << "\x1b[31m This is WrongAnimal testing! \x1b[31m" << std::endl;
    
    const WrongAnimal *wAnimal = new WrongAnimal();
    const WrongAnimal *wCat = new WrongCat();

    std::cout << " WrongCat type: " << wCat->getType() << " " << std::endl;
    wCat->makeSound();
    wAnimal->makeSound();

    delete wAnimal;
    delete wCat;

    return 0;
}