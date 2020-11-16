#include <iostream>

void	affiche_maj(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			std::putchar(str[i] - 32);
		else
			std::cout << str[i];
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
			affiche_maj(argv[i++]);
		std::cout << std::endl;
	}
	return (0);
}
