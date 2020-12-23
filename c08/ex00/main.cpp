#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
#include <string>
#include "easyfind.hpp"

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
		std::cout << a  << " "; //<< std::endl;
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
		{
		std::cout << "================== LIST - VECTOR ==========================" << std::endl;
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
		std::cout << "Error : Value not found " << '\n';
	}
	}
	}
	/*{
		std::cout << "================== STR - VECTOR ==========================" << std::endl;
		std::vector<std::string> lst;
		lst.push_back("Tres");
		lst.push_back("Bonne");
		lst.push_back("Correction");

		Affiche<std::string> f;
	}*/
	return (0);
}