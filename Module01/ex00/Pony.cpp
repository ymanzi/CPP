/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:49:32 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:49:34 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() 
{
	std::cout << "That's how a new pony came to earth" << std::endl;
}

Pony::~Pony()
{
	std::cout << "That's how a pony went to heaven" << std::endl;
}

Pony::Pony(std::string name, int age, int taille, std::string sexe):
	_name(name), _age(age), _taille(taille), _sexe(sexe)
{
	std::cout << "That's how a new pony came to earth" << std::endl;
}

void Pony::presentation(void)
{
	std::cout << "Uuuuuuuhhhhh je suis le poney " << _name << "( "
<< _sexe << " )" << std::endl;
	std::cout << "J'ai " << _age << " an(s) et je mesure " << _taille 
 << " cm \n";

}

void Pony::setAge(int age)
{
	_age = age;
}

void Pony::setName(std::string name)
{
	_name = name;
}

void Pony::setTaille(int taille)
{
	_taille = taille;
}

void Pony::setSexe(std::string sexe)
{
	_sexe = sexe;
}

void ponyOnTheHeap(void)
{
	Pony  *p;

	p = new Pony("Yakari", 104, 12, "F");
	p->presentation();
	p->setAge(36);
	p->setSexe("M");
	p->setName("Thanos");
	p->presentation();

	delete p;
	p = 0;
}

void ponyOnTheStack(void)
{
	Pony  p("Lion", 1, 180, "Neutre");
	p.presentation();
	p.setAge(85);
	p.setSexe("F");
	p.setName("Lion2.0");
	p.presentation();
}
