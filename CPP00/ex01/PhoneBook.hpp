#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>

class PhoneBook
{
    private:
        int _size;
        int _index;
        Contact _contact[8];

    public:
        PhoneBook();
        ~PhoneBook();
        int     get_size() const;
        void    Search();
        void    add_contact(std::string data[5]);
        void    Add();
        int     check_errors(std::string str, int index);
        void    display_contacts();
        int     check_digits(std::string str);
        int     check_char(std::string str);
        void    the_space(int len);
        void    the_dot(std::string str);

};

#endif