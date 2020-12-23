#include "span.hpp"

Span::Span(unsigned int max) : _max(max) {}

Span::Span(Span const &other) : _max(other._max)
{
	if (!_vec.empty())
		_vec.erase(_vec.begin(), _vec.end());
	for (size_t i = 0; i < other._vec.size(); i++)
		_vec.push_back(_vec[i]);
}
Span::~Span(void) {}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		_max = other._max;
		if (!_vec.empty())
			_vec.erase(_vec.begin(), _vec.end());
		for (size_t i = 0; i < other._vec.size(); i++)
			_vec.push_back(_vec[i]);
	}
	return (*this);
}

void Span::addNumber(int n)
{
	try
	{
		if (static_cast<unsigned int>(_vec.size()) == _max)
			throw std::exception();
		_vec.push_back(n);
		sort(_vec.begin(), _vec.end());
	}
	catch (const std::exception &e)
	{
		std::cout << "Span is full" << '\n';
	}
}

//typedef std::vector<int>::iterator IT;

void Span::addNumber(IT un, IT deux)
{
	for (IT i = un; i != deux; i++)
		addNumber(*i);
}

int Span::shortestSpan(void)
{
	try
	{
		if (_vec.empty() || _vec.size() == 1)
			throw std::exception();
		int span_value = *(_vec.end() - 1);
		for (std::vector<int>::iterator it = _vec.begin() + 1; it != _vec.end(); it++)
		{
			if (abs(*(it - 1) - *it) < span_value)
				span_value = abs(*(it - 1) - *it);
		}
		return (span_value);
	}
	catch(const std::exception& e)
	{
		std::cout << "Span size is 0 or 1" << '\n';
		return (0);
	}
}

int Span::longestSpan(void)
{
	if (_vec.empty() || _vec.size() == 1)
		throw std::exception();
	int r= abs(_vec.front() - _vec.back());
	return (r);
}