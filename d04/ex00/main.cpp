
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
    {
        std::cout << "--------------------SORCERER----------------- \n";
        Sorcerer ter("Yves", "El Mundo");
        Sorcerer ter1("Lo", "El Grande");
        Sorcerer ter2(ter);

        std::cout << ter2;
        ter2 = ter1;
        std::cout << ter2;
    }
    {
        std::cout << "--------------------VICTIM----------------- \n";
        Victim v1("Boy");
        Victim v3("Girl");
        Victim v2(v1);

        std::cout << v2;
        v2 = v3;
        std::cout << v2;
    }
    {
        std::cout << "--------------------PEON----------------- \n";
        Peon v1("Boy");
        Peon v3("Girl");
        Peon v2(v1);

        std::cout << v2;
        v2 = v3;
        std::cout << v2;
    }
    {
        std::cout << "--------------------REAL TESTS----------------- \n";

        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");
        std::cout << robert << jim << joe;
        robert.polymorph(jim);
        robert.polymorph(joe);
    }
    return (0);
}