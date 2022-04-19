#include "Span.hpp"

#include <stdexcept>
#include <limits>
#include <algorithm>
#include <cstdlib>

Span::Span(unsigned int max) : std::vector<int>()
{
	this->reserve(max);
}

Span::Span(Span const &src) : std::vector<int>(src)
{
	*this = src;
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		std::vector<int>::operator=(other);
	}
	return *this;
}
