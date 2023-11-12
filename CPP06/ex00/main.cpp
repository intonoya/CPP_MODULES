#include <iostream>

bool	parsing(const std::string &str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "\x1b[31mError: Bad arguments!\x1b[31m" << std::endl;
	else if (parsing(argv[1]) == false)
		std::cout << "\x1b[31mError: Invalid input!\x1b[31m" << std::endl;
	return (0);
}