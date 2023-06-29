#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

std::string Contact::get_first_name() const
{
    return (this->_firstname);
}

std::string Contact::get_last_name() const
{
    return (this->_lastname);
}

std::string Contact::get_nickname() const
{
    return (this->_nickname);
}

std::string Contact::get_phone_number() const
{
    return (this->_number);
}

std::string Contact::get_darkest_secret() const
{
    return (this->_secret);
}

void Contact::set_first_name(std::string str)
{
    this->_firstname = str;
}

void Contact::set_last_name(std::string str)
{
    this->_lastname = str;
}

void Contact::set_nickname(std::string str)
{
    this->_nickname = str;
}

void Contact::set_phone_number(std::string str)
{
    this->_number = str;
}

void Contact::set_darkest_secret(std::string str)
{
    this->_secret = str;
}