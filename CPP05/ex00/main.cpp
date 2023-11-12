#include "Bureaucrat.hpp"

// int main() //does not work for big numbers
// {
//     Bureaucrat Avo("\x1b[34mAvo\x1b[34m", 22);
//     Bureaucrat Mika("\x1b[35mMika\x1b[35m", 87);

//     std::cout << Avo << std::endl;
//     std::cout << Mika << std::endl;

//     try
//     {
//         Bureaucrat Vazgenchik("Vazgenchik", 0);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
//     try
//     {
//         Bureaucrat Armenchik("Armenchik", 151);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
//     Avo.increment();
//     Mika.decrement();

//     std::cout << Avo << std::endl;
//     std::cout << Mika << std::endl;
// }

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat Bur("\x1b[34mAvo\x1b[34m", 150);
		std::cout<<Bur<<std::endl;
		Bur.decrement();
		std::cout<<Bur<<std::endl;
		Bur.increment();
		std::cout<<Bur<<std::endl;
	}
	catch(std::exception& e)
	{
		std::cout<<e.what()<<std::endl;
	}
	try
	{
		Bureaucrat Bur("\x1b[35mMika\x1b[35m", 42);
		std::cout<<Bur<<std::endl;
		Bur.decrement();
		std::cout<<Bur<<std::endl;
		Bur.increment();
		std::cout<<Bur<<std::endl;
	}
	catch(std::exception& e)
	{
		std::cout<<e.what()<<std::endl;
	}
}
