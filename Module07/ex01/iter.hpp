#	ifndef ITER_HPP
#	define ITER_HPP

#include <string>
#include <iostream>

template<typename T>
void iter(T *tab, size_t const size, void (*p)(T const& x))
{
	for (size_t i = 0; i < size; i++)
		p(tab[i]);
}

template<typename T>
void iter(T *tab, size_t const size, void (*p)(T &x))
{
	for (size_t i = 0; i < size; i++)
		p(tab[i]);
}

template<typename T>
void iter(T *tab, size_t const size, void (*p)(T x))
{
	for (size_t i = 0; i < size; i++)
		p(tab[i]);
}

template<typename T>
void addTwo(T nbr)
{
	std::cout << nbr + 2 << std::endl;
}

template<typename T>
void toUP(T c)
{
	std::cout << static_cast<char>(std::toupper(c)) << std::endl;
}

#	endif
