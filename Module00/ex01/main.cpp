/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:01:16 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/12 17:01:17 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::cin.ignore();
	std::getline(std::cin, first_name);
	std::cout << "What's the last name ?" << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "What's the nickname ?" << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "What's the login?" << std::endl;
	std::getline(std::cin, login);
	std::cout << "What's the postal address?" << std::endl;
	std::getline(std::cin, postal_address);
	std::cout << "What's the email address?" << std::endl;
	std::getline(std::cin, email);
	std::cout << "What's the phone number?" << std::endl;
	std::getline(std::cin, phone_number);
	std::cout << "What's the birthday date?" << std::endl;
	std::getline(std::cin, birthday);
	std::cout << "What's the favorite meal?" << std::endl;
	std::getline(std::cin, favorite_meal);
	std::cout << "What's the underwear color?" << std::endl;
	std::getline(std::cin, underwear_color);
	std::cout << "What's the darkest secret?" << std::endl;
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


void	ft_search(int nbr_contact, Contact *phone_book)
{
	int		index;
	bool	check_input;
	int		i;

	i = -1;
	if (nbr_contact > 0)
	{
		while (nbr_contact - ++i > 0)
			affiche_contact(phone_book[i], i);
		i = 0;
		do
		{
			std::cout << "Which index do you want to see ?\n";
			check_input = (!(std::cin >> index) || index >= nbr_contact || index < 0);
			if (check_input)
			{
				std::cout << "Non-valide index\n";
				if (!(std::cin))
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
				}
			}
		}
		while (check_input);
		phone_book[index].affiche();
	}
	else
		std::cout << "Your phonebook is currently empty\n";
}

int main()
{
	std::string	cmd_user;
	Contact		phone_book[8];
	int			nbr_contact;

	nbr_contact = 0;
	while (1)
	{
		std::cout << "What's your option ? (ADD, SEARCH ou EXIT)" << std::endl;
		std::cin >> cmd_user;
		for (int k = 0; cmd_user[k] != 0; k++)
			cmd_user[k] = std::toupper(cmd_user[k]);
		if (cmd_user == "ADD")
		{
			if (nbr_contact > 7)
				std::cout << "Your phonebook is full !! It has already 8 contacts ! You can't add any contact anymore !" << std::endl;
			else
			{
				add_contact(phone_book[nbr_contact]);
				nbr_contact++;
			}
		}
		else if (cmd_user == "SEARCH")
			ft_search(nbr_contact, phone_book);
		else if (cmd_user == "EXIT")
		{
			std::cout << "Thanks to you for using our PhoneBook ! Tchuss !" << std::endl;
			std::exit(0);
		}
		else
			std::cout << "Could you please enter a valid command !\n";
	}
	return (0);
}
