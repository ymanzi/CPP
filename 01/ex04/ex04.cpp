#include <string>
#include <iostream>

int main(void)
{
	std::string str = "THIS IS BRAIN";
	std::string &reference = str;
	std::string *ptr = &str;

	std::cout << "Pointeur : " << *ptr << std::endl;
	std::cout << "Reference : " << reference << std::endl;
}
