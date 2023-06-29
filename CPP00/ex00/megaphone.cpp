#include <iostream>
#include <algorithm>

int main(int argc, char **argv)
{
    std::string a; 
    int i = 1;

    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    for(i = 1; i < argc; i++)
    {
        a = argv[i]; 
        std::transform(a.begin(), a.end(), a.begin(), ::toupper);
        std::cout<<a;
    }
    std::cout << std::endl;
    return(0);
}