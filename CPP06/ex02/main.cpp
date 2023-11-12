#include <iostream>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
    srand(time(0));
    int i = rand() % 3;

    if (i == 1)
        return new A;
    else if (i == 2)
        return new B;
    return new C;
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		p = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception &e) {}
	try
	{
		p = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (const std::exception &e) {}
	try
	{
		p = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (const std::exception &e) {}
}

int	main()
{
	srand(time(0));
	A	a;
	B	b;
	C	c;

	identify(&a);
	identify(&b);
	identify(&c);

	std::cout << std::endl;

	identify(a);
	identify(b);
	identify(c);

	std::cout << std::endl << "Random generated: " << std::endl;

	Base	*ptr = generate();

	identify(ptr);
}