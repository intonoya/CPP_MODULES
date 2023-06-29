#include "PhoneBook.hpp"

int PhoneBook::check_digits(std::string str)
{
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
       if (!(isdigit(str[i])))
       {
            std::cout<<"Error: Input Valid Number! "<<std::endl;
            return 1;
       }
    }
    return 0;
}

int PhoneBook::check_char(std::string str)
{
    int size = str.length();
    for (int i = 0; i <size; i++)
    {
        if (!(isalpha(str[i])))
       {
            return 1;
       }
    }
    return 0;
}

void PhoneBook::the_dot(std::string str)
{
    int i;

    i = 0;
    while(i < 9)
    {
        std::cout<<str[i];
        i++;
    }
    std::cout<<".";
}

void PhoneBook::the_space(int len)
{
    while (len)
    {
        std::cout<<" ";
        len--;
    }
}