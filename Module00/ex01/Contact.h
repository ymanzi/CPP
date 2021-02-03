/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:00:59 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/12 17:01:07 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CONTACT_H
#	define CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cctype>
#include<limits>

class Contact
{
	public:
	Contact(std::string first_name, std::string last_name, std::string nickname, \
		std::string login, std::string postal_address, std::string email, \
		std::string phone_number, std::string birthday, std::string favorite_meal, \
		std::string underwear_color, std::string darkest_secret) ; //constructeur
	Contact();
	void	affiche_elem(std::string elem);
	void	affiche_contact();
	void	affiche() const;
	std::string	get_first_name() const;
	void	init_contact(std::string first_name, std::string last_name, std::string nickname,
                std::string login, std::string postal_address, std::string email,
                std::string phone_number, std::string birthday, std::string favorite_meal,
                std::string underwear_color, std::string darkest_secret);

	private:	
	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_login;
	std::string	m_postal_address;
	std::string	m_email;
	std::string	m_phone_number;
	std::string	m_birthday;
	std::string	m_favorite_meal;
	std::string	m_underwear_color;
	std::string	m_darkest_secret;
};

#	endif
