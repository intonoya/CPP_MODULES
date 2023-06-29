#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _size(0), _index(0) {}

PhoneBook :: ~PhoneBook(){}

int PhoneBook::check_errors(std::string str, int index)
{
    if (index == 1)
    {
        if(check_char(str) || str.length() == 0)
        {
            std::cout<<"\x1b[31m\nError: The Input Is Not Correct. Try Again:\x1b[31m ";
            return 1;
        }
        return 0;
    }
    if (index == 2)
    {
         if(check_digits(str) || str.length() == 0)
        {
            std::cout<<"\x1b[31m\nError: The Input Is Not Correct. Try Again:\x1b[31m ";
            return 1;
        }
        return 0;
    }
    else 
    {
        if (str.length() == 0)
        {
            std::cout<<"\x1b[31m\nError: The Input Is Not Correct. Try Again:\x1b[31m ";
            return 1;
        }
        return 0;
    }
}

 int     PhoneBook::get_size() const
{
    return (this->_size);
}

void PhoneBook::Add()
{
    std::string str;
    int index;
    index = this->_index;

    std::cout<<std::endl;
    std::cout<<"\x1b[36mEnter Contact Information\x1b[36m" << std::endl;
    std::cout<<std::endl;
    std::cout<<"\x1b[36mEnter First Name:\x1b[36m ";
    label1 :
        std::getline(std::cin,str);
        if(std::cin.eof()){return ;}
        if (check_errors(str, 1)){goto label1;}
    _contact[index].set_first_name(str);
    str.clear();

    std::cout<<"\x1b[36mEnter Last Name:\x1b[36m ";
     label2:
        std::getline(std::cin, str); 
        if(std::cin.eof()){return ;}   
        if (check_errors(str, 1)){goto label2;}
    _contact[index].set_last_name(str);
    str.clear();

    std::cout<<"\x1b[36mEnter Nickname:\x1b[36m ";
    label3:
        std::getline (std::cin,str);
        if(std::cin.eof()){return ;}   
        if (check_errors(str, 3)){goto label3;}
    _contact[index].set_nickname(str);
    str.clear();

    std::cout<<"\x1b[36mEnter Phone Number:\x1b[36m ";
    label4:
        std::getline (std::cin,str);
        if(std::cin.eof()){return ;}   
        if (check_errors(str, 2)){goto label4;}
    _contact[index].set_phone_number(str);
    str.clear();

    std::cout<<"\x1b[36mEnter Darkest Secret:\x1b[36m ";
    label5:
        std::getline (std::cin,str);
        if(std::cin.eof()){return ;}   
        if (check_errors(str, 3)){goto label5;}
    _contact[index].set_darkest_secret(str);
    std::cout << "\x1b[32mContact Added Successfully!\x1b[32m"<< std::endl;
    str.clear();
    this->_index = (index + 1) % 8;
    if (this->_size < 8)
        this->_size++;
}

void PhoneBook::display_contacts()
{
    int i = 0;
    int true_len = 10;
    int smt = 0;
    while(i < _size)
    { 
        std::cout<<i;
        std::cout<<"|";
        if((_contact[i].get_first_name()).length() <=10)
        {
            the_space(true_len - _contact[i].get_first_name().length());
            
            std::cout<<_contact[i].get_first_name()<<"|";
        }
        else 
        {
            the_dot(_contact[i].get_first_name());
            std::cout<<"|";
        }
        if(_contact[i].get_last_name().length() < 10)
        {
            the_space(true_len - (_contact[i].get_last_name()).length());
            std::cout<<_contact[i].get_last_name()<<"|";
        }
        else 
        {
            the_dot(_contact[i].get_last_name());
            std::cout<<"|";
        }
        if((_contact[i].get_nickname()).length() < 10)
        {
            smt = true_len - (_contact[i].get_nickname()).length();
            the_space(smt);
            std::cout<<_contact[i].get_nickname();
        }
         else the_dot(_contact[i].get_nickname());
           std::cout<<std::endl;
        i++;
    }
}

void PhoneBook::Search()
{
    std::string str;
    int         index;

    std::cout<<std::endl;
    display_contacts();
    std::cout << std::endl;
    std::cout<<"\x1b[36mInsert The Contact Index:\x1b[36m ";
	std::getline(std::cin, str);
    if(str.length() == 1 && str[0]>='0' && str[0] <= '7')
    {
        index = atoi(str.c_str());
        str.clear();
        if(index >= 0 && index <= 7 && index < _size && index < get_size())
        {
            std::cout<<std::endl;
            std::cout<<"First Name: "<<_contact[index].get_first_name()<<std::endl;
            std::cout<<"Last Name: "<<_contact[index].get_last_name()<<std::endl;
            std::cout<<"Nickname: "<<_contact[index].get_nickname()<<std::endl;
            std::cout<<"Phone Number: "<<_contact[index].get_phone_number()<<std::endl;
            std::cout<<"Darkest Secret: "<<_contact[index].get_darkest_secret()<<std::endl<<std::endl;
        }
        else 
            std::cout<<"\x1b[31mError: The Contact Does Not Exist!\x1b[31m"<<std::endl;
    }
    else
      std::cout<<"\x1b[31mError: Invalid Index!\x1b[31m"<<std::endl;
    if(std::cin.eof()){return ;}
}