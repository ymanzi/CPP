#include "iter.hpp"

int main(void)
{
	{
		std::cout << "============================= 1 =================================" << std::endl;
	int tab[5] = {1, 2, 3, 4, 5};
	int taille = 5;
	for (int i = 0; i < taille; i++)
		std::cout << tab[i] <<std::endl;
	std::cout << "--------------- ITER ----------" << std::endl;
	::iter<int, int>(tab, taille, addTwo);

	for (int i = 0; i < taille; i++)
		std::cout << tab[i] <<std::endl;
	}
	{
		std::cout << "============================= 2 =================================" << std::endl;
		std::string *s = new std::string[5];
		s[0] = "one";
		s[1] = "two";
		s[2] = "three";
		s[3] = "four" ;
		s[4] = "five";

		int taille = 5;
		for (int i = 0; i < taille; i++)
			std::cout << s[i] << std::endl;
	std::cout << "--------------- ToUP ----------" << std::endl;
	::iter<std::string, int>(s, taille, toUP);
		for (int i = 0; i < taille; i++)
			std::cout << s[i] << std::endl;
		delete[] s;
	}
	return (0);
}