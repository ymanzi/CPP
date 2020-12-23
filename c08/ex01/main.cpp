
#include "span.hpp"

class Generate
{
public:
	int operator()()
	{
		return (rand() % 100);
	}
};

int main(void)
{
	{
		std::cout << "================ADD NUMBER=================" << std::endl;

		Span f(4);
		f.addNumber(5);
		f.addNumber(10);
		f.addNumber(3);
		f.addNumber(2);
		for (std::vector<int>::iterator it = f.getVec().begin(); it != f.getVec().end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
		std::cout << "short span: " << f.shortestSpan() << " long span: " << f.longestSpan() << std::endl;
	}
	{
		std::cout << "================GENERATE=================" << std::endl;

		Span f(5);
		std::vector<int> v(6, 0);
		generate(v.begin(), v.end(), Generate());
		f.addNumber(v.begin(), v.end());
		std::cout << "vector Generated: ";
		for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
		std::cout << "arr: ";
		for (std::vector<int>::iterator it = f.getVec().begin(); it != f.getVec().end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
		std::cout << "short span: " << f.shortestSpan() << " long span: " << f.longestSpan() << std::endl;
	}
	{
		std::cout << "========================VRAI TEST==========================" << std::endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return (0);
}