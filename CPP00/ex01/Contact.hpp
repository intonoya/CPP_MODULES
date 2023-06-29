#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
            std::string _firstname;
            std::string _lastname;
            std::string _nickname;
            std::string _number;
            std::string _secret;
    public:
            Contact();
            ~Contact();
            std::string get_first_name() const;
            std::string get_last_name() const;
            std::string get_nickname() const;
            std::string get_phone_number() const;
            std::string get_darkest_secret() const;
            void    set_first_name(std::string);
            void    set_last_name(std::string);
            void    set_nickname(std::string);
            void    set_phone_number(std::string);
            void    set_darkest_secret(std::string);
};

#endif