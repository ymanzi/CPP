#include <iostream>
#include <string>
#include "Array.hpp"

class
  Awesome {
    public:
      Awesome( int n = 18 ) : _n( n ) {}
      bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
      bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
      bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
      bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
      bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
      bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
  //private:
      int _n;
  };

template <typename T>
void test(T & a)
{
	std::cout << "Array -> " << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " " << std::endl;
	try
	{
		std::cout << "size =" << a.size() << " elem[5] = " ; 
		a[5];
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

int main(void)
{
	{
		Array<Awesome> a(3);
		Array<Awesome> b;

		a[0] = Awesome(18);
		a[1] = Awesome(19);
		a[2] = Awesome(20);
		try
		{
			std::cout << "size b =" << b.size() << std::endl; 
			std::cout << "size a =" << a.size() << std::endl; ; 
			a[5] = Awesome(21);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		Array<char> a(3);
		Array<char> b;

		a[0] = 'a';
		a[1] = 'b';
		a[2] = 'c';

		std::cout << "Array -> " << std::endl;
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << " " << std::endl;
		try
		{
			std::cout << "size b =" << b.size() << std::endl;
			std::cout << "size =" << a.size() << " elem[5] = " << a[5] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}	
	}
	return (0);
}