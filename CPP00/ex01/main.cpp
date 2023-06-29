#include "PhoneBook.hpp"

int main()
{
	PhoneBook PhoneBook1;
	std::string str;
	
	std::cout << "\x1b[36m";
    std::cout << "\n\t     Welcome to Phonebook!" << std::endl;
	std::cout << std::endl;
    while(1)
	{
		std::cout << "\x1b[36mPlease choose the command: ADD | SEARCH | EXIT\x1b[36m" << std::endl;
		std::cout << "-> ";
		std::getline(std::cin,str);
		if (!(str.compare("ADD")))
		{
			PhoneBook1.Add();
		}
		else if (!(str.compare("SEARCH")))
		{
			PhoneBook1.Search();
		}
		else if(!(str.compare("EXIT")))
		{
			str.clear();
			return 0;
		}
        else
            std::cout << "\x1b[31mError: Invalid Command!\x1b[31m" << std::endl;
		if (std::cin.eof())
		{
			return 0;
		}
		str.clear();
	}
	return 0;
}