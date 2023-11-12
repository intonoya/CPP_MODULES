#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <exception>
#include <vector>
#include <list>

template <typename T>
typename T::iterator easyfind(T &container, int val)
{
	typename T::iterator a;
	a = std::find(container.begin(), container.end(), val);
	if (a == container.end())
		throw std::exception();
	return (a);
}

#endif