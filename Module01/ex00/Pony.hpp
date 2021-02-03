/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:49:38 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:49:41 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PONY_HPP
#	define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
	public:
	Pony();
	Pony(std::string name, int age, int taille, std::string sexe);
	~Pony();
	void	presentation(void);
	void	setAge(int age);
	void	setName(std::string name);
	void	setTaille(int taille);
	void	setSexe(std::string sexe);
	

	private:
	std::string	_name;
	int			_age;
	int			_taille;
	std::string	_sexe;
};

void	ponyOnTheStack();
void	ponyOnTheHeap();

#	endif
