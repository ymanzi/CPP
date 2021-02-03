/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:06:29 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:06:31 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Robot.hpp"

int main(void)
{
    {
        std::cout << "----------------------      SORCERER      ---------------" << std::endl;
        Sorcerer ter("Yves", "El Mundo");
        Sorcerer ter1("Merlin(a)", "Unknown");
        Sorcerer ter2(ter);

        std::cout << ter2;
        ter2 = ter1;
		std::cout << std::endl << "-----------------   Merlin(a) Introduction --------------" << std::endl;
		ter2.introduction();
        std::cout << ter2;
		std::cout << std::endl << "--------------------      Destruction   -----------------" << std::endl;
    }
    {
        std::cout << std::endl << "--------------------         VICTIM     -----------------" << std::endl;
        Victim v1;
		std::cout << std::endl << "--------------------   Victim Introduction --------------" << std::endl;
        std::cout << v1;
		v1.getPolymorphed();
		std::cout << std::endl << "--------------------      Destruction   -----------------" << std::endl;
    }
    {
        std::cout << std::endl << "--------------------         PEON       -----------------" << std::endl;
        Peon v2("Peon");
        std::cout << v2;
		v2.getPolymorphed();
		std::cout << std::endl << "--------------------      Destruction   -----------------" << std::endl;
    }
	 {
        std::cout << std::endl << "--------------------         ROBOT       -----------------" << std::endl;
        Robot v2;
        std::cout << v2;
		v2.getPolymorphed();
		std::cout << std::endl << "--------------------      Destruction   -----------------" << std::endl;
    }
	{
		std::cout << std::endl << "--------------------      ALL FOR ONE   -----------------" << std::endl;
		Sorcerer	s("Merlin(a)", "Unknown");
		Victim		*v, *p, *r;

		v = new Victim;
		p = new Peon;
		r = new Robot;

		std::cout << std::endl << "--------------------   Polymorph The Victim -----------------" << std::endl;
		s.polymorph(*v);
		std::cout << std::endl << "--------------------    Polymorph The Peon  -----------------" << std::endl;
		s.polymorph(*p);
		std::cout << std::endl << "--------------------    Polymorph The Robot -----------------" << std::endl;
		s.polymorph(*r);

		std::cout << std::endl << "--------------------      Destruction   -----------------" << std::endl;
		delete v;
		delete p;
		delete r;
	}
    {
        std::cout << std::endl << "--------------------     GIVEN TESTS    -----------------" << std::endl;

        Sorcerer	robert("Robert", "the Magnificent");
        Victim		jim("Jimmy");
        Peon		joe("Joe");
        std::cout << robert << jim << joe;
        robert.polymorph(jim);
        robert.polymorph(joe);
    }
    return (0);
}
