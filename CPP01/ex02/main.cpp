#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "\x1b[36m The memory address of the string variable: \x1b[36m" << &str << std::endl;
    std::cout << "\x1b[32m The memory address held by stringPTR: \x1b[32m" << stringPTR << std::endl;
    std::cout << "\x1b[35m The memory address held by stringREF: \x1b[35m" << &stringREF << std::endl;

    std::cout << "\x1b[36m The value of the string variable: \x1b[36m" << str << std::endl;
    std::cout << "\x1b[32m The value pointed to by stringPTR: \x1b[32m" << *stringPTR << std::endl;
    std::cout << "\x1b[35m The value pointed to by stringREF: \x1b[35m" << stringREF << std::endl;
}