#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span : public std::vector<int>
{
	public :
		Span(unsigned int max);
		Span(Span const &src);
		Span &operator=(Span const &other);
		virtual ~Span();
		
		void	addNumber();
		void	addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
		
		int shortestSpan() const;
		int	longestSpan() const;
};


#endif
