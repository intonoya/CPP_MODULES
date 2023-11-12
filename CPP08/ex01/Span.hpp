#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>
#include <stdexcept>

class	Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span	&operator=(const Span &other);
		~Span();
	public:
		void	addNumber(unsigned int val);
		void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan() const;
		int		longestSpan() const;

		template<typename It> void	addNumber(It first, It last);
	private:
		std::vector<int>	_span;
		unsigned int _n;
};

template<typename It>
void	Span::addNumber(It first, It last)
{
	while (first != last)
	{
		this->addNumber(*first);
		++first;
	}
}

#endif