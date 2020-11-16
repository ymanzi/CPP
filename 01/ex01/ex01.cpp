#include <iostream>
#include <string>


void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;

	delete panthere;
	panthere = 0;
	
	panthere = new std::string("Boxer Panthere");
	std::cout << *panthere << std::endl;

	delete panthere;
	panthere = 0;
}

int main(void)
{
	memoryLeak();
	return (0);
}
