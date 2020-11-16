#include "Contact.h"

Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
		std::string login, std::string postal_address, std::string email,
		std::string phone_number, std::string birthday, std::string favorite_meal,
		std::string underwear_color, std::string darkest_secret)
{
	m_first_name = first_name;
	m_last_name = last_name;
	m_nickname = nickname;
	m_login = login;
	m_postal_address = postal_address;
	m_email = email;
	m_phone_number = phone_number;
	m_birthday = birthday;
	m_favorite_meal = favorite_meal;
	m_underwear_color = underwear_color;
	m_darkest_secret = darkest_secret;
}

Contact::Contact(): m_first_name("0")
{

}

void	Contact::affiche_elem(std::string elem)
{
	std::cout << std::setw(10) ;
	if (elem.size() > 10)
	{
		elem.resize(9);
		elem += ".";
	}
	std::cout << elem << "|";
}

void	Contact::affiche_contact()
{
	affiche_elem(m_first_name);
	affiche_elem(m_last_name);
	affiche_elem(m_login);
	std::cout <<  std::endl;  
}

void	Contact::affiche() const
{
	std::cout << " First Name : " << m_first_name << std::endl;
	std::cout << " Last Name : " << m_last_name << std::endl;
	std::cout << " Nickname : " << m_nickname << std::endl;
	std::cout << " Login : " << m_login << std::endl;
	std::cout << " Postal address : " << m_postal_address << std::endl;
	std::cout << " Email address: " << m_email << std::endl;
	std::cout << " Phone number : " << m_phone_number << std::endl;
	std::cout << " Birthday date : " << m_birthday << std::endl;
	std::cout << " Favorite meal : " << m_favorite_meal << std::endl;
	std::cout << " Underwear color : " << m_underwear_color << std::endl;
	std::cout << " Darkest secret : " << m_darkest_secret << std::endl;
}
std::string	Contact::get_first_name() const
{
	return (m_first_name);
}

void	Contact::init_contact(std::string first_name, std::string last_name,
		std::string nickname, std::string login, std::string postal_address,
		std::string email, std::string phone_number, std::string birthday,
		std::string favorite_meal, std::string underwear_color, std::string darkest_secret)
{
	m_first_name = first_name;
	m_last_name = last_name;
	m_nickname = nickname;
	m_login = login;
	m_postal_address = postal_address;
	m_email = email;
	m_phone_number = phone_number;
	m_birthday = birthday;
	m_favorite_meal = favorite_meal;
	m_underwear_color = underwear_color;
	m_darkest_secret = darkest_secret;
}

