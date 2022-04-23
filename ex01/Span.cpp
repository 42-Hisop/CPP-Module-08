#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int num)
{
	vec.reserve(num);
}

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		vec = other.vec; 
	}
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(const int num)
{
	if (vec.size() == vec.capacity())
	{
		throw std::range_error("full of array");
	}
	vec.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	unsigned long count = 0;
	std::vector<int>::iterator temp = first;
	while (temp != last)
	{
		count++;
		temp++;
	}
	if (count <= vec.capacity())
	{
		while (first != last)
		{
			addNumber(*first);
			first++;
		}
	}
	else
		throw std::range_error("lack of space");
}

int	Span::shortestSpan() const
{
	if (vec.size() < 2)
		throw std::range_error("element is less than 2");
	std::vector<int> temp = vec;
	sort(temp.begin(), temp.end());

	int dis = temp[1] - temp[0];
	std::vector<int>::iterator iter = temp.begin() + 1;
	while (iter != (temp.end() - 1))
	{
		int dis_temp = *(iter + 1) - *iter;
		if (dis_temp < dis)
			dis = dis_temp;
		iter++;
	}
	return dis;
}

int Span::longestSpan() const
{
	std::vector<int> temp = vec;
	
	if (vec.size() < 2)
		throw std::range_error("element is less than 2");
	sort(temp.begin(), temp.end());
	return *(temp.end() - 1) - *temp.begin();
}
