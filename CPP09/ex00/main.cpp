#include "BitcoinExchange.hpp"

int	main(int argc, char** argv)
{
	std::ifstream	dataFile, inputFile;
	
	if (argc != 2)
    {
        std::cout<<"\33[1;31mError: Invalid number of arguments!\33[1;31m"<<std::endl;
        std::cout<<"Only input file as an argument!"<<std::endl;
		return 1;
    }
     try {
        BitcoinExchange::_checkInput(argv[1]);
    }
    catch (const std::exception &e) {
        std::cout<< e.what() << std::endl;
		return 1;
    }
	dataFile.open("data.csv");		
	if (!dataFile.is_open())
    {
        std::cout<<"\33[1;31mError: No such file or directory!"<<std::endl;
        return 2;
    }
    inputFile.open(argv[1]);
	if (!inputFile.is_open())
    {
        std::cout<<"\33[1;31mError: No such file or directory!"<<std::endl;
        return 3;
    }
	BitcoinExchange btc(dataFile);
	btc.displayResult(inputFile);
	dataFile.close();
	inputFile.close();
	return 0;
}