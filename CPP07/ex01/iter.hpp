#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef> 
#include <iostream>

// class Awesome
// {
// 	public:
// 		Awesome(void):_n(42) {return;}
// 		int get(void) const {return this->_n;}
// 	private:
// 		int	_n;
// };

// std::ostream & operator<<(std::ostream & o, Awesome const & rhs) {o<<rhs.get(); return o;}
// template<typename T>
// void print(T const &x) {std::cout<<x<<std::endl; return;}

template <typename T>
void	iter(T *array, size_t length, void func(const T&))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

#endif