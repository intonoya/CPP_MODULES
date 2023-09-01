#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harlik;
    std::string str;

    if (argc == 2)
    {
        str = argv[1];
        if(!(str.compare("debug")))
            harlik.complain("debug");
        else if (!(str.compare("info")))
            harlik.complain("info");
        else if (!(str.compare("warning")))
            harlik.complain("warning");
        else if (!(str.compare("error")))
            harlik.complain("error");
        else
            std::cout << "\x1b[31mError: Wrong arguments!\x1b[31m" << std::endl;
    }
    else
        std::cout << "\x1b[31mError: Argument error!\x1b[31m" << std::endl;
    return 0;
}
