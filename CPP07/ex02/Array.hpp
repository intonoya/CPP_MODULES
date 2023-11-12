#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template    <typename T>
class Array
{
    private:
        T   *_array;
        unsigned int _size;
    public:
        Array();
		Array(unsigned int n);
		Array(const Array &copy);
		~Array();
		
        Array           &operator=(const Array &copy);
        T               &operator[](unsigned int i) const;
        unsigned int    size() const;
};

template    <typename T>
Array<T>::Array() : _array(0), _size(0) {}

template    <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {}

template    <typename T>
Array<T>::Array(const Array &copy) : _array(0), _size(0) 
{
    if (_size != 0)
	{
		_array = new T[_size];
		for	(unsigned int i = 0; i < copy._size; ++i)
			this->_array[i] = copy._array[i];
	}
}

template	<typename T>
Array<T>::~Array()
{
	delete [] this->_array;
}

template	<typename T>
Array<T>	&Array<T>::operator=(const Array &rhs)
{
	if (this != &rhs)
	{
		if (this->_size > 0)
			delete [] this->_array;

		this->_size = rhs._size;
		this->_array = new T[_size];
		for (unsigned int i = 0; i < rhs._size; ++i)
			this->_array[i] = rhs._array[i];
	}

	return (*this);
}

template	<typename T>
T			&Array<T>::operator[](unsigned int idx) const
{
	if (idx < 0 || idx >= this->_size) 
		throw std::range_error("Error: Invalid index!");
	return (this->_array[idx]);
}

template		<typename T>
unsigned int	Array<T>::size() const
{
	return (this->_size);
}

#endif