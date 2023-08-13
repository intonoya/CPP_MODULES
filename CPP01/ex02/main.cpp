#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "\x1b[36mThe memory address of the string variable: \x1b[36m" << &str << std::endl;
    std::cout << "\x1b[32mThe memory address held by stringPTR: \x1b[32" << stringPTR << std::endl;
    std::cout << "\x1b[35mThe memory address held by stringREF: \x1b[35" << &stringREF << std::endl;

    std::cout << "\x1b[36mThe value of the string variable: \x1b[36m" << str << std::endl;
    std::cout << "\x1b[32mThe value pointed to by stringPTR: \x1b[32m" << *stringPTR << std::endl;
    std::cout << "\x1b[35mThe value pointed to by stringREF: \x1b[35m" << stringREF << std::endl;
}