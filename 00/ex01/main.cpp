#include "Contact.h"

void	add_contact(Contact &john)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email;
	std::string	phone_number;
	std::string	birthday;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;

	std::cout << "What's the first name ?" << std::endl;
	std::cin >> first_name;
	std::cout << "What's the last name ?" << std::endl;
	std::cin >> last_name;
	std::cout << "What's the nickname ?" << std::endl;
	std::cin >> nickname;
	std::cout << "What's the login?" << std::endl;
	std::cin >> login;
	std::cout << "What's the postal address?" << std::endl;
	std::cin >> postal_address;
	std::cout << "What's the email address?" << std::endl;
	std::cin >> email;
	std::cout << "What's the phone number?" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, phone_number);
	std::cout << "What's the birthday date?" << std::endl;
	std::cin >> birthday;
	std::cout << "What's the favorite meal?" << std::endl;
	std::cin >> favorite_meal;
	std::cout << "What's the underwear color?" << std::endl;
	std::cin >> underwear_color;
	std::cout << "What's the darkest secret?" << std::endl;
	std::cin.ignore() ;
	std::getline(std::cin, darkest_secret);

	john.init_contact(first_name, last_name, nickname, login,
			postal_address, email, phone_number, birthday,
			favorite_meal, underwear_color, darkest_secret);

}

void	affiche_contact(Contact john, int i)
{
	std::cout << std::setw(10);
	std::cout << i << "|";
	john.affiche_contact() ;
}

int main()
{
	bool		exit;
	std::string	cmd_user;
	Contact		phone_book[8];
	int		nbr_contact;
	int		i;
	int		index;

	nbr_contact = 0;
	i = 0;
	exit = false;
	index = 0;
	while (!exit)
	{
		std::cout << "Quelle est votre entrée ? (ADD, SEARCH ou EXIT)" << std::endl;
		std::cin >> std::setiosflags (std::ios::uppercase);
		std::cin >> cmd_user;
		if (cmd_user == "ADD")
		{
			if (nbr_contact > 7)
				std::cout << "Votre repertoire contient déjà 8 contacts ! Vous ne pouvez plus en ajouter !" << std::endl;
			else
			{
				add_contact(phone_book[nbr_contact]);
				nbr_contact++;
			}
		}
		else if (cmd_user == "SEARCH")
		{
			if (nbr_contact > 0)
			{
				while (nbr_contact - i > 0)
				{
					affiche_contact(phone_book[i], i);
					i++;
				}
				i = 0;
				do
				{
					std::cout << "Quel index souhaitez-vous afficher ?\n";
					std::cin >> index;
					if (index > nbr_contact || index < 0)
						std::cout << "Numéro d'index invalide\n";
				}
				while (index > nbr_contact || index < 0);
				phone_book[index].affiche();
			}
			else
				std::cout << "Votre repertoire est actuellement vide\n";
		}
		else if (cmd_user == "EXIT")
		{
			std::cout << "Merci d'avoir utilisé notre annuaire ! Au revoir !" << std::endl;
			std::exit(0);
		}
		else
			std::cout << "Veuillez rentrer une commande valide ! \n";
	}
	return (0);
}
