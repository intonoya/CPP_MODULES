#ifndef DATA_HPP
# define DATA_HPP

#include <cstdint>
#include <iostream>

class	Data
{
	public:
		int	a;
		Data();
		~Data();
		Data(const Data&);
		Data	&operator=(const Data&);
};

#endif