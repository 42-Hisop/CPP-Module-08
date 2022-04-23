#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private :
		Span();

		std::vector<int>	vec;

	public :
		Span(const unsigned int max);
		Span(const Span &src);
		virtual ~Span();
	
		Span &operator=(Span const &other);

		void	addNumber(const int num);
		void	addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
		
		int shortestSpan() const;
		int	longestSpan() const;
};


#endif
