
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

char toUP(char c)
{
	return (std::toupper(c));
}

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
		char *s = new char[5];
		s[0] = 'a';
		s[1] = 'b';
		s[2] = 'c';
		s[3] = 'd' ;
		s[4] = 0;

		int taille = 4;
		std::cout << s << std::endl;
	std::cout << "--------------- ToUP ----------" << std::endl;
	::iter<char, int>(s, taille, toUP);
		std::cout << s << std::endl;
		delete s;
	}
	return (0);
}