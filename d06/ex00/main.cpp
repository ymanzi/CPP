#include "Convert.hpp"


// GERER LES CHAR EN ENTREE 

int main(int argc, char **argv)
{ 
	if (argc == 2)
	{
		Convert c;
		c.procNum(argv[1]);
	}
	else
	{
		std::cout << "This program just take one parameter" << std::endl;
	}
	return (0);
}
