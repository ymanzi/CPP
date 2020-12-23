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

int main(int argc, char **argv)
{
	{
		if (argc == 3)
		{
			int a = std::stoi(argv[1]);
			int b = std::stoi(argv[2]);

			std::cout << "int a = " << a << ", int b = " << b << std::endl;
			std::string s1 = argv[1];
			std::string s2 = argv[2];
			std::cout << "string s1 = " << s1 << ", string s2 = " << s2 << std::endl;

			std::cout << "===================MIN==================" << std::endl;
			std::cout << "int Min = " << ::min<int>(a, b) << std::endl;
			std::cout << "string Min = " << ::min<std::string>(s1, s2) << std::endl;

			std::cout << "===================MAX==================" << std::endl;
			std::cout << "int Max = " << ::max<int>(a, b) << std::endl;
			std::cout << "string Max = " << ::max<std::string>(s1, s2) << std::endl;

			std::cout << "===================SWAP==================" << std::endl;
			::swap<int>(a, b);
			std::cout << "int a = " << a << ", int b = " << b << std::endl;

			::swap<std::string>(s1, s2);
			std::cout << "string s1 = " << s1 << ", string s2 = " << s2 << std::endl;
		}
		else
		{
			std::cout << "This program takes 2 arguments " << std::endl;
		}
		std::cout << "==========================================================" << std::endl;
	}
	{
		
			int a = 2;
			int b = 3;
			::swap(a, b);
			std::cout << "a = " << a << ", b = " << b << std::endl;
			std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
			std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
			std::string c = "chaine1";
			std::string d = "chaine2";
			::swap(c, d);
			std::cout << "c = " << c << ", d = " << d << std::endl;
			std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
			std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
		
	}
		return (0);
}