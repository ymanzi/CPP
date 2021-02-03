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
#include <unistd.h>
#include <iostream>


struct Data
{
	std::string	s1;
	int			n;
	std::string s2;
};

void	get_random_string(char *str)
{
	char carac[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	usleep(1);
	int j = 0;
	while(carac[j++]);
	for (int i = 0; i < 8; i++)
		str[i] = carac[rand() % j];
}

void *serialize(void)
{
	char	*d = new char[16 + sizeof(int)];

	get_random_string(d);
	*(reinterpret_cast<int *>(d + 8)) = rand();
	get_random_string(reinterpret_cast<char *>(d + 8 + sizeof(int)));

	return (reinterpret_cast<void*>(d));
}

Data* deserialize(void* raw)
{
	char		*c = reinterpret_cast<char *>(raw);
	Data		*d = new Data;

	d->s1 = std::string(c, 8);
	d->s2 = std::string(c + 8 + sizeof(int), 8);
	d->n = *(reinterpret_cast<int *>(c + 8));

	return (d);
}

int main(void)
{
	std::srand(time(0));
	void	*arr = serialize();
	Data	*d = deserialize(arr);

	std::cout << "s1 :" << d->s1 << std::endl;
	std::cout << "n :" << d->n << std::endl;
	std::cout << "s2 :" << d->s2 << std::endl;

	delete d;
	delete reinterpret_cast<char *>(arr);
	return (0);
}
