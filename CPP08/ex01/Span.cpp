#include "Span.hpp"

Span::Span() : _n(0)
{
}

Span::Span(unsigned int N) : _n(N)
{
}

Span::Span(const Span &other)
{
	this->_span.reserve(other._span.capacity());
	this->_span = other._span;
	this->_n = other._n;
}

Span	&Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->_span = other._span;
		this->_n = other._n;
	}
	return (*this);
}

Span::~Span()
{
}

void	Span::addNumber(unsigned int val)
{
	if (_span.size() < _n)
		_span.push_back(val);
	else
		throw std::overflow_error("Error: Span has no more free spaces!");
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_span.size() + std::distance(begin, end) <= _n)
		_span.insert(_span.end(), begin, end);
	else
		throw std::exception();
}

int	Span::shortestSpan() const
{
	int	min;

	if (this->_span.size() < 2)
		throw std::logic_error("Error: Not enough numbers stored to provide a span!");
	std::vector<int> tmp(_span);
	std::sort(tmp.begin(), tmp.end());
	min = tmp[1] - tmp[0];
	for (unsigned int i = 2; i < tmp.size(); i++)
	{
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	}
	return (min);
}

int	Span::longestSpan() const
{
	if (this->_span.size() < 2)
		throw std::logic_error("Error: Not enough numbers stored to provide a span!");
	std::vector<int> tmp(_span);
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}