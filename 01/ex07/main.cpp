#include <fstream>
#include <iostream>
#include <string>


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Veuillez rentrer un nombre d'arguments valables \n";
		return (1);
	}
	std::string fileWrite = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream fluxRead(fileWrite.c_str());
	fileWrite += ".replace";
	std::ofstream fluxWrite(fileWrite.c_str());

	if (fluxRead && fluxWrite)
	{
		int sizeS1 = s1.size();
		std::string reading;
		bool same;
		int i = 0;
		char a;

		same = true;
		while (fluxRead.get(a))
		{
			i++;
			reading += a;
			std::string newString = s1;
			newString.resize(i);
			if (reading != newString)
			{
				fluxWrite << reading;
				reading.erase();
				i = 0;
			}
			else if (i == sizeS1)
			{
				fluxWrite << s2;
				reading.erase();
				i = 0;
			}
		}
	}
	else
	{
		std::cout << "Erreur dans l'ouverture des fichiers \n";
		return (2);
	}
}
