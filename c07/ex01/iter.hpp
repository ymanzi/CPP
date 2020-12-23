#	ifndef ITER_HPP
#	define ITER_HPP

#include <string>
#include <iostream>

template<typename T, typename S>
void iter(T tab[], S taille, T (*p)(T))
{
	for (S i = 0; i < taille; i++)
		tab[i] = p(tab[i]);
}

template<typename T>
T addTwo(T nbr)
{
	return (nbr + 2);
}

std::string toUP(std::string str)
{
	int len = str.length();
	
	for (int i = 0; i < len; i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

#	endif