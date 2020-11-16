
#include "generate.hpp"

Base	*generate(void)
{
	std::srand(time(0));
	int i = rand() % 3;

	if (i == 1)
		return (new A);
	else if (i == 2)
		return (new B);
	return (new C);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}