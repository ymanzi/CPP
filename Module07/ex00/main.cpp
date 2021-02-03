#include "whatever.hpp"

class
  Awesome {
    public:
      Awesome( int n) : _n( n ) {}
      bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
      bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
      bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
      bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
      bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
      bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

  private:
      int _n;
  };

int main(int argc, char **argv)
{
	{
		std::cout << "============================  EXTRA ==============================" << std::endl;
		Awesome a(5);
		Awesome b(-18);

		::swap<Awesome>(a, b);
		std::cout << "===================MIN==================" << std::endl;
		std::cout << "Awesome Min = " << (::min<Awesome>(a, b) == a) << std::endl;
		std::cout << "===================MAX==================" << std::endl;
		std::cout << "Awesome Max = " << (::max<Awesome>(a, b) == b) << std::endl;
		std::cout << "===================SWAP==================" << std::endl;
	}
	{
		std::cout << "============================  INPUT ==============================" << std::endl;
		if (argc == 5)
		{
			int a = std::stoi(argv[1]);
			int b = std::stoi(argv[2]);

			std::cout << "int a = " << a << ", int b = " << b << std::endl;
			std::string s1 = argv[3];
			std::string s2 = argv[4];
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
			std::cout << "This program takes 4 arguments " << std::endl;
	}
	{
		std::cout << "============================  BASIC ==============================" << std::endl;
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "AFTER  SWAP a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "AFTER  SWAP c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;		
	}
	return (0);
}