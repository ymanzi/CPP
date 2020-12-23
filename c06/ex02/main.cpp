#include "generate.hpp"

int main(void)
{
	Base *p = generate();
	identify_from_pointer(p);
	identify_from_reference(*p);
	delete p;
	return (0);
}