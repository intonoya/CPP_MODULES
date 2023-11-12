#include "iter.hpp"

template <typename T>
void	ft_tprint(const T &x)
{
	std::cout << x << std::endl;
}

void	ft_print(const int &x)
{
	std::cout << x << std::endl;
}

int	main()
{
	int	hello[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::cout << "Calling ft_tprint():" << std::endl;
	iter(hello, 10, ft_tprint);
	std::cout << "Calling ft_print():" << std::endl;
	iter(hello, 10, ft_print);
}

// int main()
// {
// 	int tab[] = {0, 1, 2, 3, 4};
// 	Awesome tab2[5];

// 	iter (tab, 5, print);
// 	iter (tab2, 5, print);

// 	return (0);
// }