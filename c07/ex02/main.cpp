#include <iostream>
#include <string>
#include "Array.hpp"




int main(void)
{
	Array<char> a(3);

	a[0] = 'c';
	a[1] = 'd';
	a[2] = 'e';
	std::cout << "A -> ";
	for (unsigned int i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << " ";
	}
	try
	{
		a[5];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	return (0);
}