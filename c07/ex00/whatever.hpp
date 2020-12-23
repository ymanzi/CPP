#	ifndef WHATEVER_HPP
#	define WHATEVER_HPP

#include <string>
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

template <typename T>
T min(T const &a, T const &b)
{
	return ((a < b) ? a : b);
}

template <typename T>
T max(T const &a, T const &b)
{
	return ((a > b) ? a : b);
}

#	endif
