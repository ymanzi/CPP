#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

#define MODULO 10 
#define NBGEN 10
#define RECHERCHE 5

class Test
{
public:
	int operator()(void)
	{
		return (rand() % MODULO);
	}
};

template<typename T>
class Affiche
{
public:
	void operator()(T a)
	{
		std::cout << a  << " ";
	}
};

int main(void)
{
	srand(time(0));
	{
		std::cout << "================== INT - VECTOR ==========================" << std::endl;
		Affiche<int> f;
		std::vector<int> a(NBGEN, 0);
		generate(a.begin(), a.end(), Test());
		for_each(a.begin(), a.end(), Affiche<int>());
		std::cout << std::endl;
		try
		{
			int bf = ::easyfind(a, RECHERCHE);
			f(bf);
			std::cout << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Error : Value not found " << '\n';
		}
	}
	{
		std::cout << "================== INT - LIST ==========================" << std::endl;
		Affiche<int> f;
		std::list<int> a(NBGEN, 0);
		generate(a.begin(), a.end(), Test());
		for_each(a.begin(), a.end(), Affiche<int>());
		std::cout << std::endl;
		try
		{
			int bf = ::easyfind(a, RECHERCHE);
			f(bf);
			std::cout << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout <<  "Error : Value not found " << '\n';
		}
	}
	return (0);
}