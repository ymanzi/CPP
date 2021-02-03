#	ifndef SPAN_HPP
#	define SPAN_HPP

#include <algorithm>
#include <vector>
#include <stdexcept>
#include <iostream>
#include <string>

class Span
{
	public:
		Span(unsigned int mval = 0);
		Span(Span const& other);
		~Span(void);
		Span& operator=(Span const& other);

		int					shortestSpan(void);
		int					longestSpan(void);
		void				addNumber(int n);
		std::vector<int>&	getVec();
		

		typedef std::vector<int>::iterator IT;
		void			addNumber(IT un, IT deux);		

	private:
		unsigned int		_max;
		std::vector<int>	_vec;
};

#	endif