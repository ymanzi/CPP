/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:18:25 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/23 09:18:26 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

struct Data
{
	std::string	s1;
	int			n;
	std::string s2;
};

std::string	get_random_string(int n)
{
	std::string carac = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	std::string	str;

	for (int i = 0; i < n; i++)
		str += carac[std::rand() % carac.length()];
	return (str);
}


void *serialize(void)
{
	int		j;
	char	*d;
	
	d = new char[20];
	std::string carac = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

	for (int i = 0; i < 7; i++)
		d[i] = carac[std::rand() % carac.length()];
	d[7] = 0;
	d[8] = int(std::rand());
	for (int i = 13; i < 19; i++)
		d[i] = carac[std::rand() % carac.length()];
	d[19] = 0;
	return (reinterpret_cast<void*>(d));
}

Data* deserialize(void* raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	std::srand(time(0));

	Data *arr = reinterpret_cast<Data*>(serialize());
	Data *d = deserialize(serialize());

	std::cout << "SIzeOf: " << sizeof(*arr) << std::endl;
	std::cout << "s1 :" << d->s1 << std::endl;
	std::cout << "n :" << d->n << std::endl;
	std::cout << "s2 :" << d->s2 << std::endl;

	delete d;
	delete arr;
	
	return (0);
}
