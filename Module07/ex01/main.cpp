#include "iter.hpp"

class Awesome
  {
    public:
      Awesome( void ) : _n( 42 ) { return; }
      int get( void ) const { return this->_n; }
    private:
      int _n;
  };
  std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
  
  template< typename T >
  void print( T const & x ) { std::cout << x << std::endl; return; }


int main(void)
{
	{
		std::cout << "============================= 0 =================================" << std::endl;
		int tab[] = { 0, 1, 2, 3, 4 };  // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?
		Awesome tab2[5];
	
		iter( tab, 5, print<int>);
		iter( tab2, 5, print<Awesome> );
	}
	{
		std::cout << "============================= 1 =================================" << std::endl;
		int tab[5] = {1, 2, 3, 4, 5};

		for (int i = 0; i < 5; i++)
			std::cout << tab[i] << std::endl;
		
		std::cout << "--------------- ITER ----------" << std::endl;
		iter(tab, 5, addTwo<int>);

	}
	{
		std::cout << "============================= 2 =================================" << std::endl;
		char s[] = "abcd";

		std::cout << s << std::endl;
	std::cout << "--------------- ToUP ----------" << std::endl;
		iter(s, 4, toUP<char>);

	}
	return (0);
}