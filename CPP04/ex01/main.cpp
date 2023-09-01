#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal *j = new Dog();
    // const Animal *i = new Cat();

    // delete j;
    // delete i;

    Animal *animals[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    animals[4]->makeSound();
    animals[9]->makeSound();

    for (int i = 0; i < 10; i++)
        delete animals[i];
    return 0;
}